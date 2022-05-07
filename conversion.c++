#include<bits/stdc++.h>
using namespace std;
int x;
void intro()
{
	cout << "Enter [1] for Binary,[2] for Hexadecimal,[3] for Octal." << "\n";

}
void binary(int a)
{
	int b[50],i = 0;
	while (a != 0)
	{
		b[i] = a % 2;
		a /= 2;
		i++;
	}
	cout << "The Binary number is = ";
	for(int j = i - 1;j >= 0;j--)
	{
		cout << b[j];
	}
}
void hexa(int b)
{
	cout << "The Hexadecimal number is = " << hex << b << "\n";

}
void octal(int b)
{
	cout << "The Ocatal number is = " << oct << b << "\n";
}
void let()
{	
	intro();
	int ent;
	cin >> ent ; 
	if(ent == 1)
		binary(x);
	else if(ent == 2)
		hexa(x);
	else if (ent == 3)
		octal(x);
	else
	{
		cout << "Please choose a valid number." << "\n";
		let();
	}
}
int main()
{
	cout << "Enter a number : ";
	cin >> x;
	let();
	
}
