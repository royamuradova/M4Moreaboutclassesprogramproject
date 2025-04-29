#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include "ParkedCar.h"

// The ParkingTicket class generates a ticket for an illegally parked car.
class ParkingTicket {
private:
    ParkedCar car;
    std::string officerName;
    std::string officerBadge;
    int fineAmount;

public:
    // Constructor calculates the fine and stores ticket details
    ParkingTicket(ParkedCar car, std::string name, std::string badge, int overMinutes);

    // Print out the ticket details
    void printTicket() const;
};

#endif
