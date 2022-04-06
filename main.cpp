#include "Puppetops_App.hpp"

int main(int argc, char** argv){
    Puppetops_App app = Puppetops_App(argv[0], APP_OpenGL_4);
    
    app.run();
    return 0;
}