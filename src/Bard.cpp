#include "Bard.h"
#include <raylib.h>
#include <raymath.h>
#include <iostream>


Bard::Bard()
{
    position = {0.0f,0.0f};
    direction = {0.0f ,0.0f};
    sprite_scale = 10.0f;
    walkSpeed = 5.0f;
    sprite = LoadTexture("assets/char/bard/bard.png");
    
    weapon_sprite = LoadTexture("assets/char/bard/weapon.png");
    weapon_sprite_scale = 3.0f;
}

void Bard::Update()
{



}

Rectangle Bard::get_collisiton(){
    return collision;
}

void Bard::Attack(){
   Vector2 weapon_pos = {-10.0f + position.x, + 40.0f +  position.y};
   DrawTextureEx(weapon_sprite, weapon_pos, -90.0f , weapon_sprite_scale , WHITE);
}


void Bard::Input(){
    if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)){

        Bard::Attack();
    }
}





void Bard::Move(){
    direction =  { 0.0f, 0.0f };

    if (IsKeyDown(KEY_A)){
        direction.x = direction.x - 1.0f;
    }
    if (IsKeyDown(KEY_D)){
        direction.x = direction.x + 1.0f;
    }
    if (IsKeyDown(KEY_W)){
        direction.y = direction.y - 1.0f;
    }
    if (IsKeyDown(KEY_S)){
        direction.y = direction.y + 1.0f;
    }

    direction = Vector2ClampValue(direction , 0.0f , 1.0f);


    position.x = position.x + walkSpeed*direction.x;
    position.y = position.y + walkSpeed*direction.y;
    collision.x = position.x;
    collision.y = position.y;
    std::cout << position.x << " " << position.y  << "\n";
}



void Bard::Draw()
{
    DrawTextureEx(sprite, position, rotation , sprite_scale , WHITE);

}