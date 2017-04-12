#include <iostream>

class Base {

public:
	virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

void	identify_from_reference(Base &p)
{
	A a;
	B b;
	C c;
	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "id from ref : A" << std::endl;
	}
	catch(std::exception &e) {}
	try
	{
		b = dynamic_cast<B &>(p);
		std::cout << "id from ref: B" << std::endl;
	}
	catch(std::exception &e) {};
	try
	{
		c = dynamic_cast<C &>(p);
		std::cout << "id form ref: C" << std::endl;
	}
	catch(std::exception &e) {};
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "id from pointer: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "id from pointeur: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "id from pointeur: C" << std::endl;
	return ;
}

Base * generate( void )
{
	int i;

	srand(time(0));
	i = rand() % 3;
	if (i == 1)
	{
		A *a = new A;
		return (dynamic_cast<Base *>(a));
	}
	else if (i == 2)
	{
		B *b = new B;
		return (dynamic_cast<Base *>(b));
	}
	else
	{
		C *c = new C;
		return (dynamic_cast<Base*>(c));
	}
}

int		main( void )
{
	Base *tmp;
	tmp = generate();
	identify_from_pointer(tmp);
	identify_from_reference(*tmp);
	return 0;
}
