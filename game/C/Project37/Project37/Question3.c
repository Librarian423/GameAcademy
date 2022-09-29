#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void Question3()
{
	CompNumber num[2];
	double input;
	double rnum = 0;
	double inum = 0;

	for ( int i = 0; i < 2; i++ )
	{
		printf("복소수 입력%d[실수 허수]: ", i + 1);
		scanf_s("%lf %lf", &num[i].rnum, &num[i].inum);
	}

	CompNumber sum;
	sum = CompNumAdd(&num[0], &num[1]);
	printf("합의 결과] 실수: %lf, 허수: %lf\n", sum.rnum, sum.inum);

	CompNumber mul;
	mul = CompNumMul(&num[0], &num[1]);
	printf("곱의 결과] 실수: %lf, 허수: %lf\n", mul.rnum, mul.inum);
}

CompNumber CompNumAdd(CompNumber* ptr1, CompNumber* ptr2)
{
	CompNumber cn;
	cn.rnum = ptr1->rnum + ptr2->rnum;
	cn.inum = ptr1->inum + ptr2->inum;
	return cn;
}

CompNumber CompNumMul(CompNumber* ptr1, CompNumber* ptr2)
{
	CompNumber cn;
	cn.rnum = (ptr1->rnum * ptr2->rnum) - (ptr1->inum * ptr2->inum);
	cn.inum = (ptr1->inum * ptr2->rnum) + (ptr1->rnum * ptr2->inum);
	
	return cn;
}

