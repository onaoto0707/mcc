#include <cstdlib>

#include "solver.h"
#include "problem_1.h"

namespace mcc
{
namespace math
{

void Solver::Solve()
{
	this->ShowProblem();
	this->GetInput();

	if (!this->ValidateInput())
	{
		this->ShowErrorMessage();
		return;
	}
	this->OwnSolve();
	this->ShowAnswer();

}
	

void Solver::ShowErrorMessage()
{
	std::cout << "Input argument error!" << std::endl;
	std::cout << "Error reason is: " << m_errorMessage;
}

void Solver::GetInput()
{
	std::string str;
	std::getline(std::cin, str);
	
	std::string temp;
	for (const auto& ch : str)
	{
		if (ch == ' ')
		{
			m_inputs.emplace_back(std::atoi(temp.c_str()));
			temp.clear();
		}
		else
		{
			temp += ch;
		}
	}
	if (!temp.empty())
	{
		m_inputs.emplace_back(std::atoi(temp.c_str()));
	}
	return;
}

std::unique_ptr<Solver> CreateSolver(const char* args)
{
	if (args == nullptr)
	{
		return nullptr;
	}

	int problemNumber = std::atoi(args);

	switch (problemNumber)
	{
	case 1:
		return std::unique_ptr<Problem1>(new Problem1());
	case 0:
	default:
		return nullptr;
	}

	return nullptr;

}
} /// namespace math
} /// namespace mcc