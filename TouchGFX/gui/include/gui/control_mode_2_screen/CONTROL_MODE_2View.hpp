#ifndef CONTROL_MODE_2VIEW_HPP
#define CONTROL_MODE_2VIEW_HPP

#include <gui_generated/control_mode_2_screen/CONTROL_MODE_2ViewBase.hpp>
#include <gui/control_mode_2_screen/CONTROL_MODE_2Presenter.hpp>

class CONTROL_MODE_2View : public CONTROL_MODE_2ViewBase
{
public:
    CONTROL_MODE_2View();
    virtual ~CONTROL_MODE_2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CONTROL_MODE_2VIEW_HPP
