#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][i])
		{
			if (argv[1][j] == argv[2][i])
				j++;
			if (argv[1][j] == '\0')
			{
				j = 0;
				while (argv[1][j])
				{
					write(1, &argv[1][j], 1);
					j++;
				}
				break ;
			}
			i++;
		}
	}


 

