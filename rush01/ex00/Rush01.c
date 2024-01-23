#include<unistd.h>

void cr_matrix()
{
	char matrix[4][4];
	int i;
	int j;
	i = 0;
	while(i < 4)
	{
		j = 0;
		while(j < 4)
		{
			write(1,&matrix[i][j],1);
			write(1," ",1);
			j++;
		}
		i++;
		write(1,"\n",1);
	}
}
