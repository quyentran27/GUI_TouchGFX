#ifndef CONTROL_MODEVIEW_HPP
#define CONTROL_MODEVIEW_HPP

#include <gui_generated/control_mode_screen/CONTROL_MODEViewBase.hpp>
#include <gui/control_mode_screen/CONTROL_MODEPresenter.hpp>

class CONTROL_MODEView : public CONTROL_MODEViewBase
{
public:
    CONTROL_MODEView();
    virtual ~CONTROL_MODEView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CONTROL_MODEVIEW_HPP
