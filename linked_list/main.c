#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct LinkedList {
	char *item;
	struct LinkedList *next;
} LinkedList;

LinkedList *linked_list_new()
{
	LinkedList *root = malloc(sizeof(LinkedList));

	return root;
}

int main(int argc, char *argv[])
{

	return EXIT_SUCCESS;
}
