#include <stdio.h>
#define N     5 
#define SIZE (1 << N)
int main()
{
	int x, y, i;
	for (y = SIZE - 1; y >= 0; y--, printf("\n")) {
		for (i = 0; i < y; i++) printf(" ");
		for (x = 0; x + y < SIZE; x++)
			printf((x & y) ? "  " : "* ");
	}
	return 0;
}
