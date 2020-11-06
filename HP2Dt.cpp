
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

#include <\eigen\eigen\Sparse>
#include <\eigen\eigen\Dense>
#include <\eigen\Eigen\IterativeLinearSolvers>

#include "declare.h"

int main() {

	init_n_print();
	initPropTEG();
	HP_2Dtsolve();

	std::cin.get();

	return 0;
}
