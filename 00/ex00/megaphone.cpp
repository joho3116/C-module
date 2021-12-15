#include <iostream>
#include <cctype>

std::string	ft_upper(char *str)
{
	std::string	ret;
	unsigned long	i;

	ret = str;
	i = 0;
	while(i < ret.length())
	{
		ret[i] = toupper(str[i]);
		i++;
	}
	return (ret);
}


int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(i < argc)
		{
			std::cout << ft_upper(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
