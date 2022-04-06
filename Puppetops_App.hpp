#include "Topl_App.hpp"

struct Puppetops_App : public Topl_App {
    Puppetops_App(const char* execPath, APP_Backend b)
        : Topl_App(execPath, "Puppetops", b){}

    void init() override;
	void loop(unsigned long frame) override;

    Topl_Scene scene_main;
    Topl_Pipeline* pipeline;
}