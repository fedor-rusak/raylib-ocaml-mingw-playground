#include <raylib.h>

#include <wchar.h>
#include <stdio.h>

#include "caml/sys.h"
#include <caml/callback.h>

extern int fib(int n);

int main() {
  // need to start caml_runtime before calling callback functions
  char_os** caml_main_args = malloc(sizeof(char_os*));
  caml_main_args[0] = NULL;
  caml_main(caml_main_args);

  int result = fib(10);

  printf("%d\n", result);

    const int screenWidth = 800;
  const int screenHeight = 450;

  InitWindow(screenWidth, screenHeight, "raylib [<module>] example - <name>");

  // TODO: Load resources / Initialize variables at this point

  SetTargetFPS(60);
  //--------------------------------------------------------------------------------------

  // Main game loop
  while (!WindowShouldClose())    // Detect window close button or ESC key
  {
      // Update
      //----------------------------------------------------------------------------------
      // TODO: Update variables / Implement example logic at this point
      //----------------------------------------------------------------------------------

      // Draw
      //----------------------------------------------------------------------------------
      BeginDrawing();

          ClearBackground(RAYWHITE);

          // TODO: Draw everything that requires to be drawn at this point:

          DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);  // Example

      EndDrawing();
      //----------------------------------------------------------------------------------
  }

  // De-Initialization
  //--------------------------------------------------------------------------------------

  // TODO: Unload all loaded resources at this point

  CloseWindow();        // Close window and OpenGL context
  //--------------------------------------------------------------------------------------

  return 0;
}