

#include "sastantua.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		main(int ac, char *av[])
{
	int i;

	if (ac == 2
		&& (av[1][0] >= '0' && av[1][0] <= '9')
		&& !av[1][1])
	{
		sastantua(av[1][0] - '0');
		return (0);
	}
	else if ((ac == 2 || ac == 3)
		&& av[1][0] == 'a'
		&& !av[1][1]
		&& ((ac == 3
			&& (av[2][0] >= '0' && av[2][0] <= '9')
			&& !av[2][1])
		|| ac == 2))
	{
		i = 0;
		while ((ac == 2 && i++ < 9)
			|| (ac == 3 && i++ < av[2][0] - '0'))
			sastantua(i);
		return (0);
	}
	return (1);
}
