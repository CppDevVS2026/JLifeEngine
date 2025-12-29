#include "pch.h"
#include "JLifeEngine.hpp"

void Engine::start()
{
	cmd_thread = std::thread([this] {
		while (running) {
			updateCmd();
			std::this_thread::sleep_for(std::chrono::milliseconds(16));
		}
	});

	render_thread = std::thread([this] {
		while (running) {
			render();
		}
	});
}
