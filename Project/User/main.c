#include "stm32f10x.h"                  // Device header

int main(void)
{
	static uint8_t flag = 0;
	while (1)
	{
		flag++;
	}
}
