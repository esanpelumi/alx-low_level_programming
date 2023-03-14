#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	int len1 = strlen(s1);

	int len2 = strlen(s2);

	char *result = malloc(len1 + len2 + 1);

	if (!result)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}

int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *s3 = str_concat(s1, s2);

	if (s3)
	{
		printf("%s\n", s3);
		free(s3);
	}
	else
	{
		printf("Failed to concatenate strings.\n");
	}
	return (0);
}
