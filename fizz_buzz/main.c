#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void fizz_buzz(void)
{
	for (int32_t i = 0; i < 100; ++i) {
		if (i % 3 == 0 && i % 5 == 0) printf("fizzbuzz\n");
		else if (i % 3 == 0) printf("fizz\n");
		else if (i % 5 == 0) printf("buzz\n");
		else printf("%d\n", i);
	}
}

int main(int argc, char *argv[])
{
	fizz_buzz();

	return EXIT_SUCCESS;
}
