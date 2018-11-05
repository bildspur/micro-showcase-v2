//Creator:      Alex Lehmann
//Date:         05.11.2018
//Description:  StrobeScene defines a lightshow intendet for testing

#include "StrobeScene.h"

DMXESPSerial dmx;

StrobeScene::StrobeScene() : BaseScene() {
    dmx.init(512);
}

void StrobeScene::render(Tube tube) {
    BaseScene::render(tube);
    for (int i = 0; i < 512; i++) {
    dmx.write(i, 255);
    }
    dmx.update();           // update the DMX bus
    delay(1000);            // wait for 1s

    for (int i = 0; i < 512; i++) {
    dmx.write(i, 0);
    }
    dmx.update();
    delay(1000);
};