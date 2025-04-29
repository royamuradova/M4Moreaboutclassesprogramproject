#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

class ParkedCar {
private:
    std::string make;
    std::string model;
    std::string color;
    std::string licenseNumber;
    int minutesParked;

public:
    ParkedCar(std::string mk, std::string mdl, std::string clr, std::string lic, int min);

    std::string getMake() const;
    std::string getModel() const;
    std::string getColor() const;
    std::string getLicenseNumber() const;
    int getMinutesParked() const;
};

#endif
