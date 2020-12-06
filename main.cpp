#include <iostream>
#include "sec_dregree_i.h"

using namespace std;


int main()
{
	cout << "#################### Equacao do Segundo Grau ###################\n";
	cout << "########## Copyright 2020. Eduardo Programador ############\n";
	cout << "################ www.eduardoprogramador.com ###############\n\n";

	double x, y, z;

	cout << "Valor de ax ao quadrado> ";
	cin >> x;

	cout << endl << "Valor de bx> ";
	cin >> y;

	cout << endl << "Valor de c>";
	cin >> z;

	SecondDegree calc(x, y, z);
	
	cout << "\n\nAs raizes da equacao: " << calc.getRootOne() << " e " << calc.getRootTwo() << ".\n";
	cout << "O valor de Delta: " << calc.getDelta() << endl;
	cout << "A soma das raízes: " << calc.sumOfRoots() << ".\n";
	cout << "O produto das raízes: " << calc.rootsMultiplied();

	cout << "Bom proveito!\n";
	int some;
	cin >> some;

	return 0;
}