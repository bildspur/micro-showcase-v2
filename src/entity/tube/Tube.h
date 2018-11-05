//HEADER
//Creator:      Alex Lehmann
//Date:         26.10.2018
//Description:  This Class defines the LED Tubes

#ifndef Tube_H
#define Tube_H

#include <inttypes.h>

class Tube {
        uint8_t id,
                address,
                numChannels;
    public:
        Tube(uint8_t, uint8_t, uint8_t);
        uint8_t getId(),
                getAddress(),
                getChannelNum();
    
};

#endif //TUBE_H