#include "sra.h"
/**
 * isprimer - prim number
 * @n: int
 * Return: 1 is prim number or 0 isn't
*/
int isprimer(int n)
{
	int j;
	int prim = 1;
	/*int sq = pow(n, 0.5);*/

	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
		{
			prim = 0;
		}
	}
	return (prim);
}
/**
 * factoriser - function that factorize all things
 * @n: int
 *
 */
void factoriser(long int n)
{
	long int p = 1;
	long int q;
	long int max = 1;

	if (isprimer(n) == 1)
	{
		q = n;
		printf("%lu = %lu * %lu\n", n, p, q);
	}
	else
	{
		p = 2;
		while (p < n)
		{
			if ((n % p == 0) && max < p)
			{
				max = p;
			}
			p++;
		}
		p = max;
		q = n / max;
		printf("%lu = %lu * %lu\n", n, p, q);
	}
}
