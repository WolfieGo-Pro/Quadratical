// implementation of data members in the 'Equation' class.

#include "pch.h"

Equation::Equation() {

	Qterm = 0; Lterm = 0; Cterm = 0;

	x1 = 0; x2 = 0;
}

Equation::~Equation() {

	//std::cout << "Solved" << std::endl;
}

Equation::Equation(double Qterm, double Cterm) {

	x1 = 0; x2 = 0;

	Qterm = 0; Cterm = 0; // results to a 'C4100' warning (while Warning Level is W4) if omitted

	std::cout << "Sorry, can't solve equations with 2 terms at the moment." << std::endl;
}

Equation::Equation(double Qterm, double Lterm, double Cterm) {

	x1 = 0; x2 = 0;

	const double QC_term{ Qterm * Cterm };

	// 'i' is the divisor
	for (double i = 1; i >= 1; ++i)
	{
		double dividend{ QC_term / i };

		if (i + dividend == Lterm) {

			x1 = i , x2 = dividend;
			break;
		}
		else if (i - dividend == Lterm) {

			x1 = i , x2 = -dividend;
			break;
		}
		else if (-i + dividend == Lterm) {

			x1 = -i , x2 = dividend;
			break;
		}
		else if (-i - dividend == Lterm) {

			x1 = -i , x2 = -dividend;
			break;
		}
		else if (i > 1000) {
			std::cout << ls2 << "There are no exact solutions to this equation." << std::endl;
			std::cin.clear();

			break;
		}

	}

}

std::string Equation::roots() {

	double* p_x1 = &x1;

	double* p_x2 = &x2;

	std::cout << ls2 << "Hence, X = " << std::fixed << std::setw(3) << (float)(*p_x1) << ", Or X = " << std::fixed << (float)(*p_x2) << std::endl;
	std::cout << ls2 << "****************************************" << std::endl;

	return "Solved";
}

void Equation::intro() {

	std::cout << ls2 << "Hi, welcome to Quadraticals." << std::endl;
	std::cout << ls2 << "Quadraticals is a program for solving quadratic equations." << std::endl;
}


void Equation::tutorial() {

	std::cout << ls2 << "Let's go through how this program is used:" << std::endl;

	std::cin.get();

	std::cout << ls2 << "Every quadratic equation has 3 terms : " << std::endl;
	std::cout << ls2 << "A quadratic term, a linear term and a constant term." << std::endl;

	std::cin.get();

	std::cout << ls2 << "Each will be denoted with letters 'Q' , 'L' & 'C' respectively." << std::endl;
	std::cout << ls2 << "a x^2  +  b x  +  c  =  0" << std::endl;
	std::cout << ls2 << "  |        |      |  " << std::endl;
	std::cout << ls2 << "  |        |      |  " << std::endl;
	std::cout << ls2 << "  Q        L      C  " << std::endl;

	std::cin.get();

	std::cout << ls2 << "Then, Insert values of the quadratic equation you want to solve." << std::endl;

	std::cin.get();

	std::cout << ls2 << "Alternatively, equations can only have 2 terms. A quadratic term & a constant term such as:" << std::endl;
	std::cout << ls2 << "a x^2  -  4  =  0" << std::endl;
	std::cout << ls2 << "  |       |  " << std::endl;
	std::cout << ls2 << "  |       |  " << std::endl;
	std::cout << ls2 << "  Q       C  " << std::endl;

	std::cin.get();

	std::cout << ls2 << "You will have to specify if it's '2 terms' or '3 terms' equation you want to solve." << std::endl;
	std::cout << ls2 << "However, equations with 2 terms can't be solved at the moment." << std::endl;
}
