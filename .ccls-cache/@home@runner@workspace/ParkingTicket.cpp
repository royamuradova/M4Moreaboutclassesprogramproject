#include "ParkingTicket.h"
#include <iostream>

ParkingTicket::ParkingTicket(ParkedCar c, std::string name, std::string badge, int overMinutes)
    : car(c), officerName(name), officerBadge(badge) {
    fineAmount = 25;
    if (overMinutes > 60) {
        fineAmount += 10 * ((overMinutes - 1) / 60);
    }
}

void ParkingTicket::printTicket() const {
    std::cout << "Parking Ticket Issued!" << std::endl;
    std::cout << "Car - Make: " << car.getMake()
              << ", Model: " << car.getModel()
              << ", Color: " << car.getColor()
              << ", License: " << car.getLicenseNumber() << std::endl;
    std::cout << "Fine: $" << fineAmount << std::endl;
    std::cout << "Officer: " << officerName << ", Badge #: " << officerBadge << std::endl;
}
