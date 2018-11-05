//HEADER
//Creator:      Alex Lehmann
//Date:         26.10.2018
//Description:  This Class defines the whole Showcase

#ifndef ShowCase_H
#define ShowCase_H

#include <vector>
#include <inttypes.h>
#include "entity/tube/Tube.h"
#include "scene/BaseScene.h"

class ShowCase {
        std::vector<Tube> Tubes;
        BaseScene* ActiveScene;
    public:
        ShowCase(uint8_t, uint8_t, BaseScene*);
        void render();
};

#endif //ShowCase_H

