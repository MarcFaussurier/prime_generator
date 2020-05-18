#include "math.h"
#include "stdio.h"
#include "limits.h"
#define ITERATIONS 100000

int 						is_prime(unsigned long long 	number) 
{
	unsigned long long		a;
	unsigned long long		b;

	if (!number)
		return (0);

	a = 2;
	while ((b = sqrt(number)) && (a < b))
	{
		if (! (number % a))
			return (1);
		a += 1;
	}
	return (0);
}

unsigned long long			f(long double x)
{
	return ((((1 / ( ((x * 42 * 888) / (666 * 21 * x)) * ((42 * 888) / (666 * 21) + 1) / ((x * 42 * 888) / (666 * 21))  ) / 11))* 42) * 121 + 1);
}

int 						main()
{
	unsigned long long		z;
	unsigned long long 		i;
	size_t					cnt;

	cnt = 0;
	z = UINT_MAX;
	while (1)
	{
		i = f(z);
		if (is_prime(i) && ++cnt)
			printf("PRIME FOUND: %llu	\n",i);
		z += 1;
		if (z > ((unsigned long long)UINT_MAX + ITERATIONS))
			break ;
	}

	printf("found - %zu primes\n", cnt);
}

