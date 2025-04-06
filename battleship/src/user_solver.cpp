#include <iostream>
#include "../include/user_solver.h"
#include "../include/guesser.h"

void UserSolver::nearMiss(size_t x, size_t y, Board &board)
{
    for (size_t x2 = x - 1; x2 <= x + 1; x2++)
    {
        for (size_t y2 = y - 1; y2 <= y + 1; y2++)
        {
            ReturnType result = guess(x2, y2, board);

            if (result == ReturnType::near_miss)
            {
                nearMiss(x2, y2, board);
                continue;
            }
        }
    }
}

void UserSolver::solve(Board &board) {
    for (size_t x = 0; x < board.getX(); x++)
    {
        for (size_t y = 0; y < board.getY(); y++)
        {
            ReturnType result = guess(x, y, board);

            std::cout << result << " ";

            if (result == ReturnType::near_miss)
            {
                nearMiss(x, y, board);
                continue;
            }
        }

        std::cout << std::endl;
    }
}
