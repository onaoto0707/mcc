#pragma once

#include "solver.h"

namespace mcc
{
	namespace math
	{
		class Problem1 : public Solver
		{
		public:
			friend std::unique_ptr<Solver> mcc::math::CreateSolver(const char* args);
			
			virtual ~Problem1() = default;


		private:
			Problem1();

			void ShowProblem() final override;
			bool OwnSolve() final override;
			bool ValidateInput() final override
			{
				return m_inputs.size() == 1 ? true : false;
			}

			void ShowAnswer() final override
			{
				std::cout << "Answer = " << m_answer << std::endl;
			}
			
			uint32_t m_answer{};
		};
	}
}