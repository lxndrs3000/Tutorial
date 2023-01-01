#include "filmUI.h"
#include "graphics.h"
#include "config.h"
void filmUI::update()	//Constructor
{

	button =new Button;
	widget1 = new Widget;

	if (button)
		button->update();

}

void filmUI::draw()
{
	//Draw background
	graphics::Brush br;
	br.texture = std::string(ASSET_PATH) + "background.png";
	br.outline_opacity = 0.0f;
	
	graphics::setWindowBackground(br);

	graphics::drawRect(CANVAS_WIDTH / 2, CANVAS_HEIGHT / 2, CANVAS_WIDTH, CANVAS_WIDTH, br);

	//Draw button
	if (button)
		button->draw();
		
}

void filmUI::intit()
{
}

filmUI::filmUI()
{
}

filmUI::~filmUI()	//Destructor
{
	if(button)
		delete button;
		
}
