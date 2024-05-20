#include "Person.h"
#include <raylib.h>
#include <raymath.h>
#include <iostream>


Person::Person()
{
    position = {0.0f,0.0f};
    direction = {0.0f ,0.0f};
    sprite_scale = 10.0f;
    walkSpeed = 5.0f;
    sprite = LoadTexture("assets/char/person/justlilguy.png");
    collision = {0.0f, 0.0f , 80.0f, 80.0f};
}

void Person::Update()
{



}

Rectangle Person::get_collisiton(){
    return collision;
}






void Person::Draw()
{
    DrawTextureEx(sprite, position, rotation , sprite_scale , WHITE);

}