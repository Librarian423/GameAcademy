typedef struct library
{
	char author[20];
	char bookName[50];
	int page;

}Library;

typedef struct compNumber
{
	double rnum;
	double inum;

}CompNumber;

typedef struct telephone
{
	char name[20];
	char phone[30];

}Telephone;

FILE* fp;
FILE* fp1;
FILE* fp2;
FILE* fp3;

void clearLineBuffer();

void Question1();
void Question2();
void Question3();
int Question4();
int Question5();
void Question6();
void Question7();

int run(Telephone* ptr, int input);
int insert(Telephone* ptr, int p);
int del(Telephone* ptr, int p);
void search(Telephone* ptr, int p);
void printall(Telephone* ptr, int p);

int writeFile(Telephone* ptr, int line);
int readFile();

CompNumber CompNumAdd(CompNumber* ptr1, CompNumber* ptr2);
CompNumber CompNumMul(CompNumber* ptr1, CompNumber* ptr2);
