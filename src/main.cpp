#include <Arduino.h>
#include <inttypes.h>

#include "entity/showCase/ShowCase.h"
#include "scene/strobeScene/WaveScene.h"

int8_t numTubes = 7;
int8_t numChannels = 72;

BaseScene* activeScene = new StrobeScene();
auto Installation = ShowCase(numTubes, numChannels, activeScene);

void setup() {
    Serial.begin(9600);
}

void loop() {
    Installation.render();
}