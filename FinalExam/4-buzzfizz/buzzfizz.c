#include <unistd.h>

void ft_putcharRec(char c)
{
	if (c > 9)
		ft_putcharRec(c / 10);
	write(1, &"0123456789"[c % 10], 1);
}

int main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 4 == 0 && i % 7 == 0)
		{
			write(1, "buzzfizz", 8);
		}
		else if (i % 4 == 0)
		{
			write(1, "buzz", 4);
		}
		else if (i % 7 == 0)
		{
			write(1, "fizz", 4);
		}
		else
			ft_putcharRec(i);
		write(1, "\n", 1);
		i++;
	}
}