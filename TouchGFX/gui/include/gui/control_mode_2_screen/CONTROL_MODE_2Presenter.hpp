#ifndef CONTROL_MODE_2PRESENTER_HPP
#define CONTROL_MODE_2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class CONTROL_MODE_2View;

class CONTROL_MODE_2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    CONTROL_MODE_2Presenter(CONTROL_MODE_2View& v);

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

    virtual ~CONTROL_MODE_2Presenter() {}

private:
    CONTROL_MODE_2Presenter();

    CONTROL_MODE_2View& view;
};

#endif // CONTROL_MODE_2PRESENTER_HPP
