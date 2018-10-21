#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;

int main()
{
	string rna, amino, res;

	cout << "RNA string:";
	cin >> rna;
	cout << endl;

	int sizerna = rna.length();

	for (int i = 0; i < sizerna; i += 3)
	{
		
		if (rna.substr(i, 3) == "AAA") 
			amino = "K";
		else if (rna.substr(i, 3) == "AAC") 
			amino = "N";
		else if (rna.substr(i, 3) == "AAG")
			amino = "K";
		else if(rna.substr(i, 3) =="AAU")
			amino = "N";	

		else if(rna.substr(i, 3) == "ACA") 
			amino = "T";
		else if(rna.substr(i, 3) == "ACC")
			amino = "T";
		else if(rna.substr(i, 3) == "ACG")
			amino = "T";
		else if(rna.substr(i, 3) == "ACU")
			amino = "T";

		else if(rna.substr(i, 3) == "AGA")
			amino = "R";
		else if(rna.substr(i, 3) == "AGC")
			amino = "S";
		else if(rna.substr(i, 3) == "AGG")
			amino = "R";
		else if(rna.substr(i, 3) == "AGU")
			amino = "S";

		else if (rna.substr(i, 3) == "AUA")
			amino = "I";
		else if (rna.substr(i, 3) == "AUC")
			amino = "I";
		else if (rna.substr(i, 3) == "AUG")
			amino = "M";
		else if (rna.substr(i, 3) == "AUU")
			amino = "I";

		else if (rna.substr(i, 3) == "CAA")
			amino = "Q";
		else if (rna.substr(i, 3) == "CAC")
			amino = "H";
		else if (rna.substr(i, 3) == "CAG")
			amino = "Q";
		else if (rna.substr(i, 3) == "CAU")
			amino = "H";

		else if (rna.substr(i, 3) == "CCA")
			amino = "P";
		else if (rna.substr(i, 3) == "CCC")
			amino = "P";
		else if (rna.substr(i, 3) == "CCG")
			amino = "P";
		else if (rna.substr(i, 3) == "CCU")
			amino = "P";

		else if (rna.substr(i, 3) == "CGA")
			amino = "R";
		else if (rna.substr(i, 3) == "CGC")
			amino = "R";
		else if (rna.substr(i, 3) == "CGG")
			amino = "R";
		else if (rna.substr(i, 3) == "CGU")
			amino = "R";

		else if (rna.substr(i, 3) == "CUA")
			amino = "L";
		else if (rna.substr(i, 3) == "CUC")
			amino = "L";
		else if (rna.substr(i, 3) == "CUG")
			amino = "L";
		else if (rna.substr(i, 3) == "CUU")
			amino = "L";

		else if (rna.substr(i, 3) == "GAA")
			amino = "E";
		else if (rna.substr(i, 3) == "GAC")
			amino = "D";
		else if (rna.substr(i, 3) == "GAG")
			amino = "E";
		else if (rna.substr(i, 3) == "GAU")
			amino = "D";

		else if (rna.substr(i, 3) == "GCA")
			amino = "A";
		else if (rna.substr(i, 3) == "GCC")
			amino = "A";
		else if (rna.substr(i, 3) == "GCG")
			amino = "A";
		else if (rna.substr(i, 3) == "GCU")
			amino = "A";

		else if (rna.substr(i, 3) == "GGA")
			amino = "G";
		else if (rna.substr(i, 3) == "GGC")
			amino = "G";
		else if (rna.substr(i, 3) == "GGG")
			amino = "G";
		else if (rna.substr(i, 3) == "GGU")
			amino = "G";

		else if (rna.substr(i, 3) == "GUA")
			amino = "V";
		else if (rna.substr(i, 3) == "GUC")
			amino = "V";
		else if (rna.substr(i, 3) == "GUG")
			amino = "V";
		else if (rna.substr(i, 3) == "GUU")
			amino = "V";

		else if (rna.substr(i, 3) == "UAA")
			amino = "";
		else if (rna.substr(i, 3) == "UAC")
			amino = "Y";
		else if (rna.substr(i, 3) == "UAG")
			amino = "";
		else if (rna.substr(i, 3) == "UAU")
			amino = "Y";

		else if (rna.substr(i, 3) == "UCA")
			amino = "S";
		else if (rna.substr(i, 3) == "UCC")
			amino = "S";
		else if (rna.substr(i, 3) == "UCG")
			amino = "S";
		else if (rna.substr(i, 3) == "UCU")
			amino = "S";
 
		else if (rna.substr(i, 3) == "UGA")
			amino = "";
		else if (rna.substr(i, 3) == "UGC")
			amino = "C";
		else if (rna.substr(i, 3) == "UGG")
			amino = "W";
		else if (rna.substr(i, 3) == "UGU")
			amino = "C";

		else if (rna.substr(i, 3) == "UUA")
			amino = "L";
		else if (rna.substr(i, 3) == "UUC")
			amino = "F";
		else if (rna.substr(i, 3) == "UUG")
			amino = "L";
		else if (rna.substr(i, 3) == "UUU")
			amino = "F";
			
			res += amino;
	}

	cout << "Amino acid string:" << res << endl;
	
	system("pause");
	
	return 0;
}