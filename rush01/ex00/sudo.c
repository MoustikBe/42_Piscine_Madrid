/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:01:56 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/19 20:07:08 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void display(int *tab_xr)
{
	int count;
	count = 0;
	while (count < 4)
	{
		char digit = '0' + tab_xr[count];
		write(1, &digit, 1);
		write(1, " " ,1);
		count++;
	}
	write(1, "\n", 1);
}

void char_to_int(char* chaine, int num)
{


}

void int_to_char(int num, char* chaine)
{
	int temp; 
	if (num == 0)
	{
		chaine[0] = '0';
		chaine[1] = '\0';
		return;
	}
	int count; 
	count = 0;
	temp = num; 

	while(temp != 0)
	{
		temp /= 10; 
		count++; 
	}

	chaine[count] = '\0';

	while(count > 0)
	{
		count--; 
		chaine[count] = '0' + num % 10;
		num /= 10; 
	}		
}

void if_for_4(void)
{
	if (arg[x] == 4) /* Ici c'est une comparaison au nombre du caractere pas le contenus*/
	{
		if (arg[x] < 0 > 4)
		{
			tab_1r[] /*changer la valeur a l'endroit x par 1 */  = arg[x];
		  	
		}
		if (arg[x] < 4 > 8)
		{
			tab_1r[] /*changer la valeur a l'endroit x par 1 */  = arg[x];	
		}
		if (arg[x] < 8 > 12)
		{
			tab_1r[] /*changer la valeur a l'endroit x par 1 */  = arg[x];
		}
		if(arg[x] < 12 > 15)
		{
			tab_1r[] /*changer la valeur a l'endroit x par 1 */  = arg[x];
		}
	}
}
void if_for_3(void)
{
	if (arg[x] == 3)
	{
		
	}
}
void if_for_2(void)
{
	if (arg[x] == 2)
	{

	}
}
void if_for_1(void)
{
	if (arg[x] == 1)
	{	/* Ici c'est une comparaison au nombre du caractere pas le contenus*/
		if (arg[x] < 0 > 4)
		{
			tab_1r[] /*changer la valeur a l'endroit x par 4 */  = arg[x];

		}
		if (arg[x] < 4 > 8)
		{
			tab_1r[] /*changer la valeur a l'endroit x par 4 */  = arg[x];
		}
		if (arg[x] < 8 > 12)
		{
			tab_1r[] /*changer la valeur a l'endroit x par 4 */  = arg[x];
		}
		if(arg[x] < 12 > 15)
		{
			tab_1r[] /*changer la valeur a l'endroit x par 4 */  = arg[x];
		}
	}
}



int main(int count, char **arg) 
{
	int count2; 
	count2 = 0; 
	
	/*Valeur de base inchanger*/
	int tab_1r[] = {1, 2, 3, 4};
 	int tab_2r[] = {1, 2, 3, 4};
	int tab_3r[] = {1, 2, 3, 4};
	int tab_4r[] = {1, 2, 3, 4};


	display(tab_1r);
	display(tab_2r);
	display(tab_3r);
	display(tab_4r); 


	if (arg[0] == 4)
	{
	
	}
	if (arg[0] == 1)
	{
		
	}

	if (arg[0] == 2)
	{

	}
	if (arg[0] == 3)
	{
	
	}

    return 0;
}

