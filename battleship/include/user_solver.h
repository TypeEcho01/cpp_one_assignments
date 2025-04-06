#ifndef USER_SOLVER_H_
#define USER_SOLVER_H_

#include "solver.h"

class UserSolver : public Solver {
   public:
    void solve(Board &board) override;
    void nearMiss(size_t x, size_t y, Board &board);
};

#endif // USER_SOLVER_H_
