#include <sdl_cpp.h>
#include <iostream>

int main()
{
  try
  {
    sdl::context context;
    sdl::window mainWindow{"Mars Rover Simulator", 10, 10, 640, 480};
    sdl::renderer mainRenderer{mainWindow};

    sdl::events events;
    sdl::quit_event_bool quit{events};

    do
    {
      events.poll();

      mainRenderer.set_draw_colour(0x00, 0x00, 0x00);
      mainRenderer.clear();
      mainRenderer.present();
    } while (!quit);
  }
  catch(sdl::sdl_exception const& e)
  {
    std::cerr << e.what() << std::endl;
    return -1;
  }

  return 0;
}