#include "raylib.h"
int main()
{
    int width{800}; // Braced Initialisation. 
    int height = 450; //Initialisation via Assignment. 
    InitWindow(width, height, "Mehmet's Window");

    // Circle Coordinates. 
    int circle_x{100};
    int circle_y{100};
    int circle_radius{25}; 

    // Circle Edges.
    int l_circle_x{circle_x - circle_radius};
    int r_circle_x{circle_x + circle_radius};
    int u_circle_y{circle_y - circle_radius};
    int b_circle_y{circle_y + circle_radius};


    // Axe Coordinates. 
    int axe_x{300};
    int axe_y{0};
    int axe_length{50};

    // Axe Edges
    int l_axe_x{axe_x};
    int r_axe_x{axe_x + axe_length};
    int u_axe_y{axe_y};
    int b_axe_y{axe_y + axe_length};


    // Direction
    int direction{10};

    // Collision with Axe
    bool collision_with_axe = 
                            (b_axe_y >= u_circle_y) && 
                            (u_axe_y <= b_circle_y) && 
                            (r_axe_x >= l_circle_x) && 
                            (l_axe_x <= r_circle_x);

    SetTargetFPS(60);
    while (WindowShouldClose() == false) // WindowShouldClose is a boolean function with a true output. When you make it false via ==, it turns the output false, because true is not false. While functions are used if you want something done WHILE something is being done. So While the Window is open, we want the game logic to start by begin drawing, clear background, draw circle and rectangle, and their mechanics. 
    {
        BeginDrawing();
        ClearBackground(WHITE);

        if (collision_with_axe)
            {
                DrawText("Game Over!", 400, 200, 20, RED);
            }

        else
        { 
            // Game Logic Begins.

            // Update the Edges
            l_circle_x = circle_x - circle_radius;
            r_circle_x = circle_x + circle_radius;
            u_circle_y = circle_y - circle_radius;
            b_circle_y = circle_y + circle_radius;
            l_axe_x = axe_x;
            r_axe_x = axe_x + axe_length;
            u_axe_y = axe_y;
            b_axe_y = axe_y+ axe_length;

            // Update Collision with Axe
            collision_with_axe = 
                            (b_axe_y >= u_circle_y) && 
                            (u_axe_y <= b_circle_y) && 
                            (r_axe_x >= l_circle_x) && 
                            (l_axe_x <= r_circle_x);

            DrawCircle(circle_x, circle_y, circle_radius, BLUE);
            DrawRectangle(axe_x, axe_y, axe_length, axe_length, RED);

            axe_y += direction;  // this is the same as axe_y = axe_y + 10. the += operator means add 10 to axe_y and make axe_y axe_y+10. 

            // This if function says if the axe has reached more than 450 pixels in the Y direction, reverse the direction of the axe OR (||), if the axe has reached less than 0 pixels, reverse the direction of the axe. 
            if (axe_y > height || axe_y < 0)
            {
                direction = -direction;

            }

            if (IsKeyDown(KEY_D) && circle_x < width)
            {
                circle_x += 10;
            }

            if (IsKeyDown(KEY_A) && circle_x > 0)
            {
                circle_x -= 10; // same logic as +=, but -=. 
            }
        }


        EndDrawing();
    }
}