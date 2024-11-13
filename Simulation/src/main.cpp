#include <iostream>
#include "FluidSystem.h"
#include "Solver.h"
#include "SolidObject.h"

int main() {
    std::cout << "SPlisHSPlasH Fluid Simulation" << std::endl;

    // 创建流体模拟对象和求解器
    FluidSystem fluidSystem;
    Solver solver;

    // 初始化和运行模拟
    fluidSystem.init();
    solver.solve(fluidSystem);

    return 0;
}
