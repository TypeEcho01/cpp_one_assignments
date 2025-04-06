#include <iostream>
#include "../include/algo.hpp"

auto main(int argc, char *argv[]) -> int
{
    //              0  1  2  3  4
    int input[5] = {1, 3, 5, 6, 5};
    Array* a = init(5, input);

    printf("%s%d\n", "linear_search(a, 6) = ", linear_search(a, 6));
    printf("%s%d\n", "linear_search(a, 1) = ", linear_search(a, 1));
    printf("%s%d\n", "linear_search(a, 5) = ", linear_search(a, 5));
    printf("%s%d\n", "linear_search(a, 7) = ", linear_search(a, 7));
    printf("\n");
    printf("%s%lld\n", "fibonacci(1000) = ", fibonacci(100000));

    return 0;
}