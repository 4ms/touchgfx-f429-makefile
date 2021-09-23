/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>

screenViewBase::screenViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    scrollableContainer1.setPosition(0, 0, 250, 250);
    scrollableContainer1.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    circle1.setPosition(80, 65, 80, 80);
    circle1.setCenter(40, 40);
    circle1.setRadius(40);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(235, 5, 5));
    circle1.setPainter(circle1Painter);

    add(__background);
    add(scrollableContainer1);
    add(circle1);
}

void screenViewBase::setupScreen()
{

}