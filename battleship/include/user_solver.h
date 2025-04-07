#ifndef USER_SOLVER_H_
#define USER_SOLVER_H_

#include "solver.h"

class UserSolver : public Solver {
   public:
    void solve(Board &board) override;
    void guess_nearby_cells(int x, int y, Board &board, std::vector<std::vector<bool>> &guessed_cells);
};

#endif // USER_SOLVER_H_
