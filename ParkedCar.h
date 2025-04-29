#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

// The ParkedCar class stores details about a parked vehicle.
class ParkedCar {
private:
    std::string make;
    std::string model;
    std::string color;
    std::string licenseNumber;
    int minutesParked;

public:
    // Constructor to initialize the parked car attributes
    ParkedCar(std::string mk, std::string mdl, std::string clr, std::string lic, int min);

    // Getters for each car attribute
    std::string getMake() const;
    std::string getModel() const;
    std::string getColor() const;
    std::string getLicenseNumber() const;
    int getMinutesParked() const;
};

#endif
