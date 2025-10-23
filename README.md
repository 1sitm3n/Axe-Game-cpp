Axe Game (C++ / Raylib)

A simple interactive 2D mini-game written in C++ using the Raylib graphics library.
The player controls a blue circle that can move left and right to avoid a red falling axe.
If the axe collides with the circle, the game ends with a "Game Over" message.

**Overview**
This project demonstrates fundamental C++ programming concepts, real-time input handling, and basic collision detection using Raylib’s 2D rendering system.
It serves as an ideal foundation for beginners learning game loops, keyboard input, and bounding box collisions.

**Core Features**
Player Movement: Move the blue circle using the A and D keys.
Enemy Object: A red axe continuously moves vertically between the top and bottom of the screen.
Collision Detection: If the circle’s bounding area overlaps with the axe’s, the game displays a "Game Over" message.
Smooth Animation: 60 frames per second rendering for fluid motion.
Fundamental Raylib Usage: Demonstrates window creation, drawing shapes, handling input, and frame updates.

**Code Highlights**
Braced Initialization and Assignment Initialization are used to demonstrate modern C++ initialization styles.
Edge Calculations: The circle and axe edges are dynamically updated every frame for collision accuracy.
Boolean Collision Logic: A clear logical expression handles overlap detection between two objects.
Game Loop: Implements a classical while (!WindowShouldClose()) loop that runs the entire game cycle.


**Requirements**
C++17 or newer
Raylib library (version 4.0 or above recommended)
g++ (MinGW64) or MSYS2 environment for Windows


**Installation and Setup**
Install Raylib (MSYS2 / MinGW64)
pacman -Syu
pacman -S mingw-w64-x86_64-raylib

**Compile the Game**
From your project directory:
g++ axe_game.cpp -o axe_game.exe -lraylib -lopengl32 -lgdi32 -lwinmm


**Run the Game**
./axe_game.exe


**Controls**
A - Move circle left
D - Move circle right
ESC - Close window



**Game Logic Flow**
1.Initialize window and variables.
2.Start main game loop.
3.Update object positions and edge values.
4.Check for collision.
5.Render scene.
6.Repeat until window closed.

**Learning Outcomes**
- Structuring a C++ program with Raylib.
- Understanding game loop architecture.
- Implementing basic collision detection.
- Managing real-time keyboard inputs.

License

This project is released under the MIT License.
You are free to use, modify, and distribute this code with attribution.
