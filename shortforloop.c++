#include<bits/stdc++.h>
using namespace std;
#define ank(i,a,b) for(int i = 1;i <= b;i++)
int main()
{
	int x,y;
	cout << "Enter a number : ";
	cin >> x;
	cout << "Enter the number's table upto : ";
	cin >> y;
	ank(i,x,y)
		cout << x <<" * "<< i <<"\t=\t" << i * x << "\n";

}
