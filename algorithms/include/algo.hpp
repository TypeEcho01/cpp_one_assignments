#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"

typedef unsigned long long uVeryLong;

uVeryLong fibonacci(const int n)
{
    uVeryLong prev = 1;
    uVeryLong prev_prev = 0;
    uVeryLong sum = 0;

    for (uVeryLong i = 2; i <= n; i++)
    {
        sum = prev + prev_prev;
        prev_prev = prev;
        prev = sum;
    }

    return sum;
}

int linear_search(Array * a, const int target)
{
    for (size_t i = 0; i < a->len; i++)
    {
        if (a->data[i] == target)
            return (int)i;
    }

    return -1;
}

long factorial(const int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n);
}

#endif // ALGO_H_
