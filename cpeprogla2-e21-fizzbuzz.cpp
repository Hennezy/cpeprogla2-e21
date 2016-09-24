#include<iostream>
using namespace std;

main () 
{
	
	for (int x=1; x<=100; x++)
	{	
	if(x % 3 == 0)
	cout<<"Fizz"<< endl;
	
	else if(x % 5 ==0)
	cout<<"Buzz"<< endl;
	
	else if (x % 5 == 0 && x % 3 == 0)
	cout<<"Fizz Buzz"<< endl;
	else 
	cout << x << endl;

	}

	return 0;
}
