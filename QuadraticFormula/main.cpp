#include <iostream>
#include <cmath>

int main()
{
	double a, b, c;
	std::cout << "Enter coefficients a, b, c";
	std::cin >> a >> b >> c;
	double determinant = (b * b) - (4.0 * a * c); // determinant

	if (determinant >= 0)
	{
		double rt = sqrt(determinant);
		double rt1 = (-b + rt) / (2.0 * a);
		double rt2 = (-b - rt) / (2.0 * a);

		std::cout << "Two real roots: " << rt1 << " and " << rt2 << std::endl;
	}
	else
	{
		double rt = sqrt(-determinant);
		double real_pt = -b / (2 * a);
		double imag_pt = rt / (2 * a);

		std::cout << " Two complex solution: " << real_pt << " + " << imag_pt << "*i and "
				  << real_pt << " - " << imag_pt << "*i\n";
	}

	return 0;
}