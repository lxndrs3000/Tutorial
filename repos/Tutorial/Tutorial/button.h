#pragma once
#include "widget.h"
#include "config.h"

class Button :public Widget {
	float pos_x=CANVAS_WIDTH/2, pos_y=CANVAS_HEIGHT/2;
public:
	void update();
	void draw() ;

	void intit() ;
};