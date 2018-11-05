//Creator:      Alex Lehmann
//Date:         26.10.2018
//Description:  This Class defines the whole Showcase


#include "ShowCase.h"

ShowCase::ShowCase(uint8_t numTubes, uint8_t numTubeChannels, BaseScene ActiveScene) {
    this->ActiveScene = ActiveScene;
    
    for(uint8_t numTube = 1; numTube <= numTubes; numTube++) {
        this->Tubes.push_back(Tube(numTube, numTube*numTubeChannels, numTubeChannels));
    }
};
 
void ShowCase::render() {
}

//Tubes
inline std::vector<Tube> ShowCase::getTubes() {
    return this-> Tubes;
};