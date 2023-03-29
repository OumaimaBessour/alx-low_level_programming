#include "main.h"
char *add_strings(int *n1, char *n2, char *r, int *r_index);
char *infinite_add(int *n1, char *n2, char *r, int *size_r);
/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
*/
char *add_strings(int *n1, char *n2, char *r, int *r_index)
{
	int num, tens = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index,n1_len = 0,n2_len = 0;
	for (index = 0; *(n1 + index); index++)
		n1_index++;
	for (index = 0; *(n2 + index); index++)
                n2_index++;
	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);
	n1 += n1_len - 1;
	n1 += n1_len - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r);
}
