#include <unistd.h>

int	ft_putchar (char h)
{
	return write (1, &h, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char *str = "Hola mundo!";

	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}*/
