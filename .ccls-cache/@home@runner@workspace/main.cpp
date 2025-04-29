#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"

int main() {
    ParkedCar car("Toyota", "Corolla", "Blue", "ABC123", 125);
    ParkingMeter meter(60);
    PoliceOfficer officer("Jane Doe", "54789");

    officer.inspectCar(car, meter);

    return 0;
}
