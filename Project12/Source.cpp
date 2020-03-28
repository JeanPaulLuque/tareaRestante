#include <iostream>
#include <string>
using namespace std;
int tamArr(char[]);
void transformArray(char[], int);
int main()
{
	char c[13];
	cin >> c;
	char* pointer = c;
	int numLength = tamArr(c);
	cout << numLength << endl;
	transformArray(pointer, numLength);
	return 0;
}

int tamArr(char c[])
{
	char* pointer = c;
	int cont = 0;
	while (*pointer != '\0')
	{
		cont++;
		pointer++;
	}
	return cont;
}
void transformArray(char c[], int n)
{
	char arrayT[4][3];
	char* pointerToBA = c;//Array base
	char* pointerToTA = *arrayT;//array transformado
	int cont = 0;
	for (; pointerToBA < c + n; pointerToBA++, pointerToTA++)
	{
		//cout << cont << " : " << *pointerToBA<<endl;
		*pointerToTA = *pointerToBA;



	}
	pointerToTA = *arrayT;//reinicia el array
	cout << "principal : " << *pointerToTA << endl;
	cout << "ultimo : " << *(pointerToTA + n - 1) << endl;

	while (n)
	{
		switch (n)
		{
		case 1://si n es unidad

			if (*pointerToTA == '1')
			{
				cout << "uno";
			}
			else if (*pointerToTA == '2')
			{
				cout << "dos";
			}
			else if (*pointerToTA == '3')
			{
				cout << "tres";
			}
			if (*pointerToTA == '4')
			{
				cout << "cuatro";
			}
			else if (*pointerToTA == '5')
			{
				cout << "cinco";
			}
			else if (*pointerToTA == '6')
			{
				cout << "seis";
			}
			if (*pointerToTA == '7')
			{
				cout << "siete";
			}
			else if (*pointerToTA == '8')
			{
				cout << "ocho";
			}
			else if (*pointerToTA == '9')
			{
				cout << "nueve";
			}
			n--;
			break;

		case 2://si n es decena

			if (*pointerToTA == '1' || *pointerToTA == '2')
			{
				if (*pointerToTA == '1')
				{
					if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '0')
					{
						cout << "diez";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '1')
					{
						cout << "once";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '2')
					{
						cout << "doce";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '3')
					{
						cout << "trece";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '4')
					{
						cout << "catorce";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '5')
					{
						cout << "quince";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '6')
					{
						cout << "dieciseis";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '7')
					{
						cout << "diecisiete";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '8')
					{
						cout << "dieciocho";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + n - 1) == '9')
					{
						cout << "diecinueve";
						n -= 2;
					}
				}
				else if (*pointerToTA == '2') {
					if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '0')
					{
						cout << "veinte";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '1')
					{
						cout << "veintiuno";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '2')
					{
						cout << "veintidos";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '3')
					{
						cout << "veintitres";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '4')
					{
						cout << "veinticuatro";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '5')
					{
						cout << "veinticinco";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '6')
					{
						cout << "veintiseis";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '7')
					{
						cout << "veintisiete";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '8')
					{
						cout << "veintiocho";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + n - 1) == '9')
					{
						cout << "veintinueve";
						n -= 2;
					}
				}
			}

					if (*pointerToTA == '3' && *(pointerToTA + n - 1) == '0')
					{
						cout << "treinta";
						n -= 2;
					}
					else if (*pointerToTA == '3')
					{
						cout << "treinta y ";
						n--;
						pointerToTA++;
					}
					else if (*pointerToTA == '4')
					{
						cout << "cuarenta y ";
						n--;
						pointerToTA++;
					}
					else if (*pointerToTA == '5')
					{
						cout << "cincuenta y ";
						n--;
						pointerToTA++;
					}
					else if (*pointerToTA == '6')
					{
						cout << "sesenta y ";
						n--;
						pointerToTA++;
					}
					else if (*pointerToTA == '7')
					{
						cout << "setenta y ";
						n--;
						pointerToTA++;
					}
					else if (*pointerToTA == '8')
					{
						cout << "ochenta y ";
						n--;
						pointerToTA++;
					}
					else if (*pointerToTA == '9')
					{
						cout << "noventa y ";
						n--;
						pointerToTA++;
					}
			

				break;

		case 3://si n es centena
			if (*pointerToTA == '1')
			{
				cout << "cien";

			}
			break;
		default:
			break;
			
		}
	}
}