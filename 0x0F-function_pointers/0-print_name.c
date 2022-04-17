#define NULL ((void *)0)

/**
 * print_name - prints a name using a callback function
 * @name: pointer to the name
 * @f: pointer to the printing function to be used
 *
 * Return: void, nth
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
