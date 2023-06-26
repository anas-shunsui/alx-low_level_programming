#include "main.h"

/**
 * reset_to_98 - updates the value
 *
 */

void reset_to_98(int *n)
{
	int a = 10;
	*n = &a;

	n = 98;
}
