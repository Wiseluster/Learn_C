#include <stdio.h>

int main(void)
{
	int dec;
	printf("Welcome to dec to hex program.\n\n");

	while("true")
        {
		printf("Enter your number: ");
		scanf("%d", &dec);

		printf("Chang the dec(%d) to hex: %x \n\n", dec, dec);
	}
	return 0;
}
