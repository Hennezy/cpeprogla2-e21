#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

double problem1(double num){
	cout<<"Enter number to round off: ";
	cin>>num;
	cout<<"Rounded value: "<<round(num)<<"\n\n";

}

void problem2(){
	int uniques[10], num;
	cout<<"Unique numbers: ";
	srand((unsigned)time(NULL)); 
	for(int i=0;i<10;i++){
		num=(rand()%21);
		if(num==uniques[i]) num=(rand()%21);
		else{
			uniques[i] = num;
			cout << uniques[i]<<" ";
		}
	}
}

void call_by_value(){
	int n, result=1;
	cout<<"\n\nEnter a number: ";
	cin>>n;
	for(int f=1;f<n+1;f++) {
		if(n==0) cout<<" Result: 1\n";
		else result=result*f;
	}
	cout<<"The factorial of the number you've entered is : "<<result<<endl;
}

main(){
	double num;
	int result;
	problem1(num);
	problem2();
	call_by_value();
}




