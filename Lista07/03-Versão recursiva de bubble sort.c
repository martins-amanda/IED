#include <stdio.h>

void exibe(int v[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%i ", v[i]);
	}
	printf("\n");
}
void empurra(int v[], int n)
{
	int aux = v[0];

	for (int i = 0; i < n; i++)
	{
		if ( v[i] > aux )
		{
			aux = v[i];
		}
	}
	for (int i = 0; i < n-1; i++)
	{
		if ( v[i] == aux)
		{
			v[i] = v[i+1];
			v[i+1] = aux;
		}
	}
}
void bsr(int v[], int n)
{
	if ( n != 1 )	
	{
		empurra(v, n);
		bsr(v, n-1);
	}
}
int main(void)
{
	int v[5] = {48, 19, 31, 52, 27};

	bsr(v, 5);
	exibe(v, 5);

	return 0;
}
