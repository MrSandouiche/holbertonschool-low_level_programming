#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int mult = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mult);
	return (0);
}
