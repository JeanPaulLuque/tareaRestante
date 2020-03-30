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
	string unmil("mil");
	bool miles = false;
	bool millones = false;
	

	for (; pointerToBA < c + n; pointerToBA++, pointerToTA++)
	{
		//cout << cont << " : " << *pointerToBA<<endl;
		*pointerToTA = *pointerToBA;



	}
	pointerToTA = *arrayT;//reinicia el array
	cout << "principal : " << *pointerToTA << endl;
	cout << "ultimo : " << *(pointerToTA +1) << endl;

	while (n)
	{
		switch (n)
		{
		case 1:case 4://si n es unidad

			if (n == 4)
			{
				miles = true;
			}
			if (*pointerToTA == '0')
			{
				//falta revisar
			}
			if (*pointerToTA == '1')
			{
				if (miles)
				{
					cout << "mil ";

				}
				else
				cout << "uno";
				
			}
			else if (*pointerToTA == '2')
			{
				if (miles)
				{
					cout << "dos mil ";

				}else
					cout << "dos ";

			}
			else if (*pointerToTA == '3')
			{
				
				if (miles)
				{
					cout << "tres mil ";

				}else
					cout << "tres ";
			}
			if (*pointerToTA == '4')
			{
				
				if (miles)
				{
					cout << "cuatro mil ";

				}else
					cout << "cuatro";
			}
			else if (*pointerToTA == '5')
			{
				
				if (miles)
				{
					cout << "cinco mil ";

				}else
					cout << "cinco";
			}
			else if (*pointerToTA == '6')
			{
				
				if (miles)
				{
					cout << "seis mil ";

				}else
					cout << "seis";
			}
			if (*pointerToTA == '7')
			{
				if (miles)
				{
					cout << "siete mil ";

				}else
					cout << "siete";
			}
			else if (*pointerToTA == '8')
			{
				
				if (miles)
				{
					cout << "ocho mil ";

				}else
					cout << "ocho";
			}
			else if (*pointerToTA == '9')
			{
				
				if (miles)
				{
					cout << "nueve mil ";

				}else
					cout << "nueve";
			}
			n--;
			pointerToTA++;
			if (miles)miles = false;
			break;

		case 2 :case 5://case 5://si n es decena

			if (n==5)
			{
				miles = true;
				
			}
			if (*pointerToTA == '0')
			{
				n--;
				pointerToTA++;
				continue;
			}
			if (*pointerToTA == '1' || *pointerToTA == '2')
			{
				if (*pointerToTA == '1')
				{
					if (*pointerToTA == '1' && *(pointerToTA+1) == '0')
					{
						cout << "diez";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA+1) == '1')
					{
						cout << "once";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + 1) == '2')
					{
						cout << "doce";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + 1) == '3')
					{
						cout << "trece";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + 1) == '4')
					{
						cout << "catorce";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + 1) == '5')
					{
						cout << "quince";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + 1) == '6')
					{
						cout << "dieciseis";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + 1) == '7')
					{
						cout << "diecisiete";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + 1) == '8')
					{
						cout << "dieciocho";
						n -= 2;
					}
					else if (*pointerToTA == '1' && *(pointerToTA + 1) == '9')
					{
						cout << "diecinueve";
						n -= 2;
					}
				}
				else if (*pointerToTA == '2') {
					if (*pointerToTA == '2' && *(pointerToTA + 1) == '0')
					{
						cout << "veinte";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + 1) == '1')
					{
						if(miles)
							cout << "veintiun";
						else
						cout << "veintiuno";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + 1) == '2')
					{
						cout << "veintidos";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + 1) == '3')
					{
						cout << "veintitres";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + 1) == '4')
					{
						cout << "veinticuatro";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + 1) == '5')
					{
						cout << "veinticinco";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + 1) == '6')
					{
						cout << "veintiseis";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + 1) == '7')
					{
						cout << "veintisiete";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + 1) == '8')
					{
						cout << "veintiocho";
						n -= 2;
					}
					else if (*pointerToTA == '2' && *(pointerToTA + 1) == '9')
					{
						cout << "veintinueve";
						n -= 2;
					}
				}
				//if (miles)
				//{
				//	cout << " mil ";
				//	miles = false;
				//	pointerToTA ++;
				//	pointerToTA++;
				//	
				//	
				//}
			}

					if (*pointerToTA == '3' && *(pointerToTA + 1) == '0')
					{
						cout << "treinta";
						n -= 2;
					}
					else if (*pointerToTA == '3')
					{
						cout << "treinta y ";
						n--;
						pointerToTA++;
						if (miles && *pointerToTA == '1')
							cout << "un ";
						continue;
					}
					if (*pointerToTA == '4' && *(pointerToTA + 1) == '0')
					{
						cout << "cuarenta";
						n -= 2;
					}
					else if (*pointerToTA == '4')
					{
						cout << "cuarenta y ";
						n--;
						pointerToTA++;
						if (miles && *pointerToTA == '1')
							cout << "un ";
						continue;
					}
					if (*pointerToTA == '5' && *(pointerToTA + 1) == '0')
					{
						cout << "cincuenta";
						n -= 2;
					}
					else if (*pointerToTA == '5')
					{
						cout << "cincuenta y ";
						n--;
						pointerToTA++;
						if (miles && *pointerToTA == '1')
							cout << "un ";
						continue;
					}
					if (*pointerToTA == '6' && *(pointerToTA + 1) == '0')
					{
						cout << "sesenta";
						n -= 2;
					}
					else if (*pointerToTA == '6')
					{
						cout << "sesenta y ";
						n--;
						pointerToTA++;
						if (miles && *pointerToTA == '1')
							cout << "un ";
						continue;
					}
					if (*pointerToTA == '7' && *(pointerToTA + 1) == '0')
					{
						cout << "setenta";
						n -= 2;
					}
					else if (*pointerToTA == '7')
					{
						cout << "setenta y ";
						n--;
						pointerToTA++;
						if (miles && *pointerToTA == '1')
							cout << "un ";
						continue;
					}
					if (*pointerToTA == '8' && *(pointerToTA + 1) == '0')
					{
						cout << "ochenta";
						n -= 2;
						
					}
					else if (*pointerToTA == '8')
					{
						cout << "ochenta y ";
						n--;
						pointerToTA++;
						if (miles && *pointerToTA == '1')
							cout << "un ";
						continue;
					}
					if (*pointerToTA == '9' && *(pointerToTA + 1) == '0')
					{
						cout << "noventa";
						n -= 2;
					}
					else if (*pointerToTA == '9')
					{
						cout << "noventa y ";
						n--;
						pointerToTA++;
						if (miles && *pointerToTA == '1')
							cout << "un ";
						continue;
					}
			
					if (miles)
					{
						cout << " mil ";
						miles = false;
						pointerToTA++;
						pointerToTA++;


					}
				break;

		case 3://si n es centena
			if (*pointerToTA == '0')
			{
				n--;
				pointerToTA++;
				continue;
			}
			if (*pointerToTA == '1'&&*(pointerToTA+1) == '0'&&*(pointerToTA+2) =='0')
			{
				cout << "cien";
				n -= 3;
			}
			else if (*pointerToTA == '1')
			{
				cout << "ciento ";
				n--;
				pointerToTA++;
			}
			else if (*pointerToTA == '2')
			{
				cout << "doscientos ";
				n--;
				pointerToTA++;
			}
			else if (*pointerToTA == '3')
			{
				cout << "trescientos ";
				n--;
				pointerToTA++;
			}
			else if (*pointerToTA == '4')
			{
				cout << "cuatrocientos ";
				n--;
				pointerToTA++;
			}
			else if (*pointerToTA == '5')
			{
				cout << "quinientos ";
				n--;
				pointerToTA++;
			}
			else if (*pointerToTA == '6')
			{
				cout << "seiscientos ";
				n--;
				pointerToTA++;
			}
			else if (*pointerToTA == '7')
			{
				cout << "setecientos ";
				n--;
				pointerToTA++;
			}
			else if (*pointerToTA == '8')
			{
				cout << "ochocientos ";
				n--;
				pointerToTA++;
			}
			else if (*pointerToTA == '9')
			{
				cout << "novecientos ";
				n--;
				pointerToTA++;
			}

			break;
		//case 4://si n es unidad

		//	if (*pointerToTA == '1' )
		//	{
		//		cout << "mil ";
		//		n--;
		//		pointerToTA++;
		//		continue;
		//	}
		//	else if (*pointerToTA == '2')
		//	{
		//		cout << "dos mil ";
		//		n--;
		//		pointerToTA++;
		//		continue;
		//	}
		//	else if (*pointerToTA == '3')
		//	{
		//		cout << "tres mil ";
		//		n--;
		//		pointerToTA++;
		//		continue;
		//	}
		//	if (*pointerToTA == '4')
		//	{
		//		cout << "cuatro mil ";
		//		n--;
		//		pointerToTA++;
		//		continue;
		//	}
		//	else if (*pointerToTA == '5')
		//	{
		//		cout << "cinco mil ";
		//		n--;
		//		pointerToTA++;
		//		continue;
		//	}
		//	else if (*pointerToTA == '6')
		//	{
		//		cout << "seis mil ";
		//		n--;
		//		pointerToTA++;
		//		continue;
		//	}
		//	if (*pointerToTA == '7')
		//	{
		//		cout << "siete mil";
		//		n--;
		//		pointerToTA++;
		//		continue;
		//	}
		//	else if (*pointerToTA == '8')
		//	{
		//		cout << "ocho mil ";
		//		n--;
		//		pointerToTA++;
		//		continue;
		//	}
		//	else if (*pointerToTA == '9')
		//	{
		//		cout << "nueve mil ";
		//		n--;
		//		pointerToTA++;
		//		continue;
		//	}
		//	
		//	break;

		
		default:
			n = 0;
			break;
			
			
		}
	}
}