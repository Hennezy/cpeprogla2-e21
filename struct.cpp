#include <iostream>
using namespace std;

struct Name{
  
       char Name[30];
};

struct Student{
       int id;
       Name name;
       double quiz[3];    
	   double average   ;
};

void newLine();
void grades();


int main(){
    Student stud;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name.Name, 29);
 
    for(int i=1; i<4; i++){
            cout << "Quiz "<< i << ": ";
            cin >> stud.quiz[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record:\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.Name << endl;
  
  void grades(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	student.average = (student.quiz + student.quiz +  student.quiz)/3;

	if (student.average < 75 )
	student.grade = 'F';
	if (student.average >= 75)
	student.grade = 'P';
	}

  
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
