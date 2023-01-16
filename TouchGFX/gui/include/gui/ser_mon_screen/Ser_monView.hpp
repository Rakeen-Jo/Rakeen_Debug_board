#ifndef SER_MONVIEW_HPP
#define SER_MONVIEW_HPP

#include <gui_generated/ser_mon_screen/Ser_monViewBase.hpp>
#include <gui/ser_mon_screen/Ser_monPresenter.hpp>
#include <gui/containers/CustomContainer1.hpp>

class Ser_monView : public Ser_monViewBase
{
public:
    Ser_monView();
    virtual ~Ser_monView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void KeyboardSelected(uint8_t value);
    virtual void InputText();
	virtual void Clear_buffer();

    virtual void handleTickEvent();
protected:
};

#endif // SER_MONVIEW_HPP
