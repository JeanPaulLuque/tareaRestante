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
}