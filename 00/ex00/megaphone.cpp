#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
	int i;
	int	j;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(i < argc)
		{
			while(argv[i][j])
			{
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}