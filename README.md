# prime_generator

100k primes takes 100s without that much complexity grow as primes grow

# usage

gcc main.c -D ENABLE_F=1 -D ITERATIONS=1000000 && time ./a.out

switch ENABLE_F to toggle the use or not of my addition f(x) function. The use of f(x) provides bigger generated numbers.
