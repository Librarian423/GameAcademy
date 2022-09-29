typedef struct account
{
	int accountNumber;
	char name[100];
	int cash;

}Account;

int search(Account* ptr, int temp, const int input);
void CreateAccount(Account* ptr);
void deposit(Account* ptr, int money);
void withdraw(Account* ptr, int money);
void printall(const Account* ptr, const int p);