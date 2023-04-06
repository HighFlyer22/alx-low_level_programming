#include "main.h"

/**
 * strlen_no_wilds - Helper function to find the length of a string without wildcards
 * @str: The string to find the length of
 *
 * Return: The length of the string without wildcards
 */

int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}

	return (len);
}

/**
 * iterate_wild - Helper function to iterate past consecutive wildcards in a string
 * @wildstr: A pointer to a pointer to the start of a wildcard string
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - Helper function to find the first matching postfix of a string
 * @str: The string to search for the postfix in
 * @postfix: The postfix to search for
 *
 * Return: A pointer to the first matching postfix, or NULL if not found
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered identical
 * @s1: The first string to compare
 * @s2: The second string to compare, which may contain the wildcard character *
 *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
