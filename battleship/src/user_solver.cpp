#include <iostream>
#include "../include/user_solver.h"
#include "../include/guesser.h"

void UserSolver::guess_nearby_cells(
    const int x,
    const int y,
    Board &board,
    std::vector<std::vector<bool>> &guessed_cells
)
{
    const size_t x_size = board.getX();
    const size_t y_size = board.getY();

    const int coordinates_to_check[][] {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    for (int i = 0; i < 4; i++)
    {
        // Get the offset of start x/y and the nearby cells
        const int x2 = x + coordinates_to_check[i][0];
        const int y2 = y + coordinates_to_check[i][1];

        // Skip out of bounds cells
        if (x2 < 0 || y2 < 0 || x2 >= x_size || y2 >= y_size)
            continue;

        // Skip already guessed cells
        if (guessed_cells[x2][y2])
            continue;

        const ReturnType result = guess(x2, y2, board);

        guessed_cells[x2][y2] = true;

        if (result == miss)
            continue;

        guess_nearby_cells(x2, y2, board, guessed_cells);
    }
}

void UserSolver::solve(Board &board)
{
    const size_t x_size = board.getX();
    const size_t y_size = board.getY();

    std::vector<std::vector<bool>> guessed_cells(x_size, std::vector<bool>(y_size, false));

    // Near miss tells us if adjacent cells are occupied, so we can add 2 to avoid every other cell
    for (int x = 0; x < x_size; x += 2)
    {
        // If x is divisible by 4, skip the first cell to keep the checkerboard pattern
        const int y_init = (x % 4 == 0) ? 0 : 1;

        for (int y = y_init; y < y_size; y += 2)
        {
            // skip out of bounds cells
            if (x < 0 || y < 0 || x >= x_size || y >= y_size)
                continue;

            // skip already guessed cells
            if (guessed_cells[x][y])
                continue;

            const returntype result = guess(x, y, board);

            guessed_cells[x][y] = true;

            if (result == miss)
                continue;

            guess_nearby_cells(x, y, board, guessed_cells);
        }
    }
}