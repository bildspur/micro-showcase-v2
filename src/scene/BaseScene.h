//HEADER
//Creator:      Alex Lehmann
//Date:         04.11.2018
//Description:  Base Class, Scene defines the running light show

#ifndef BaseScene_H
#define BaseScene_H

class BaseScene {
        const char *name;
    public:
        BaseScene(const char);
        virtual void renderTube();
};

 #endif //BaseScene_H