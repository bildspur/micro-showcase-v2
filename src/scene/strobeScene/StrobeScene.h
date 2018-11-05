//HEADER
//Creator:      Alex Lehmann
//Date:         05.11.2018
//Description:  StrobeScene defines a lightshow intendet for testing

#ifndef StrobeScene_H
#define StrobeScene_H

#include <Arduino.h>
#include <ESPDMX.h>
#include "scene/BaseScene.h"

class StrobeScene : public BaseScene {
    public:
        explicit StrobeScene();
        void render(Tube Tube) override;
};

#endif //StrobeScene_H