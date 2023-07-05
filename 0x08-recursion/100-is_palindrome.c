#include "main.h"

/**
 * _str_len - function
 * @s: string
 * @len: string length
 * Return: len
*/

int _str_len (char *s, int len)
{
	if (s[len])
		return (_str_len(s, len + 1));
	return (len);
}

/**
 * helper_palindrome - function
 * @s: string
 * @len: string length
 * @i: counter
 * Return: 0 or 1
*/

int helper_palindrome (char *s, int len, int i)
{
	if (i == len / 2)
		return (1);
	if (s[i] == s[len - 1 - i])
		return (helper_palindrome(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - function
 * @s: string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int len;

	len = _str_len(s, 0);
	if (len == 0 || len == 1)
		return (1);
	return (helper_palindrome(s, len, 0));
}
