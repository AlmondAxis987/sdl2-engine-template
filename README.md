# sdl2-engine-template
A simple SDL2 Engine Boilerplate in C++ for Visual Studio Code editor. (Windowsx64)
If you are using VS Code, a Task called "SDL_Run" is set up to build the code and run the game.
If you are not using VS Code, a batch file "run.bat" is given which will also build and run the game.

Simple Instructions:
Declare sprites and other variables in "game.hpp", then define them in the "load()" function in 1st Function Pair (functions1.cpp)
They can be rendered in the "draw()" function, also in the 1st Function Pair, and updated in "update()" function present in 2nd Function Pair (functions2.cpp)

Any and all events will be handled in the "events(SDL_Event event)" function in 2nd Function Pair.
Comments explaining functions and files are placed wherever necessary.
