#include "flixel++/FlxKeyboard.hpp"

Flx::Keyboard::Keyboard()
    : keys(new bool[255])
{
}

bool Flx::Keyboard::pressed(const unsigned  char key)
{
    return keys[key];
}

bool Flx::Keyboard::justPressed(const unsigned char key){
    bool pressed = keys[key];
    keys[key] = false;
    return pressed;
}