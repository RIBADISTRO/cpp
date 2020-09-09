#include <iostream>
#include <string.h>
#include <cstdlib>

#define USER "linux"
#define KEY "iOS"
using namespace std;

int main()
{
	string usuario, password;
	int contador = 0;
	bool ingresar = false;
	do
	{
		system("clear");
		cout << "\t\tLOGING DE usuario" << endl;
		cout << "\t\t-----------------" << endl;
		cout << "\t\tusuario: ";
		getline(cin, usuario);
		cout << "\t\tpassword: ";
		getline(cin, password);

		if (usuario == USER && password == KEY)
		{
			ingresar = true;
		}
		else
		{
			cout << "El usuario y/o password son incorrecto" << endl;
			cin.get();
			contador++;
		}

	} while (ingresar == false && contador < 3);
	cin.get();

	if (ingresar == false)
	{
		cout << "Usted no pudeo ingresar....!" << endl;
	}
	else
	{
		cout << "BIENVENIDO\n, Seccion iniciada" << endl;
	}
	return 0;
}