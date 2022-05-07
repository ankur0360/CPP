#include<bits/stdc++.h>
using namespace std;
// define allows the definition of macros within your source code. It means that it makes the expressions in short form and use it across every functions.
// here in ank(i,a,b) , [i] indicates a itarable variable , [a] is the value of the [i] and [b] is the limit of the [i].
#define ank(i,a,b) for(int i = 1;i <= b;i++)   
int main()
{
	int x,y;
	cout << "Enter a number : ";
	cin >> x;
	cout << "Enter the number's table upto : ";
	cin >> y;
	ank(i,x,y) // now it works like a for loop
		cout << x <<" * "<< i <<"\t=\t" << i * x << "\n";
	// this prints a table of a number.

}
