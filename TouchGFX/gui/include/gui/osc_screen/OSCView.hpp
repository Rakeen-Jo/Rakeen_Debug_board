#ifndef OSCVIEW_HPP
#define OSCVIEW_HPP

#include <gui_generated/osc_screen/OSCViewBase.hpp>
#include <gui/osc_screen/OSCPresenter.hpp>

class OSCView : public OSCViewBase
{
public:
    OSCView();
    virtual ~OSCView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // OSCVIEW_HPP
