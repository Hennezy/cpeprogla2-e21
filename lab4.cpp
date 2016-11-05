#include<iostream>
#include<cstring>
using namespace std;
int flag=0, len=0, x=0, chs;
char str1[50], str2[50], str[50], *a, *b, yesno;

void mySTRCPY();
void mySTRCMP();
void mySTRCAT();
int mySTRLEN(char*);
int choose(int chs);
char again(char yesno);
char myREV(char*str);

int choose(int chs) {
	cout<<"Choose a problem # [1-5]\n1: String Copy\n2: String Compare\n3: String Concatenation\n4: String Length\n5: String Reversing\n";
	cin>>chs;
	switch(chs) {
		case 1:
			mySTRCPY();
			again(yesno);
			break;
		case 2:
			mySTRCMP();
			again(yesno);
			break;
		case 3:
			mySTRCAT();
			again(yesno);
			break;
		case 4:
			mySTRLEN(str1);
			again(yesno);
			break;
		case 5:
			myREV(str1);
			again(yesno);
			break;
		default:
			break;
	}
	return chs;
}

void mySTRCPY() {
	cout<<"String Copy\n";
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	a=&str1[i];
    	b=&str2[i];
    	*a=*b;
    	cout<<str1[i];
	}  
}

void mySTRCMP() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	a=&str1[i];
    	b=&str2[i];
    	(int) str1[i];
    	(int) str2[i];
    	if (*a==*b) flag+=0;
		else if (*b<*a) flag+=1;
		else if (*b>*a) flag-=1;
	}
	if (flag==0) cout<<"Equal";
	else if (flag>0) cout<<"Positive";
	else if (flag<0) cout<<"Negative";
}

void mySTRCAT() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    	a=&str1[i];
    	cout<<*a;
	}
	for(int i=0;i<strlen(str2);i++){
    	b=&str2[i];
    	cout<<*b;
	}
}

int mySTRLEN(char*s1){
	cout<<"\nEnter a string:  ";
	cin.ignore();
    gets(str1);
	while(*a!='\0') {
		x++;
		a++;
	}
	cout<<"The length of the string is: "<<x;
	return x;
}

char myREV(char*str) {
	cout<<"\nEnter a string: ";
	cin.ignore();
    gets(str);
    cout<<"The reverse is: ";
	len=strlen(str);
	for(int i=len-1;i>=0;i--) {
		cout<<str[i];
	}
}


char again(char yesno) {
	cout<<"\n\nSolve another problem??? [y/n] ";
	cin>>yesno;
	if (yesno=='y') {
		system("cls");
		choose(chs);
	}
	else if (yesno=='n') {
		cout<<"Exit\n";
	}
	else {
		again(yesno);
	}
	return yesno;
}

main() {
	choose(chs);
}
