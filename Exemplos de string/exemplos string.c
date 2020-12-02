/******************************************************************************
Marco Beraldi
Ciencia da Computacao - UFSCar - 2011
Exemplos de string
*******************************************************************************/
//comparação strings

#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100],str2[100];
	printf ("Entre com uma string: ");
	gets (str1);
	printf ("\n\nEntre com outra string: ");
	gets (str2);
	if (strcmp(str1,str2))
        	printf ("\n\nAs duas strings são diferentes.");
	else printf ("\n\nAs duas strings são iguais.");
	return(0);
}

//tamanho

#include <stdio.h>
#include <string.h>
int main ()
{
	int size;
	char str[100];
	printf ("Entre com uma string: ");
	gets (str);
	size=strlen (str);
	printf ("\n\nA string que voce digitou tem tamanho %d",size);
	return(0);
}

//copia

#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100],str2[100],str3[100];
	printf ("Entre com uma string: ");
	gets (str1);
	strcpy (str2,str1);	/* Copia str1 em str2 */
	strcpy (str3,"Voce digitou a string "); /* Copia "Voce digitou a string" em str3 */
	printf ("\n\n%s%s",str3,str2);
	return(0);
}

//concatena

#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100],str2[100];
	printf ("Entre com uma string: ");
	gets (str1);
	strcpy (str2,"Voce digitou a string ");
	strcat (str2,str1);	/* str2 armazenara' Voce digitou a string + o conteudo de str1 */
	printf ("\n\n%s",str2);
	return(0);
}
