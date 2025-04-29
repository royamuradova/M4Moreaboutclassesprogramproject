#include "PoliceOfficer.h"
#include <iostream>

// Constructor initializes officer's identity
PoliceOfficer::PoliceOfficer(std::string officerName, std::string badge)
    : name(officerName), badgeNumber(badge) {}

// Check if a car is over parked; issue a ticket if needed
void PoliceOfficer::inspectCar(const ParkedCar& car, const ParkingMeter& meter) {
    int overTime = car.getMinutesParked() - meter.getMinutesPurchased();
    if (overTime > 0) {
        // Generate and display a parking ticket
        ParkingTicket ticket(car, name, badgeNumber, overTime);
        ticket.printTicket();
    } else {
        std::cout << "No violation. Car is legally parked." << std::endl;
    }
}
