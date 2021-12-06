#include <iostream>

using namespace std;

int main()
{
	char a = 0;
	cout << "Enter a letter" << endl;
	cin >> a;
	if (('a' <= a) && (a <= 'z'))
	{
		cout << "Lower case" << endl;
	}
	else if (('A' <= a) && (a <= 'Z'))
	{
		cout << "Upper case" << endl;
	}
	else
	{
		cout << "Error" << endl;
	}
	system("pause");
	return 0;
}