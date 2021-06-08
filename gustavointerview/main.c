#include <stdio.h>
#include <stdlib.h>

/* A Loop that prints the number to 0 to 9 separate by comma and space*/


main ( )
{

	int i;

	for (i >= 0; i<=98; i++){

        printf("%d", i);
        printf(",");
	printf(" ");
	}
	if (i <= 99){
	printf("%d",i);
	printf("\n");
	}
return 0;
}
