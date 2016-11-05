#include<iostream>
#include<cmath>
using namespace std;
int HashmatsArmy,OpponentsArmy;
int main()
{
	while(cin>> HashmatsArmy >> OpponentsArmy)
	{
		cout<<abs(HashmatsArmy-OpponentsArmy)<<endl;
	}
	return 0;
}

