#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ' && str[i] <= 64) && (str[i+1] >= 'a'
					&& str[i+1] <= 'z'))
		{
			str[i+1] -= 32;
		}
		i++;
	}
	return (0);
}
int main ()
{
	char s [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(s);
	printf("%s",s);
	return (0);
}
