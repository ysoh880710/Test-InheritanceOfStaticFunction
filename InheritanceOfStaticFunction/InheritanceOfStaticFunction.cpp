#include <iostream>

class CA
{
private:
public:

	CA(){}
	~CA(){}

	static void Function0()
	{
		std::wcout << L"Function0" << std::endl;
	}
};

class CB : public CA
{
private:
public:

	CB(){}
	~CB(){}
};

int main()
{
	CB::Function0();
	return 0;
}