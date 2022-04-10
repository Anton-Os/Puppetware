#include "Topl_App.hpp"

struct Puppetware_App : public Topl_App {
    Puppetware_App(const char* execPath, APP_Backend b)
        : Topl_App(execPath, "Puppetware", b){}

    void init() override;
	void loop(unsigned long frame) override;

    Topl_Scene scene_main;
    Topl_Pipeline* pipeline;
}