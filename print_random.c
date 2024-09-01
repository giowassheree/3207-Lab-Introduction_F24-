#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function that generates a random letter using the rand functon from the stdlib library
char randChar() {
	return 'A' + (rand() % 26);
}

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	// Generates 7 random letters using the randChar function
	for(a=0;a<7;a++)
		putchar( randChar() );
	putchar('\n');

	return(0);
}
