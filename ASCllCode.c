#include <stdio.h>

int main(void)
{
	char ch;
	printf("Welcome to ASCll Code to Word Program.\n\n");

	while("true")
	{
		printf("Please enter a ASCll Code: ");
		scanf("%d", &ch);

		printf("The word for %d is %c.\n\n", ch, ch);
	}
	return 0;
}
