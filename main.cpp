#include "Puppetware_App.hpp"

int main(int argc, char** argv){
    Puppetware_App app = Puppetware_App(argv[0], APP_OpenGL_4);
    
    app.run();
    return 0;
}