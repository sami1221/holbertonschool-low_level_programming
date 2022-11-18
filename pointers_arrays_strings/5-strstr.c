#include "main.h"
/**
 * *_strstr - locates a substring
 *@needle: char
 *@haystack: char
 *Return: pointer or NULL if no substring found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == '\0')
		{
			return (&haystack[0]);
		}
		else if (haystack[i] == needle[0] && haystack[i + 1] == needle[1])
			return (&haystack[i]);
	}
	return (NULL);
}
