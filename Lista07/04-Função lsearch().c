#include <stdio.h>

int lsearch(int n, int v[], int tamanhov)
{
	for (int i = 0; i < tamanhov; i++)
	{
		if ( v[i] == n )
		{
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	int v[8] = {66, 80, 31, 48, 27, 75, 19, 52};

	printf("27: %d\n", lsearch(27, v, 8));
	printf("51: %d\n", lsearch(51, v, 8));

	return 0;
}
