#ifndef EQUATION_H
#define EQUATION_H

class Equation {

protected:
	double Qterm, Lterm, Cterm;
	double x1, x2; // roots of the quadratic equation

public:
	Equation();
	~Equation();

	Equation(const Equation &object) : Qterm(object.Qterm), Lterm(object.Lterm), Cterm(object.Cterm), x1(object.x1), x2(object.x2) {}; //copy constructor

	Equation(double Qterm, double Cterm); // 2 terms constructor

	Equation(double Qterm, double Lterm, double Cterm); // 3 terms constructor

	std::string roots();

	void intro();
	void tutorial();

};

#endif // !EQUATION_H
