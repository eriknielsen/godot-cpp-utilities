#include "stats_label.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void StatsLabel::_bind_methods(){

	
}

StatsLabel::StatsLabel() {
	
}

StatsLabel::~StatsLabel() {
}

void StatsLabel::_process(double delta) {
	double fps = Performance::get_singleton()->get_monitor(Performance::Monitor::TIME_FPS);
	double process_time = Performance::get_singleton()->get_monitor(Performance::Monitor::TIME_PROCESS);
	double physics_process_time = Performance::get_singleton()->get_monitor(Performance::Monitor::TIME_PHYSICS_PROCESS);
	double navigation_process_time = Performance::get_singleton()->get_monitor(Performance::Monitor::TIME_NAVIGATION_PROCESS);
	set_text("FPS: " + rtos(fps) + "\nProcess time: " + rtos(process_time) + "\nPhysics time: " + rtos(physics_process_time) + "\nNavigation time: " + rtos(navigation_process_time));
}
