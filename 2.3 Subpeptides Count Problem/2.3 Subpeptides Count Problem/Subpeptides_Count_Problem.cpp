#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	long int length_of_cyclic_peptide;

	cout << "Length of cyclic peptide:";
	cin >> length_of_cyclic_peptide;

	cout << "Result:" << length_of_cyclic_peptide * (length_of_cyclic_peptide - 1) << endl;

	system("pause");

	return 0;
}