#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() 
{
	int min = 0;
	int max = 0;

	cout << "Bitte untere Grenze eingeben: ";
	cin >> min;
	cout << "Bitte obere Grenze eingeben: ";
	cin >> max;
	

	for (int prim = 2; prim <= max; prim++) //Primzahlen Counter
	{
		if (min < 0 || max < min) // F�r den Fall einer Falschen Eingabe
		{
			cout << "Eingabe Falsch!";
			break;
		}

		for (int prim2 = 2; prim2 <= prim; prim2++) //Pr�fzahlen Counter
		{
			if (prim% prim2 == 0 && prim != prim2)  //Primpr�fung
			{
				break;
			}
			if (prim == prim2) {
				cout << "Primzahl: " << prim << endl;
			}
		}
		
			
		

	}
	
}