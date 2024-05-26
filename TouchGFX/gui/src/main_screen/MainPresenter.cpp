#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>

MainPresenter::MainPresenter(MainView& v)
    : view(v)
{
}

void MainPresenter::activate()
{
}

void MainPresenter::deactivate()
{

}
//void MainPresenter::setPin(bool Button_state)
//{
//	view.setPin(Button_state);
//}

void MainPresenter::changePower(int count)
{
	view.changePower(count);
}

