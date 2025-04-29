#ifndef PARKINGMETER_H
#define PARKINGMETER_H

// The ParkingMeter class holds how many minutes of parking time were purchased.
class ParkingMeter {
private:
    int minutesPurchased;

public:
    // Constructor to initialize meter time
    ParkingMeter(int minutes);

    // Getter for meter time
    int getMinutesPurchased() const;
};

#endif
