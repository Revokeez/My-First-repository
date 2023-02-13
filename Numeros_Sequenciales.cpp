// Numeros_Sequenciales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int temp = 0, temp2 = 1, total;
	for (int i = 0; i < 30; i++)
	{
		total = temp + temp2;
		cout << temp << " + " << temp2 << " = "<< total<<endl;
		temp = temp2;
		temp2 = total;
	}
}