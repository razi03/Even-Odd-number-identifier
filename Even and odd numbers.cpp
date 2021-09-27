#include <iostream>
using namespace std;
int main()
{
	int integer = 0;
	int standard = 0;
	cout << "Enter a number:  "<< std::endl;
	cin >> integer;
	if (integer % 2==standard)
	{
		cout <<integer <<" is a even number.";
	}
	else
	{
		cout <<integer<< " is a odd number.";
	}
}