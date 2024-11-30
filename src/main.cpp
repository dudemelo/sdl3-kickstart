#include "SDL.h"
#include "SDL_events.h"
#include "SDL_video.h"

int main() {

  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window *window =
      SDL_CreateWindow("SDL3 Kickstart", SDL_WINDOWPOS_CENTERED,
                       SDL_WINDOWPOS_CENTERED, 800, 600, 0);
  SDL_GetWindowSurface(window);
  SDL_Event event;

  while (true) {
    SDL_PollEvent(&event);
    if (event.type == SDL_QUIT) {
      break;
    }
    SDL_UpdateWindowSurface(window);
  }

  SDL_DestroyWindowSurface(window);
  SDL_DestroyWindow(window);

  return 0;
}
