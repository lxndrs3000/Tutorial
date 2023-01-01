#include "button.h"
#include "graphics.h"

void Button::update()	//kanw allages sta state varibles tou kathe antikeimenou mou
{
	//xrhsh plhktrologiou
	if (graphics::getKeyState(graphics::SCANCODE_RIGHT)) {
			
	}
	if(graphics::getMouseState)
	if (graphics::getKeyState(graphics::SCANCODE_LEFT)) {

	}
	if (graphics::getKeyState(graphics::SCANCODE_RETURN)) {

	}
	if (graphics::getMouseState);//TODO: For every possible clicking

}

void Button::draw()
{
	//Right Arrow
	graphics::Brush br;
	br.texture = std::string(ASSET_PATH) + "rarrow.png";
	graphics::setScale(0.5f, 0.5f);
	br.outline_opacity = 0.0f;
	graphics::drawRect(CANVAS_WIDTH/1.15, CANVAS_HEIGHT / 1.2, CANVAS_WIDTH, CANVAS_WIDTH, br);

	//Left Arrow
	br.texture = std::string(ASSET_PATH) + "larrow.png";
	graphics::setScale(0.5f, 0.5f);
	br.outline_opacity = 0.0f;
	graphics::drawRect(CANVAS_WIDTH / 8, CANVAS_HEIGHT / 1.15, CANVAS_WIDTH, CANVAS_WIDTH, br);

	
	
}

void Button::intit()
{
}
