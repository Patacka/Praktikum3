#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int hypoqua = 0;
	int kathequa = 0;
	int gekathequa = 0;



	for (int hypo = 1; hypo <= 500; hypo++)
	{
		for (int kathe = 1; kathe < 500; kathe++)
		{
			for (int gekathe = 1; gekathe < 500; gekathe++)
			{
				hypoqua = hypo * hypo;
				kathequa = kathe * kathe;
				gekathequa = gekathe * gekathe;

				if ((kathequa + gekathequa) == hypoqua)
				{
					cout << kathe << "        " << gekathe << "           " << hypo << endl;
				}
			}
		}
	}
