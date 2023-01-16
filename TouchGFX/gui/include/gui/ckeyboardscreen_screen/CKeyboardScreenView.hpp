#ifndef CKEYBOARDSCREENVIEW_HPP
#define CKEYBOARDSCREENVIEW_HPP

#include <gui_generated/ckeyboardscreen_screen/CKeyboardScreenViewBase.hpp>
#include <gui/ckeyboardscreen_screen/CKeyboardScreenPresenter.hpp>
#include <gui/common/CustomKeyboard.hpp>

class CKeyboardScreenView : public CKeyboardScreenViewBase
{
public:
    CKeyboardScreenView();
    virtual ~CKeyboardScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void getKeyboardBuffer();
protected:
    CustomKeyboard Ckeyboard;
};

#endif // CKEYBOARDSCREENVIEW_HPP
