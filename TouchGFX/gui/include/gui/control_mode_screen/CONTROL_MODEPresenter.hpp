#ifndef CONTROL_MODEPRESENTER_HPP
#define CONTROL_MODEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class CONTROL_MODEView;

class CONTROL_MODEPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    CONTROL_MODEPresenter(CONTROL_MODEView& v);

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

    virtual ~CONTROL_MODEPresenter() {}

private:
    CONTROL_MODEPresenter();

    CONTROL_MODEView& view;
};

#endif // CONTROL_MODEPRESENTER_HPP
