#include <stdlib.h>
#include <string.h>

int _atoi(char *s)
{
	char *p;
	strtol(s, &p, 10);
	return;
}
