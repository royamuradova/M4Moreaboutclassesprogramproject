#include "PoliceOfficer.h"
#include <iostream>

PoliceOfficer::PoliceOfficer(std::string officerName, std::string badge)
    : name(officerName), badgeNumber(badge) {}

void PoliceOfficer::inspectCar(const ParkedCar& car, const ParkingMeter& meter) {
    int overTime = car.getMinutesParked() - meter.getMinutesPurchased();
    if (overTime > 0) {
        ParkingTicket ticket(car, name, badgeNumber, overTime);
        ticket.printTicket();
    } else {
        std::cout << "No violation. Car is legally parked." << std::endl;
    }
}
