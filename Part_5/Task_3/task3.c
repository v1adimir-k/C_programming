#include "func.h" 
void delete(char *str, const char *substr)
{
	int substrlen = strlen(substr);
	char *point = find(str,substr);

	for (int i = 0; *(point + substrlen + i) != 0 ; i++)
	{
		*(point + i) = *(point + substrlen + i);
		*(point + substrlen + i) = 0;
	}
}