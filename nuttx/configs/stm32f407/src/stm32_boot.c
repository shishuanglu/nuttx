
#include <nuttx/config.h>

#include <debug.h>

#include "stm32f407.h"
#include <nuttx/test/test.h>
#include <nuttx/

int board_app_initialize(uintptr_t arg)
{

	return 0;
}

void stm32_boardinitialize(void)
{
	board_userled_initialize ();
	board_userled (1, 1);
}

void board_initialize(void)
{

}
