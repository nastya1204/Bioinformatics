#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;

int main()
{
	string pattern;
	int tmp;

	cout << "Pattern:";
	cin >> pattern;
	cout << endl;

	int sizepattern = pattern.length();

	for (int i = 0; i < sizepattern; i++)
	{
		switch (pattern[i])
		{
		case 'A': pattern[i] = 'T';
			break;
		case 'T': pattern[i] = 'A';
			break;
		case 'C': pattern[i] = 'G';
			break;
		case 'G': pattern[i] = 'C';
			break;
		}
	}

	for (int i = 0, j = sizepattern - 1; i < j; i++, j--)
	{
		tmp = pattern[i];
		pattern[i] = pattern[j];
		pattern[j] = tmp;
	}

	cout << "Result:" << pattern << endl;
	
	system("pause");

	return 0;
}