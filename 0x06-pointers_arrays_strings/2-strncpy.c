#include "main.h"

/**
 * _strncpy - copies up to n characters from the src string to the dest string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to be copied
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, const char *src, int n)
{
        int i, j, len;

        len = 0;
        for (i = 0; src[i] != '\0'; i++)
        {
                len++;
        }

        for (j = 0; src[j] != '\0' && j < n; j++)
        {
                dest[j] = src[j];
        }

        if (n < len)
        {
                return (dest);
        }
        else
        {
                dest[j] = '\0';
        }
        return (dest);
}
