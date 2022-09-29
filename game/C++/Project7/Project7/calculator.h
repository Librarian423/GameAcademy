class Calculator
{
public:
	void Init();
	void ShowOpCount();
	double Add(double a, double b);
	double Div(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);

private:
	int AddCount;
	int MinCount;
	int MulCount;
	int DivCount;
};