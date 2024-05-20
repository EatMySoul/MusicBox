#include <raylib.h>

class Person
{
public:
    Person();
    void Update();
    void Draw();

    void Set_position();
    void Set_direction();
    void Move();
    Rectangle get_collisiton();

private:

    float walkSpeed;
    Vector2 position;
    Vector2 direction;
    Rectangle collision;
    //
    float sprite_scale;
    Texture2D sprite;
    // Ниже ълам
    float rotation;


};