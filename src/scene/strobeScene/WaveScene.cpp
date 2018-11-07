//Creator:      Alex Lehmann
//Date:         05.11.2018
//Description:  StrobeScene defines a lightshow intendet for testing

#include "WaveScene.h"
#include <Arduino.h>

DMXESPSerial Dmx;

uint8_t wave [27];
WaveScene::WaveScene() : BaseScene() {
    Dmx.init(512);
    for(uint8_t i = 0; i < sizeof(wave); ++i) {
        wave[i] = i;
    }
}


void WaveScene::render(std::vector<Tube>& Tubes) {
    BaseScene::render(Tubes);;

    for(uint16_t tubeID = 0; tubeID != Tubes.size(); ++tubeID) {
        for(uint16_t chnl = 0; chnl < Tubes.at(tubeID).getChannelNum(); ++chnl) { 
            Dmx.write(Tubes.at(tubeID).getAddress()+chnl, 100);
        }
        for(uint8_t i = 0; i < sizeof(wave); ++i) {
            Dmx.write(Tubes.at(tubeID).getAddress()+wave[i], 255-(i*5));
        }
    }
    Dmx.update();
    delay(50);
        for(uint8_t i = 0; i < sizeof(wave); ++i) {
            if(wave[i]<72) {
                wave[i] = wave[i]+3;
            } else {
                wave[i] = wave[i]-72;
            }
        }
};