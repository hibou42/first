#include <stdio.h>
#include <unistd.h>

int	main (void)
{
	printf("Hello World\n");
//Et puisse la norminette vous être favorable	
	int	x = 0;
	char	c[] = "Made from my ThinkPadE590";
	while (c[x] != '\0')
	{
		write (1, &c[x], 1);
		x++;
	}
	write (1, "\n", 1);
	return (0);
}
