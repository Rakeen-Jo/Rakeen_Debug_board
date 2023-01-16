#ifndef SER_MONPRESENTER_HPP
#define SER_MONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Ser_monView;

class Ser_monPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Ser_monPresenter(Ser_monView& v);

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

    virtual ~Ser_monPresenter() {};

private:
    Ser_monPresenter();

    Ser_monView& view;
};

#endif // SER_MONPRESENTER_HPP
