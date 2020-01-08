#pragma once

#include <memory>
#include <cstdint>
#include <vector>
#include <iostream>
#include <string>

namespace mcc
{
	namespace math
	{
		class Solver
		{
			public:

				void Solve();

			protected:
				virtual void GetInput();
				std::vector<uint32_t> m_inputs{};
				std::string m_errorMessage{};

			private:
				virtual void ShowProblem() = 0;
				inline virtual bool ValidateInput()
				{
					return true;
				}

				void ShowErrorMessage();
				virtual bool OwnSolve() = 0;
 				virtual void ShowAnswer() = 0;
				
		};

		std::unique_ptr<Solver> CreateSolver(const char* args);
		
		
	}
}