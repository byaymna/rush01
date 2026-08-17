

#include <stdio.h>

int main ()
{
	int tab[4][4] = 
	{
		{1, 1, 1, 1},
		{1, 1, 1, 1},
		{1, 1, 1, 1},
		{1, 1, 1, 1}
	};
	int i, j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d\t", tab[i][j]);
			j++;
		}
		
		printf("\n");
		i++;

	}
	return(0);
}
