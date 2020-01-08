#include <iostream>

#include "solver.h"

void ShowUsage()
{
	std::cout
		<< "Usage: math.exe <Problem number>" << std::endl
		<< "Example:" << " math.exe 1" << std::endl
		<< "\t" << "This resolve problem number 1. Sum of naturals divisible by 3 and 5" << std::endl;

	return;
}

int main(int argc, char* argv[])
{

	std::unique_ptr<mcc::math::Solver> pSolver = mcc::math::CreateSolver(argv[1]);

	if (!pSolver)
	{
		ShowUsage();
		return -1;
	}

	pSolver->Solve();

	return 0;

}