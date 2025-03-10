#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"

long fibonacci(const int n)
{
    return 0;
}

int linear_search(Array * a, const int target)
{
    for (size_t i = 0; i < a->len; i++)
    {
        int elem = a->data[i];

        if (elem == target)
            return (int)i;
    }

    return -1;
}

long factorial(const int n)
{
    return 0;
}

#endif // ALGO_H_
