#include "Complex.h"
#include "Menu.h"

TComplex z_1;
TComplex z_2(3, 4);
TComplex z_3 = z_2;
TComplex result;

int Menu_1()
{
	std::cout << "z1 = " << z_1 << "\t\t" << "z2 = " << z_2 << "\t\t" << "z3 = " << z_3;
	std::cout << "\n";

	if (z_2 == z_3) 
		std::cout << "z2 == z3" << "\n" << std::endl;

	z_1.SetRe(2);
	z_1.SetIm(6);

	std::cout << "z1 = " << z_1 << std::endl;

	z_3 = z_1 + z_2;
	std::cout << "z3 = z1 + z2 = " << z_1 << " + " << z_2 << " = " << z_3 << std::endl;

	z_2 = z_3 - z_1;
	std::cout << "z2 = z3 - z1 = " << z_3 << " - (" << z_1 << ") = " << z_2 << std::endl;

	z_1 = z_3 / z_2;
	std::cout << "z1 = z3 / z2 = (" << z_3 << ") / (" << z_2 << ") = " << z_1 << std::endl;

	std::cout << "z3 = a + i*b" << "\n\n" << "Input a and b: ";
	std::cin >> z_3;

	z_2 = z_1 * z_3;
	std::cout << "z2 = z1 * z3 = (" << z_1 << ") * (" << z_3 << ") = " << z_2 << "\n\n";

	result = z_3.Pow(2);
	std::cout << "z3^2 = (" << z_3 << ")^2 = ";
	result.Print();
	std::cout << "\n";

	result = z_3.Pow(0.4);
	std::cout << "z3^0.4 = (" << z_3 << ")^0.4 = ";
	result.Print();
	std::cout << "\n";

	result = z_3.Pow(-2);
	std::cout << "z3^(-2) = (" << z_3 << ")^(-2) = ";
	result.Print();
	std::cout << "\n";

	result = z_3.Pow(-0.4);
	std::cout << "z3^(-0.4) = (" << z_3 << ")^(-0.4) = ";
	result.Print();
	std::cout << "\n";

	result = z_3.Pow(z_2);
	std::cout << "z3^(z_2) = (" << (z_3) << ")^(" << (z_2) << ") = ";
	result.Print();
	std::cout << "\n";

	return 0;
}