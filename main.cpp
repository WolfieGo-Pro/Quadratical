// Quadraticals - a program for solving quadratic equations. will develop GUI for later versions.

#include "pch.h"

int main() {

	struct Values { // For organization purposes

		char response;

		double Qterm, Lterm, Cterm;

	};

	Values user; //struct instantiation
	Equation quadratic; //class instantiation

												// APP STARTS HERE

	quadratic.intro();

	do
	{
		std::cout << ls2 << "Skip through tutorial? (appears only once) (y/n) : " << std::flush;

		std::cin >> user.response;
		std::cout << std::endl;

		if (user.response == 'Y' || user.response == 'y') {

			user.response = '0';
			break;
		}
		else if (user.response == 'N' || user.response == 'n') {

			user.response = '0';

			quadratic.tutorial();
			break;
		}

	} while (true);


	for (int run{ 0 }; run < 200; run++) {

		do {

			short TWO = '2', THREE = '3';

			std::cout << ls2 << "2 or 3 terms? (enter 2 or 3) : " << std::flush;
			std::cin >> std::setw(1) >> user.response;
			std::cout << std::endl;

			if (user.response == TWO) {

				std::cout << ls2 << "Enter Quadratic term : " << std::flush;
				std::cin >> user.Qterm;
				std::cout << std::endl;
				//method for validating quadratic term

				std::cout << ls2 << "Enter Constant term : " << std::flush;
				std::cin >> user.Cterm;
				std::cout << std::endl;
				//method for validating constant term

				Equation* solve_equation = new Equation(user.Qterm, user.Cterm);

				delete solve_equation;

				break;
			}
			else if (user.response == THREE) {

				std::cout << ls2 << "Enter Quadratic term : " << std::flush;
				std::cin >> user.Qterm;
				std::cout << std::endl;
				//method for validating quadratic term

				std::cout << ls2 << "Enter Linear term : " << std::flush;
				std::cin >> user.Lterm;
				std::cout << std::endl;
				//method for validating linear term

				std::cout << ls2 << "Enter Constant term : " << std::flush;
				std::cin >> user.Cterm;
				std::cout << std::endl;
				//method for validating constant term

				Equation* solve_equation = new (std::nothrow) Equation(user.Qterm, user.Lterm, user.Cterm);

				solve_equation->roots();

				delete solve_equation;

				break;
			}
			else {

				std::cout << ls2 << "You did not specify the no. of terms :( \n" << std::endl;
				
				std::cin.clear((short)user.response);
				std::cin.ignore(100, '\n');
			}

		} while (true);

	}

	return 0;
	//exit(2);
}
