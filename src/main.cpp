#include <raylib.h>
#include <raymath.h>

#include "ball.h"
#include <iostream>
#include "Bard.h"
#include "person.h"




int main()
{

    Color darkGreen = Color{20, 160, 133, 255};

    const int screenWidth = 800;
    const int screenHeight = 600;   


    
 

  //  Ball ball = Ball();

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);
    Texture t1 = LoadTexture("assets/char/bard/bard.png");

    Bard test;
    Person testPerson;



    while (!WindowShouldClose())
    {
        
        BeginDrawing();
    
            ClearBackground(darkGreen);
            testPerson.Draw();
            test.Move();
            test.Draw();
            test.Input();
            if  (CheckCollisionRecs(test.get_collisiton(), testPerson.get_collisiton())){
              std::cout << "we are colliding \n";
            }

        

           

    
          //  if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
           //     DrawTexturePro(TheHero,frameRec, frameRec3 , pos,0.0f, WHITE);

 
        EndDrawing();
    }

    CloseWindow();
    return 0;
}