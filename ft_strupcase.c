#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
int main () 
{
	char a [] = "sa5ra3h";
	ft_strupcase(a);
	printf ("%s",a);
	return (0);
}
