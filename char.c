#include <stdio.h>

int main(void)
{
	char ch;
	printf("Welcome to Word to ASCll Code Program.\n\n");

	while("true")
	{
		printf("Please enter a character: ");
		scanf("%c", &ch);

		printf("The ASCll Code for %c is %d.", ch, ch);
	}
	return 0;
}
