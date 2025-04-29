#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include "ParkedCar.h"

class ParkingTicket {
private:
    ParkedCar car;
    std::string officerName;
    std::string officerBadge;
    int fineAmount;

public:
    ParkingTicket(ParkedCar car, std::string name, std::string badge, int overMinutes);
    void printTicket() const;
};

#endif
