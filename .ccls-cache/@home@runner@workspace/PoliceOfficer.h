#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

// The PoliceOfficer class checks parked cars and issues tickets when needed.
class PoliceOfficer {
private:
    std::string name;
    std::string badgeNumber;

public:
    // Constructor
    PoliceOfficer(std::string officerName, std::string badge);

    // Examines a parked car and meter to determine if ticket should be issued
    void inspectCar(const ParkedCar& car, const ParkingMeter& meter);
};

#endif

