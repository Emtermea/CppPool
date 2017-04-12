#include <iostream>

struct Data {std::string s1; int n; std::string s2;};

void	*serialize( void )
{
	int 	i;
	char 	tab[63] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
	int 	c = 0;
	char 	*str;

	str = new char[20];
	srand(time(0));
	i = rand() % 4294967296;
	while (c < 20)
	{
		if (c > 7 && c < 12)
			str[c] = reinterpret_cast<char *>(&i)[c - 8];
		else
			str[c] =  tab[rand() % 62];
		c++;
	}
	str[c] = '\0';
	return (reinterpret_cast<void*>(str));
}

struct Data	*deserialize( void * raw)
{
	struct Data	*data = new struct Data;

	data->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	data->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);
	data->n = *(reinterpret_cast<int *>(raw) + 2);
	return (data);
}

int		main( void )
{
	void	*tmp;
	struct 	Data *data;

	tmp = serialize();
	data = deserialize(tmp);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n : " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	return 0;
}
