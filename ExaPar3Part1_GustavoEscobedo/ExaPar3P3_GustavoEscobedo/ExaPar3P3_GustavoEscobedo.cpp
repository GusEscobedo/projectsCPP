#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Element(int number);

int main()
{
	
	vector<int> Numbers, QuantityPairs;
	int* pointer;
	int choice, n=0;

	for (int i = 0; i < 8; i++)
	{
		cout << "Ingresa un numero: ";
		cin >> choice;
		cout << endl;

		Numbers.push_back(choice);
	}

	for (int i = 0; i < Numbers.size(); i++)
	{
		QuantityPairs[i] = Element(Numbers[i]);
	}

	for (int i = 0; i < QuantityPairs.size(); i++) 
	{
		if (QuantityPairs[n] < QuantityPairs[i])
		{
			n = i;
		}
	}

	pointer = &Numbers[n];

	cout << "El numero con mayor cantidad de digitos pares es: " << Numbers[n] << "Su posicion de memoria es:" << pointer << endl;

}

int Element(int number) 
{

	vector<int> VectorElements;
	int change, counterPairs=0;

	while (number > 0)
	{
		int mod = number % 10;
		VectorElements.push_back(mod);
		number = number / 10;
	}
	
	for (int x = 0; x < VectorElements.size(); x++) 
	{
		int mod = VectorElements[x] % 2;
		if (mod == 0)
		{
			counterPairs++;
		}
	}

	return counterPairs;
}