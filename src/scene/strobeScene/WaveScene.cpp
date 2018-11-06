//Creator:      Alex Lehmann
//Date:         05.11.2018
//Description:  StrobeScene defines a lightshow intendet for testing

#include "WaveScene.h"
#include <Arduino.h>

DMXESPSerial Dmx;

WaveScene::WaveScene() : BaseScene() {
    Dmx.init(512);
}

void WaveScene::render(std::vector<Tube>& Tubes) {
    BaseScene::render(Tubes);;
    std::for_each(Tubes.begin(), Tubes.end(),
        [](Tube tube) {         
            for(uint16_t chnl = tube.getAddress(); chnl <= tube.getAddress()+tube.getChannelNum(); ++chnl) {
                Dmx.write(chnl, 255);
                Dmx.update();
            }
             for(uint16_t chnl = tube.getAddress(); chnl <= tube.getAddress()+tube.getChannelNum(); ++chnl) {
                Dmx.write(chnl, 100);
                Dmx.update();
            }
            delay(100);
        }
    );
};