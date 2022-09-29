#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;    	// 장전된 총알의 수
public:
	Gun(int bnum) : bullet(bnum)
	{
	}
	void Shut()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}

	Gun& operator=(const Gun& ref)
	{
		bullet = ref.bullet;
		return *this;
	}
};

class Police
{
private:
	int handcuffs;    // 소유한 수갑의 수
	Gun* pistol;     // 소유하고 있는 권총
public:
	Police(int bnum, int bcuff)
		: handcuffs(bcuff)
	{
		if ( bnum > 0 )
			pistol = new Gun(bnum);
		else
			pistol = NULL;
	}
	Police(const Police& ref)
		:handcuffs(ref.handcuffs), pistol(nullptr)
	{
		if ( ref.pistol != nullptr )
		{
			pistol = new Gun(*ref.pistol);
		}
	}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
	void Shut()
	{
		if ( pistol == NULL )
			cout << "Hut BBANG!" << endl;
		else
			pistol->Shut();
	}
	~Police()
	{
		if ( pistol != NULL )
			delete pistol;
	}
	Police& operator=(const Police& ref)
	{
		if ( pistol != nullptr )
		{
			delete pistol;
			pistol = nullptr;
			
		}

		if ( ref.pistol != nullptr )
		{
			pistol = new Gun(*ref.pistol);
		}
		handcuffs = ref.handcuffs;
		
		return *this;
	}
};

int main(void)
{
	Police pman1(5, 3);
	pman1.Shut();
	pman1.PutHandcuff();

	Police pman2(0, 3);     // 권총소유하지 않은 경찰
	pman2.Shut();
	pman2.PutHandcuff();

	pman1 = pman2;
	pman1.Shut();
	pman1.PutHandcuff();
	return 0;
}