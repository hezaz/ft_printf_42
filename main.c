#include "../libft/libft.h"

int	main(int ac, char *av[])
{
	if (!ac || !av[1])
		return 0;
	char	c = 'c';
	int		x = ft_atoi(av[2]);
	unsigned int y = ft_atoi(av[3]);
	int cpt = 0;
	//printf("\n%u\n", (unsigned int)x);
	//ft_put_hexa(x, 1);
	cpt += ft_printf("\n c : %c \n s : %s \n p : %p \n d : %d \n i : %i \n u : %u \n x : %x \n X : %X \n", c, av[1], (void *)av, x, x, y, x, x);
	printf("\n\n\n cpt = %d \n\n\n", cpt);
	printf("\n c : %c \n s : %s \n p : %p \n d : %d \n i : %i \n u : %u \n x : %x \n X : %X \n", c, av[1], (void *)av, x, x, y, x, x);
}
