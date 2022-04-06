#include "Topl_App.hpp"

struct PixelPuppets_App : public Topl_App {
    PixelPuppets_App(const char* execPath, APP_Backend b)
        : Topl_App(execPath, "PixelPuppets", b){}

    void init() override;
	void loop(unsigned long frame) override;

    Topl_Scene scene_main;
    Topl_Pipeline* pipeline;
}