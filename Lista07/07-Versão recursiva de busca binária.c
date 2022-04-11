#include <stdio.h>

int rbsearch(int n, int v[], int iniciov, int fimv)
{
	int meiov = (iniciov+fimv)/2;

	if ( iniciov <= fimv )
	{
		if ( v[meiov] == n )
		{
			return 1;
		}
		if ( v[meiov] > n )
		{
			if ( rbsearch(n, v, iniciov, meiov-1) == 1 )
			{
				return 1;
			}
		}
		else
		{
			if ( rbsearch(n, v, meiov+1, fimv) == 1 )
			{
				return 1;
			}
		}
   	}
   	return 0;
}
int main(void)
{
	int v[8] = {19, 27, 31, 48, 52, 66, 75, 80};

	printf("27: %d\n", rbsearch(27, v, 0, 7));
	printf("51: %d\n", rbsearch(51, v, 0, 7));

	return 0;
}
