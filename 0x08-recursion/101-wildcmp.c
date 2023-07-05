#include "main.h"

/**
 * check_s2 - function
 * @s2: string
 * @i: integer
 * Return: 1 or 0
*/

/**
 * _compare - function
 * @s1: string
 * @s2: string
 * @i1: counter s1
 * @i2: counter s2
 * @star_present: boolean
 * Return: 0 or 1
*/
int _compare(char *s1, char *s2, int i1, int i2, int star_present)
{
        if (!s1[i1] && s2[i2])
                return (0);
        if (s1[i1] && !s2[i2])
                return (0);
        if (!s1[i1] && !s2[i2])
                return (1);
        if (s2[i2] == '*')
        {
                star_present = 1;
                return (_compare(s1, s2, i1, i2 + 1, star_present));
        }
        if (!star_present)
        {
                if (s1[i1] == s2[i1])
                        return (_compare(s1, s2, i1 + 1, i2, 0));
                return (0);
        }
        if (star_present && s1[i1] == s2[i2])
                return (_compare(s1, s2, i1 + 1, i2 + 1, 1));
        return (_compare(s1, s2, i1 + 1, i2, 1));
}

/**
 * wildcmp - function
 * @s1: string
 * @s2: string
 * Return: 1 or 0
*/
int wildcmp(char *s1, char *s2)
{
        return (_compare(s1, s2, 0, 0, 0));
}

