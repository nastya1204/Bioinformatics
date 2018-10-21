#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;

int main()
{
	string pattern, genome;
	int result = 0;

	cout << "Pattern:";
	cin >> pattern;
	cout << endl;

	cout << "Genome:";
	cin >> genome;
	cout << endl;

	int sizegenome = genome.length();
	int sizepattern = pattern.length();

	for (int i = 0; i < sizegenome - sizepattern; i++)
	{
		if (genome.compare(i, sizepattern, pattern) == 0)
		{
			result += 1;
		}
	}

	cout << "Result:" << result << endl;

	system("pause");

	return 0;
}