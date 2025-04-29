#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

class PoliceOfficer {
private:
    std::string name;
    std::string badgeNumber;

public:
    PoliceOfficer(std::string officerName, std::string badge);
    void inspectCar(const ParkedCar& car, const ParkingMeter& meter);
};

#endif
