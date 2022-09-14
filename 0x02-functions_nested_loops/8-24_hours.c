#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour_tens, hour_unit, min_tens, min_unit;

	hour_tens = 0;
	while (hour_tens <= 2)
	{
		hour_unit = 0;
		while (hour_unit <= 3)
		{
			min_tens = 0;
			while (min_tens <= 5)
			{
				min_unit = 0;
				while (min_unit <= 9)
				{
					_putchar(48 + hour_tens);
					_putchar(48 + hour_unit);
					_putchar(':');
					_putchar(48 + min_tens);
					_putchar(48 + min_unit);
					_putchar('\n');
					min_unit++;
				}
				min_tens++;
			}
			hour_unit++;
		}
		hour_tens++;
	}
}
