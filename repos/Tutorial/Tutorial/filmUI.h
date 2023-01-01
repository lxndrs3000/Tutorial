#pragma once

#include "button.h"
#include "widget.h"
//vasikes sunarthseis pou prepei apo thnm main na kalw
class filmUI {
	Button * button=nullptr;
	Widget * widget1= nullptr;


public:
	void update();
	void draw();
	void intit();
	filmUI();
	~filmUI();


};
