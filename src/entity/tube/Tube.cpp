//Creator:      Alex Lehmann
//Date:         26.10.2018
//Description:  This Class defines the LED Tubes

#include "Tube.h"

Tube::Tube(uint16_t id, uint16_t address, uint16_t numChannels) {
    this->id = id;
    this->address = address;
    this->numChannels = numChannels;
};

//Id
uint16_t Tube::getId() {
    return this->id;
};

//Address
uint16_t Tube::getAddress() {
    return this->address;
};

//Channel Count
uint16_t Tube::getChannelNum() {
    return this->numChannels;
};
