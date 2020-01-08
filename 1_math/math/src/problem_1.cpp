#include "problem_1.h"


namespace mcc
{
namespace math
{

Problem1::Problem1()
{
	m_errorMessage = "Input should be one integer.";
}

void Problem1::ShowProblem()
{
	std::cout << "Sum of naturals divisiable by 3 and 5" << std::endl;
	std::cout << "Input limit:";
	return;
}


bool Problem1::OwnSolve()
{


	for (uint32_t ii = 3; ii <= m_inputs[0]; ++ii)
	{
		if (ii % 3 == 0U || ii % 5 == 0)
		{
			m_answer += ii;
		}
	}

	return true;
}



}
}