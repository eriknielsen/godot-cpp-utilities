#ifndef STATSLABEL_H
#define STATSLABEL_H

#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/classes/performance.hpp>

namespace godot {

class StatsLabel : public Label {
	GDCLASS(StatsLabel, Label)
private:
	
protected:
	static void _bind_methods();
public:
	StatsLabel();
	~StatsLabel();

	void _process(double delta) override;
	
	
};
}
#endif 

