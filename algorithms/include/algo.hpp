#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"
#include <iostream>
#include <string>

long fibonacci(const int n)
{
    std::cout << n << std::endl;
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int linear_search(Array * a, const int target)
{
    for(size_t i = 0; i < a->len; i++)
    {
        if(a->data[i] == target)
        {
            return i;
        }
    }
    return -1;
}

long factorial(const int n)
{
    if(n == 0)
        return 1;
    else{
        return n * factorial(n - 1);
    }
}

std::string fizz_buzz_checker(const int n) {
    if (n % 15 == 0) {
        return "fizzbuzz";
    }
    else if (n % 5 == 0)
    {
        return "buzz";
    }
    else if (n % 3 == 0)
    {
        return "fizz";
    }
    return "";
}

#endif // ALGO_H_
