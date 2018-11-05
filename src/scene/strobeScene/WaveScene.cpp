//Creator:      Alex Lehmann
//Date:         05.11.2018
//Description:  StrobeScene defines a lightshow intendet for testing

#include "WaveScene.h"

DMXESPSerial Dmx;

StrobeScene::StrobeScene() : BaseScene() {
    Dmx.init(512);
}

void StrobeScene::render(std::vector<Tube> Tubes) {
    BaseScene::render(Tubes);

    std::for_each(Tubes.begin(), Tubes.end(),
        [](Tube tube) {
            for(int i = (tube.getChannelNum()*tube.getAddress()); i >= tube.getAddress(); --i) {
                Dmx.write(i, 255);
                Dmx.update();
                delay(10);
                Dmx.write(i, 0);
                Dmx.update();
                delay(10);
            }
        }
);
};