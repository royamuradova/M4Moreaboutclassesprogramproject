#include "ParkedCar.h"

ParkedCar::ParkedCar(std::string mk, std::string mdl, std::string clr, std::string lic, int min)
    : make(mk), model(mdl), color(clr), licenseNumber(lic), minutesParked(min) {}

std::string ParkedCar::getMake() const { return make; }
std::string ParkedCar::getModel() const { return model; }
std::string ParkedCar::getColor() const { return color; }
std::string ParkedCar::getLicenseNumber() const { return licenseNumber; }
int ParkedCar::getMinutesParked() const { return minutesParked; }
