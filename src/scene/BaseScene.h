//HEADER
//Creator:      Alex Lehmann
//Date:         04.11.2018
//Description:  Base Class, Scene defines the running light show

#ifndef BaseScene_H
#define BaseScene_H

#include <vector>
#include "entity/tube/Tube.h"

class BaseScene {
    public:
        explicit BaseScene();
        virtual void render(std::vector<Tube>&);
};

 #endif //BaseScene_H