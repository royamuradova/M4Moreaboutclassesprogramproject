#include "ParkingMeter.h"

// Constructor initializes purchased time
ParkingMeter::ParkingMeter(int minutes) : minutesPurchased(minutes) {}

// Return the minutes purchased
int ParkingMeter::getMinutesPurchased() const { return minutesPurchased; }

