#include "lists.h"

/**
 * print_list - print content of a list
 * @h : pointer to head of a list
 *
 * Return: number of nodes in a list
*/
size_t print_list(const list_t *h)
{
	int i;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		i = 0;
		if (h->str)
		{
			_putchar('[');
			_putchar((h->len) + '0');
			_putchar(']');
			_putchar(' ');
		}
		if (!h->str)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		else
		{
			while (h->str[i])
			{
				_putchar(h->str[i]);
				i++;
			}
		}
		_putchar('\n');
		h = h->next;
	}
	return (count);
}
