#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *solution(char *s,  size_t *a)
{
	size_t len = strlen(s);
	char *result = malloc((sizeof(char) * len) + 1);

	size_t idx = 0;
	for (size_t i = 0; i < len; ++i) {
		result[i] = s[idx];
		idx = a[idx];
	}
	result[len] = '\0';

	return result;
}


int main(int argc, char *argv[])
{
	{
		size_t a[] = {3, 2, 0, 1};
		char *sol = solution("cdeo", a);
		printf("Solution: %s\n", sol);
		free(sol);
	}

	{
		size_t a[] = {5, 2, 0, 1, 6, 4, 8, 3, 7};
		char *sol = solution("cdeenetpi", a);
		printf("Solution: %s\n", sol);
		free(sol);
	}

	return EXIT_SUCCESS;
}
