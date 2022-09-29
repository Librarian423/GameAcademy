#pragma once

enum class COMP_POS
{
	CLERK,
	SENIOR,
	ASSIST,
	MANAGER,
};

class NameCard
{
public:
	void ShowNameCardInfo();
	const char* GetPosition(COMP_POS num);

	NameCard();
	NameCard(NameCard& namcard);
	NameCard(const char* n, const char* cn, const char* pn, COMP_POS pos);
	~NameCard();
private:
	char* name;
	char* compName;
	char* phoneNum;
	COMP_POS position;
};



