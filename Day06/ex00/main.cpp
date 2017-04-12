#include <cstdlib>
#include <iostream>

void	convert_char(int nb)
{
	char 	c;

	/* Char*/
	std::cout << "char : ";
	c = static_cast<char>(nb);
	if (isalpha(c))
		std::cout << c << std::endl;
	else
		std::cout << "Non Displayable" << std::endl;
}

void	convert_int(int nb)
{
	int i;

	/* Int */
	std::cout << "int: ";
	i = static_cast<char>(nb);
	if ((i > -2147483648) && (i < 2147483647))
		std::cout << i << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void		convert_float(float fl)
{
	float f;

	/* Float */
	std::cout << "float: ";
	f = static_cast<float>(fl);
	std::cout << f;
	if (f >= 0)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;

}
void		convert_double(float fl)
{
	double d;

	/* Double */
	std::cout << "double: ";
	d = static_cast<char>(fl);
	std::cout << d << ".0" << std::endl;
}

int 	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cout << "ERROR" << std::endl;
		return (0);
	}
	int nb;
	float fl;

	nb = atoi(av[1]);
	fl = atof(av[1]);
	convert_char(nb);
	convert_int(nb);
	convert_float(fl);
	convert_double(fl);

	return 0;
}
