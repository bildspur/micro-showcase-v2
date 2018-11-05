//Creator:      Alex Lehmann
//Date:         26.10.2018
//Description:  This Class defines the LED Tubes

#include "Tube.h"

Tube::Tube(uint8_t id, uint8_t address, uint8_t numChannels) {
    this->id = id;
    this->address = address;
    this->numChannels = numChannels;
};

//Id
uint8_t Tube::getId() {
    return this->id;
};

//Address
uint8_t Tube::getAddress() {
    return this->address;
};

//Channel Count
uint8_t Tube::getChannelNum() {
    return this->numChannels;
};
