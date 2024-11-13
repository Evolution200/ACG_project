#include <iostream>
#include "FluidSystem.h"
#include "Solver.h"
#include "SolidObject.h"

int main() {
    std::cout << "SPlisHSPlasH Fluid Simulation" << std::endl;

    // setup fluid system and solver
    FluidSystem fluidSystem;
    Solver solver;

    // initialize and solve fluid system
    fluidSystem.init();
    solver.solve(fluidSystem);

    return 0;
}
