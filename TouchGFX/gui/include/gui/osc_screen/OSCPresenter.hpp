#ifndef OSCPRESENTER_HPP
#define OSCPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class OSCView;

class OSCPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    OSCPresenter(OSCView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~OSCPresenter() {};

private:
    OSCPresenter();

    OSCView& view;
};

#endif // OSCPRESENTER_HPP
