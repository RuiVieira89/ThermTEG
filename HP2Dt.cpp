
#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <numeric>

#include <conio.h> 
#include <io.h> 
#include <process.h> 
#include <stdio.h> 

#include <C:\dev\THERMOSS\HP2Dt\cpp\src\eigen\eigen\Sparse>
#include <C:\dev\THERMOSS\HP2Dt\cpp\src\eigen\eigen\Dense>
#include <C:\dev\THERMOSS\HP2Dt\cpp\src\eigen\Eigen\IterativeLinearSolvers>

#include "declare.h"
#include "initVar.cpp"
#include "matProp.cpp"
#include "write.cpp"
#include "solveTEG.cpp"
#include "solveHP.cpp"

int main() {

    init_n_print();
	initPropTEG();
    HP_2Dtsolve();

	std::cin.get();

    return 0;
}
