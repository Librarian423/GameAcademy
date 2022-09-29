#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct point2
{
	double xpos;
	double ypos;
}Point2;

typedef struct rectangle
{
	Point cor1;
	Point cor2;
}Rectangle;

typedef struct rectangle2
{
	Point2 midpoint;
	double height;
	double width;
}Rectangle2;

typedef struct rectangle3
{
	double ax1;
	double ax2;
	double ay1;
	double ay2;

	double bx1;
	double bx2;
	double by1;
	double by2;
}Rectangle3;

void coordinate(const Rectangle* ptr)
{
	//ÁÂÇ¥ Ãâ·Â
	if ( ptr->cor1.xpos < ptr->cor2.xpos && ptr->cor1.ypos < ptr->cor2.ypos )
	{
		printf("1¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor1.xpos, ptr->cor2.ypos);
		printf("2¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor2.xpos, ptr->cor2.ypos);
		printf("3¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor1.xpos, ptr->cor1.ypos);
		printf("4¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor2.xpos, ptr->cor1.ypos);
	}
	else if ( ptr->cor1.xpos > ptr->cor2.xpos && ptr->cor1.ypos < ptr->cor2.ypos )
	{
		printf("1¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor2.xpos, ptr->cor2.ypos);
		printf("2¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor1.xpos, ptr->cor2.ypos);
		printf("3¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor2.xpos, ptr->cor1.ypos);
		printf("4¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor1.xpos, ptr->cor1.ypos);
	}
	else if ( ptr->cor1.xpos < ptr->cor2.xpos && ptr->cor1.ypos > ptr->cor2.ypos )
	{
		printf("1¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor1.xpos, ptr->cor1.ypos);
		printf("2¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor2.xpos, ptr->cor1.ypos);
		printf("3¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor1.xpos, ptr->cor2.ypos);
		printf("4¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor2.xpos, ptr->cor2.ypos);
	}
	else
	{
		printf("1¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor2.xpos, ptr->cor1.ypos);
		printf("2¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor1.xpos, ptr->cor1.ypos);
		printf("3¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor2.xpos, ptr->cor2.ypos);
		printf("4¹ø ÁÂÇ¥ (%d, %d)\n", ptr->cor1.xpos, ptr->cor2.ypos);
	}
	
}

void area(const Rectangle* ptr)
{
	int x = abs(ptr->cor1.xpos - ptr->cor2.xpos);
	int y = abs(ptr->cor1.ypos - ptr->cor2.ypos);
	
	if ( abs(ptr->cor1.xpos) == abs(ptr->cor2.xpos) || abs(ptr->cor1.ypos) == abs(ptr->cor2.ypos) )
	{
		printf("Not Rectangle\n");
	}
	else
	{
		printf("Area = %d\n", x * y);
	}
}

void midArea(const Rectangle2* ptr)
{
	printf("Area = %d\n", abs(ptr->height * ptr->width));
}

void midCoordinate(const Rectangle2* ptr)
{
	Rectangle3 rec3;
	
	double x1 = ptr->midpoint.xpos - ptr->width / 2;
	double x2 = ptr->midpoint.xpos + ptr->width / 2;
	double y1 = ptr->midpoint.ypos - ptr->height / 2;
	double y2 = ptr->midpoint.ypos + ptr->height / 2;

	//ÁÂÇ¥ Ãâ·Â
	if ( x1 < x2 && y1 < y2 )
	{
		printf("1\n");
		printf("1¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x1, y2);
		printf("2¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x2, y2);
		printf("3¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x1, y1);
		printf("4¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x2, y1);
	}
	else if ( x1 > x2 && y1 < y2 )
	{
		printf("2\n");
		printf("1¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x2, y2);
		printf("2¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x1, y2);
		printf("3¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x2, y1);
		printf("4¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x1, y1);
	}
	else if ( x1 < x2 && y1 > y2 )
	{
		printf("3\n");
		printf("1¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x1, y1);
		printf("2¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x2, y1);
		printf("3¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x1, y2);
		printf("4¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x2, y2);
	}
	else
	{
		printf("4\n");
		printf("1¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x2, y1);
		printf("2¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x1, y1);
		printf("3¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x2, y2);
		printf("4¹ø ÁÂÇ¥ (%.2f, %.2f)\n", x1, y2);
	}
	
}

void checkRectangle(const Rectangle* ptr1, const Rectangle2* ptr2)
{
	Rectangle3 rec3;
	//ax1 > ax2 | ay1 > ay2
	if ( ptr1->cor1.xpos < ptr1->cor2.xpos )
	{
		rec3.ax1 = ptr1->cor1.xpos;
		rec3.ax2 = ptr1->cor2.xpos;
	}
	else
	{
		rec3.ax1 = ptr1->cor2.xpos;
		rec3.ax2 = ptr1->cor1.xpos;
	}

	if ( ptr1->cor1.ypos < ptr1->cor2.ypos )
	{
		rec3.ay1 = ptr1->cor2.ypos;
		rec3.ay2 = ptr1->cor1.ypos;
	}
	else
	{
		rec3.ay1 = ptr1->cor1.ypos;
		rec3.ay2 = ptr1->cor2.ypos;
	}
	
	//bx1 > bx2 | by1 > by2
	rec3.bx1 = ptr2->midpoint.xpos + ptr2->width / 2;
	rec3.bx2 = ptr2->midpoint.xpos - ptr2->width / 2;
	rec3.by1 = ptr2->midpoint.ypos + ptr2->height / 2;
	rec3.by2 = ptr2->midpoint.ypos - ptr2->height / 2;

	printf("ax\n%.2f %.2f\nay\n%.2f %.2f\n", rec3.ax1, rec3.ax2, rec3.ay1, rec3.ay2);
	printf("bx\n%.2f %.2f\nby\n%.2f %.2f\n", rec3.bx1, rec3.bx2, rec3.by1, rec3.by2);

	if ( rec3.ax1 > rec3.bx1 || rec3.ax2 < rec3.bx2 || rec3.ay1 < rec3.by2 || rec3.ay2 > rec3.by1 )
	{
		printf("°ãÄ¡Áö ¾ÊÀ½\n");
	}
	else
	{
		printf("°ãÄ§\n");
	}
}

int main()
{
	Rectangle rec1 = { {0,0},{100,100} };
	Rectangle2 rec2 = { {0,0},2,4 };
	
	coordinate(&rec1);
	area(&rec1);

	midArea(&rec2);
	midCoordinate(&rec2);

	checkRectangle(&rec1, &rec2);
	return 0;
}
