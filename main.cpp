#include "PixelPuppets_App.hpp"

int main(int argc, char** argv){
    PixelPuppets_App app = PixelPuppets_App(argv[0], APP_OpenGL_4);
    
    app.run();
    return 0;
}