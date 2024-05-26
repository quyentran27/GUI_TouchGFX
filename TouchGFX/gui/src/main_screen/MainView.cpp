#include <gui/main_screen/MainView.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainView::MainView()
{
}

void MainView::setupScreen()
{
	MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
	MainViewBase::tearDownScreen();
}
//void MainView::setPin(bool Button_state)
//{
//	PIN_25.setVisible(Button_state);
//	PIN_25.invalidate();
//}

void MainView::changePower(int count)
{
	if(count == 1)
	{
		PIN_25.setVisible(1);
		PIN_25.invalidate();
	}
	else if(count == 2)
	{
		PIN_50.setVisible(1);
		PIN_50.invalidate();
	}
	else if(count == 3)
	{
		PIN_75.setVisible(1);
		PIN_75.invalidate();
	}
	else if(count == 4)
	{
		PIN_100.setVisible(1);
		PIN_100.invalidate();
	}
	else if(count == 5) {
		PIN_25.setVisible(0);
		PIN_25.invalidate();
		PIN_50.setVisible(0);
		PIN_50.invalidate();
		PIN_75.setVisible(0);
		PIN_75.invalidate();
		PIN_100.setVisible(0);
		PIN_100.invalidate();
	}
}
