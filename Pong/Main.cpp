#include "sl.h"

int main()
{
	// set up our window and a few resources we need
	slWindow(400, 400, "Simple SIGIL Example", false);
	

	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{
		slSetForeColor(1, 0, 0, 1);
		slRectangleFill(200, 240, 100, 7);

	

		slRender();
	}
	slClose();
	return 0;
}