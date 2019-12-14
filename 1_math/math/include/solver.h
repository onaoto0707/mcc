#include <memory>
#include <cstdint>
#include <vector>

namespace mcc
{
	namespace math
	{
		class Solver
		{
			public:
				bool Solve();

			protected:
				std::vector<uint32_t> m_inputs;

			private:
				virtual void ShowProblem() = 0;

				virtual bool OwnSolve() = 0;
 				virtual void ShowAnswer() = 0;


				virtual void GetInput();

		};

		std::unique_ptr<Solver> CreateSolver(const char* args);
		
	}
}