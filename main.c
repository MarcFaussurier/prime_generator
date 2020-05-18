#include "math.h"
#include "stdio.h"
#include "limits.h"
#ifndef ITERATIONS
# define ITERATIONS 100000
#endif
#ifndef ENABLE_F
# define ENABLE_F 0
#endif

int     is_prime(int nb)
{
    int     sqr;
    int     a;
    int     b;
    int     k;

    if (nb <= 1)
        return (0);
    if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
        return (1);
    if (nb == 4 || nb == 6 || nb % 2 == 0 || nb % 3 == 0)
        return (0);
    sqr = sqrt(nb);
    a = 0;
    b = 0;
    k = 1;
    while (b < sqr)
    {
            a = (6 * k) - 1;
            b = (6 * k) + 1;
            if (nb % a == 0 || nb % b == 0)
                return (0);
            k += 1;
        }
    return (1);
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
#if ENABLE_F == 1
	i = f(z);
#else
    i = z;
#endif
		if (is_prime(i) && ++cnt)
			printf("PRIME FOUND: %llu	\n",i);
		z += 1;
		if (z > ((unsigned long long)UINT_MAX + ITERATIONS))
			break ;
	}

	printf("found - %zu primes\n", cnt);
}

