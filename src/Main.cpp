#include "sl.h"

int main()
{
	
	slWindow(400, 400, "Simple SIGIL Example", false);
	

	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{



		slSetForeColor(1, 1, 1, 1);
		slRectangleFill(200, 240, 100, 7);

		slRender();
	}
	slClose();
	return 0;
}