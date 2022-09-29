#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void clearLineBuffer()
{
	while ( getchar() != '\n' );
}

int main(int argc, char* argv[])
{
	if ( argc < 1 )
	{
		return -1;
	}
	const char* fileName = argv[1];


	//Question1();
	//Question2();
	//Question3();
	//Question4();
	//Question5();
	Question6();
	Question7();
	return 0;
}