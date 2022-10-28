#include <unistd.h>
#include "main.h"

void _putchar(const char n)
{
	write(1, &n, 1);
}
