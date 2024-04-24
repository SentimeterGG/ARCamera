#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <godot_cpp/classes/image_texture.hpp>

namespace godot {

class GDExample : public RefCounted {
	GDCLASS(GDExample, RefCounted)

private:
	double time_passed;
	Ref<Image> godotImg;

protected:
	static void _bind_methods();

public:
	GDExample();
	~GDExample();

	Ref<Image> get_godot_image();
};

} //namespace godot

#endif