#include <raylib.h>

class Bard
{
public:
    Bard();
    void Update();
    void Draw();
    void Input();
    void Attack();


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


    Texture2D weapon_sprite;
    float weapon_sprite_scale;


};