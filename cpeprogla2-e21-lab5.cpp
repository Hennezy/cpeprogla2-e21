#include <iostream>
#include <iomanip>
using namespace std;
int chs, i, j, tPrice;
char ans, p;
float grade;
void problem1();
void problem2();
void problem3();
int choice(int chs);

	int choice(int chs) {
	cout<<"Choose a problem number [1-3]: ";
	cin>>chs;
	switch(chs) {
	case 1:
		problem1();
		break;
	case 2:
		problem2();
		break;
	case 3:
		problem3();
		break;

	default: cout <<"\nWrong choice of problem number!\n";
	break;
	}
	return chs;
	}
	main()
	{
		choice(chs);
	}
void problem1(){

struct Student{
       int studentNumber;
       char name[60];
       double quiz[3]; 
       double sum;
	   double average;      
};

void newLine();

    Student stud;
    cout << "Enter Student Record: \n";
    cout << "ID: ";
    cin >> stud.studentNumber;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name, 99);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.quiz[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record\n";
    cout << "ID: " << stud.studentNumber << endl;
    cout << "Name: " << stud.name << endl;
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": " << stud.quiz[i] << endl;       
            stud.sum+=stud.quiz[i];
            stud.average=stud.sum/3;
    }
    cout<< "Grades: " << stud.average;
    
    if (stud.average>=75)
    {
    	cout << " \nRemarks: Passed";
	}
	else
	{
		cout << " \nRemarks: Failed";
	}

}

void problem2(){
	struct Studentrecord{
	int id;
	char name[30];
	struct Quizzes{
		float quiz;
	};
 Quizzes quizzes[3];
};

void newLine();

	Studentrecord sr[5];
	cout<<"Enter 5 Student<s> Record \n";
	for (i=0; i<5; i++){
		cout<<"\nStudent "<<(i+1)<<endl;
		cout<<"ID: ";
		cin>>sr[i].id;
		cout<<"Name: ";
		cin.getline(sr[i].name, 49);
		cout<<"Enter 3 quizze(s): \n";
		for(j=0;j<3;j++){	
			cin>>sr[i].quizzes[j].quiz;	
		}
}
	cout << setw(5) << "No."
	<< setw(15)<<"Student No"
	<< setw(20)<<"Name"
	<< setw(10)<<"Grade"
	<< setw(10)<<"Remark";
	

	
	for(int i=0; i<5; i++){
		grade=0;
		for(j=0;j<3;j++){
		grade+=sr[i].quizzes[j].quiz;
		}
		cout<<endl;
		cout<<setw(5)<<i+1
		<<setw(15)<<sr[i].id
		<<setw(20)<<sr[i].name;
		cout<<setw(10)<<setprecision(4)<<grade/3<<setw(10);
		if( grade/3>=75 )
			{
				cout<<"Passed";
			}
		else
			{
				cout<<"Failed";
			}
		}
		cout<<endl;
}

void problem3(){ 
	struct Customer{
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int contactNumber;
		int day;
		int month;
		int year;
		int quan;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
	Item item[3];
	}order;
	
	double contNo;
};

void newLine();

	Customer cu[3];
	for (i=0;i<3;i++){
		cout<<"CUSTOMER INFORMATION "<<i+1<<endl;
		cin.ignore();
		cout<<"First Name: ";
		cin.getline(cu[i].name.firstName,29);
		cout<<"Last Name: ";
		cin.getline(cu[i].name.lastName,29);
		cout<<"ORDER DATE: "<<endl;
		cout<<"Day: ";
		cin>>cu[i].order.day;
		cout<<"Month: ";
		cin>>cu[i].order.month;
		cout<<"Year: ";
		cin>>cu[i].order.year;
		cout<<"\nENTER 3 ITEMS: "<<endl;
		for (j=0;j<3;j++){
		    cout<<"ID: ";
		    cin>>cu[i].order.item[j].ID;
		    newLine();
    	    cout<<"Name: ";
    		cin.getline(cu[i].order.item[j].itemName,29);
    		cout<<"Price: ";
    		cin>>cu[i].order.item[j].Price;
    		cout<<"Quantity: ";
    		cin>>cu[i].order.quan;
    		cout<<endl;
		}
		newLine();
}
	j=0;
	cout<<"SUMMARY REPORT"<<endl;
	cout<<" #"<<setw(30)<<"Customer Name"
	<<setw(20)<<"Order Date"
	<<setw(15)<<"Items"
	<<setw(15)<<"Price"
	<<setw(15)<<"Quantity"<<endl;
	
	for (i=0;i<3;i++){
		tPrice=0;
		cout<<" "<<i+1
		<<setw(23)<<cu[i].name.lastName<<","
		<<setw(6)<<cu[i].name.firstName
		<<setw(11)<<cu[i].order.day<<"/"<<cu[i].order.month<<"/"<<cu[i].order.year<<endl;
		
    	for (j=0;j<3;j++){
    		cout<<setw(67)<<cu[i].order.item[j].itemName
			<<setw(15)<<cu[i].order.item[j].Price
			<<setw(15)<<cu[i].order.quan<<endl;
    		tPrice += cu[i].order.item[j].Price;
		}
		tPrice=tPrice*cu[i].order.quan;
		cout<<setw(96)<<"TOTAL PRICE: "<<tPrice<<endl;
	}
}

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}

	

