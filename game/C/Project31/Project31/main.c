#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void SwapPoint(Point* ptr1, Point* ptr2)
{
	printf("Swap\n");
	/*int xtemp = 0;
	int ytemp = 0;
	xtemp = ptr1->xpos;
	ytemp = ptr1->ypos;
	ptr1->xpos = ptr2->xpos;
	ptr1->ypos = ptr2->ypos;
	ptr2->xpos = xtemp;
	ptr2->ypos = ytemp;*/

	Point temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main()
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	printf("pos1: { %d, %d }\n", pos1.xpos, pos1.ypos);
	printf("pos2: { %d, %d }\n\n", pos2.xpos, pos2.ypos);
	
	SwapPoint(&pos1, &pos2);

	printf("pos1: { %d, %d }\n", pos1.xpos, pos1.ypos);
	printf("pos2: { %d, %d }\n", pos2.xpos, pos2.ypos);

	return 0;
}