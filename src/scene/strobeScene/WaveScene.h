//HEADER
//Creator:      Alex Lehmann
//Date:         05.11.2018
//Description:  StrobeScene defines a lightshow intendet for testing

#ifndef WaveScene_H
#define WaveScene_H

#include <Arduino.h>
#include <ESPDMX.h>
#include "scene/BaseScene.h"

class WaveScene : public BaseScene {
    public:
        explicit WaveScene();
        void render(std::vector<Tube>&) override;
};

#endif //WaveScene_H