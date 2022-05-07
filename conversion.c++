#include<bits/stdc++.h>
using namespace std;
int x;   // It is a global variable it uses across all funtion.
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
	// [hex] is an inbuilt function which convert decimal number (base 10) to hexadecimal (base 16).

}
void octal(int b)
{
	cout << "The Ocatal number is = " << oct << b << "\n";
	// [oct] is an inbuilt function which convert decimal number (base 10) to octal number(base 8).
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
	// in this function we call every funtion through if else condition.
	// aslo called the the funtion itself when the conditions is not satisfied.
}
int main()
{
	cout << "Enter a number : ";
	cin >> x;
	let();
	
}
