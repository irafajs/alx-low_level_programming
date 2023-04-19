/**
 * print_name - output the char pointed by a function
 * @name: passed argumenr
 * @f: pointer to a function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

