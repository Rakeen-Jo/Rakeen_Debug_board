#include <gui/ckeyboardscreen_screen/CKeyboardScreenView.hpp>

extern Unicode::UnicodeChar keyboardBuffer[2][18];
extern uint8_t keyboardSelection;

CKeyboardScreenView::CKeyboardScreenView()
{
	Ckeyboard.setPosition(80, 16, 320, 240);
	add(Ckeyboard);
}

void CKeyboardScreenView::setupScreen()
{
    CKeyboardScreenViewBase::setupScreen();
}

void CKeyboardScreenView::tearDownScreen()
{
    CKeyboardScreenViewBase::tearDownScreen();
}

void CKeyboardScreenView::getKeyboardBuffer()
{
	Unicode::UnicodeChar* buff = Ckeyboard.getBuffer();
	Unicode::strncpy(keyboardBuffer[keyboardSelection], buff, Unicode::strlen(buff) + 1);
}
