/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/ckeyboardscreen_screen/CKeyboardScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

CKeyboardScreenViewBase::CKeyboardScreenViewBase() :
    buttonCallback(this, &CKeyboardScreenViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_CIRCUIT_WHITE_ID));
    scalableImage1.setPosition(0, 0, 480, 272);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    textArea1_1.setXY(7, 254);
    textArea1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID29));

    BTN_RETURN.setXY(7, 6);
    BTN_RETURN.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_RETURN_ID), touchgfx::Bitmap(BITMAP_BTN_RETURN_ID));
    BTN_RETURN.setLabelText(touchgfx::TypedText(T_SINGLEUSEID30));
    BTN_RETURN.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    BTN_RETURN.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    BTN_RETURN.setAction(buttonCallback);

    BTN_ENTER.setXY(403, 238);
    BTN_ENTER.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_RETURN_ID), touchgfx::Bitmap(BITMAP_BTN_RETURN_ID));
    BTN_ENTER.setLabelText(touchgfx::TypedText(T_SINGLEUSEID31));
    BTN_ENTER.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    BTN_ENTER.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    BTN_ENTER.setAction(buttonCallback);

    add(__background);
    add(scalableImage1);
    add(textArea1_1);
    add(BTN_RETURN);
    add(BTN_ENTER);
}

void CKeyboardScreenViewBase::setupScreen()
{

}

void CKeyboardScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &BTN_RETURN)
    {
        //Interaction1
        //When BTN_RETURN clicked change screen to Ser_mon
        //Go to Ser_mon with screen transition towards West
        application().gotoSer_monScreenSlideTransitionWest();
    }
    else if (&src == &BTN_ENTER)
    {
        //ButtonOK
        //When BTN_ENTER clicked call virtual function
        //Call getKeyboardBuffer
        getKeyboardBuffer();

        //ChangedPrevScreen
        //When ButtonOK completed change screen to Ser_mon
        //Go to Ser_mon with screen transition towards West
        application().gotoSer_monScreenSlideTransitionWest();
    }
}
