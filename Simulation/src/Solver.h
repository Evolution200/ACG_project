#ifndef SOLVER_H
#define SOLVER_H

#include "FluidSystem.h"
#include <iostream>

class Solver {
public:
    void solve(FluidSystem& system) {
        std::cout << "Solving fluid system..." << std::endl;
    }
};

#endif // SOLVER_H
