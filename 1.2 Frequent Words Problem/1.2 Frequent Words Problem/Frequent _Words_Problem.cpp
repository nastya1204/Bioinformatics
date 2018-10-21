#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;

int main()
{
	string genome, result;
	int size, res = 0, maxres = 0;

	cout << "Genome:";
	cin >> genome;
	cout << endl;

	cout << "Size:";
	cin >> size;
	cout << endl;

	int sizegenome = genome.length();

	for (int i = 0; i < sizegenome - size + 1; i++)
	{
		res = 0;
		string a = genome.substr(i, size);

		for (int j = i + 1; j < sizegenome - size + 1; j++)
		{
			string b = genome.substr(j, size);

			if (a == b)
			{
				res = res + 1;
			}
		}

		if (res > maxres)
		{
			result = genome.substr(i, size);
			maxres = res;
		}

		else if (res == maxres)
		{
			result = result + " " + genome.substr(i, size);
		}
	}

	cout << result;

	system("pause");
	
	return 0;
}