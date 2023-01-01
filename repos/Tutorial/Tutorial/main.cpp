#include "graphics.h"
#include "filmUI.h"
#include "config.h"




// The custom callback function that the library calls 
// to check for and set the current application state.
void update(float ms)   //kaleite opote uparxei xronos na enhmerwsei oles mas tis metavlhtes
{
    filmUI * ui =reinterpret_cast<filmUI *> (graphics::getUserData());  //from void to filmUI
    ui->update();
}

// The window content drawing function.
void draw() //kalw tis antoistixes klhseis 
{
    filmUI* ui = reinterpret_cast<filmUI*> (graphics::getUserData());  //from void to filmUI
    ui->draw();
}

int main()
{

    filmUI myUI;

    graphics::createWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Tutorial");

    graphics::setUserData(&myUI);


    graphics::setDrawFunction(draw);
    graphics::setUpdateFunction(update);

    graphics::setCanvasSize(CANVAS_WIDTH, CANVAS_HEIGHT);
    graphics::setCanvasScaleMode(graphics::CANVAS_SCALE_FIT);

  
    graphics::setFont("Assets\\orange juice 2.0.ttf");

    myUI.intit();
    graphics::startMessageLoop();
        
    return 0;
}