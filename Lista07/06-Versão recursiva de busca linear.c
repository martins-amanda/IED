#include <stdio.h>

int rlsearch(int n, int v[], int tamanhov)
{
	if ( tamanhov > 0 )
	{
		if ( n == v[tamanhov-1] )
		{
			return 1;
		}
		if ( rlsearch(n, v, tamanhov-1) == 1)
		{
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	int v[8] = {66, 80, 31, 48, 27, 75, 19, 52};

	printf("27: %d\n", rlsearch(27, v, 8));
	printf("51: %d\n", rlsearch(51, v, 8));

	return 0;
}
