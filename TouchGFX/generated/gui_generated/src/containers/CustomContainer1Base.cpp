/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/CustomContainer1Base.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

CustomContainer1Base::CustomContainer1Base()
{
    setWidth(467);
    setHeight(15);
    background_scroll.setPosition(0, 0, 467, 15);
    background_scroll.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    textArealist.setPosition(4, 0, 459, 15);
    textArealist.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArealist.setLinespacing(0);
    Unicode::snprintf(textArealistBuffer, TEXTAREALIST_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID37).getText());
    textArealist.setWildcard(textArealistBuffer);
    textArealist.setTypedText(touchgfx::TypedText(T_SINGLEUSEID36));

    add(background_scroll);
    add(textArealist);
}

void CustomContainer1Base::initialize()
{

}

