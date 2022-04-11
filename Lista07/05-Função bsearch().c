#include <stdio.h>

int bsearch(int n, int v[], int tamanhov)
{
	int iniciov = 0, fimv = tamanhov-1, meiov;

	while ( iniciov <= fimv )
	{
		meiov = (iniciov + fimv)/2;

		if ( n == v[meiov] )
		{
			return 1;
		}
		if ( n < v[meiov] )
		{
			fimv = meiov - 1;
		}
		else
		{
			iniciov = meiov + 1; 
		}
	}
	return 0;
}
int main(void)
{
	int v[8] = {19, 27, 31, 48, 52, 66, 75, 80};

	printf("27: %d\n", bsearch(27, v, 8));
	printf("51: %d\n", bsearch(51, v, 8));

	return 0;
}
