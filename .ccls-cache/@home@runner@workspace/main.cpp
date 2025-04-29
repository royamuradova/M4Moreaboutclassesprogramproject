#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"

int main() {
    // Create a car parked for 125 minutes
    ParkedCar car("Toyota", "Corolla", "Blue", "ABC123", 125);

    // Meter has only 60 minutes paid
    ParkingMeter meter(60);

    // Officer details
    PoliceOfficer officer("Jane Doe", "54789");

    // Officer checks the car and prints ticket if time exceeded
    officer.inspectCar(car, meter);

    return 0;
}
