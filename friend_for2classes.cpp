#include<iostream>
using namespace std;

	class Student;  //forward declaration of class
class Employee{
	
	string name,address,department;
	long salary;
	
	public:
		setName(){
			getline(cin,name);
			
		}
		
		setAdd(){
			getline(cin,address);
				cin.ignore();
		}
		
		setDept(){
	
				getline(cin,department);
				
		}
		
		setSalary(){
			cin>>salary;
		}
		
		
		string getName(){
			return name;
		}
		string getAdd(){
			return address;
		}
		string getDept(){
			return department;
		}
		long getSalary(){
			return salary;
		}
		
		void display(){
			
			cout<<"\n Name: "<<getName()<<"\n Address: "<<getAdd()
			<<"\n Department: "<<getDept()<<"\n Salary: "<<getSalary();
			
			
		}
		
	
		
		friend void addBonus(Employee&e ,Student&s , long bonus );
			
		
};

class Student{
	
	string name,address,department;
	long stipend;
	
	public:
		setName(){
			getline(cin,name);
			
		}
		
		setAdd(){
			getline(cin,address);
				cin.ignore();
		}
		
		setDept(){
	
				getline(cin,department);
				
		}
		
		setStipend(){
			cin>>stipend;
		}
		
		
		string getName(){
			return name;
		}
		string getAdd(){
			return address;
		}
		string getDept(){
			return department;
		}
		long getStipend(){
			return stipend;
		}
		
		void display(){
			
			cout<<"\n Name: "<<getName()<<"\n Address: "<<getAdd()
			<<"\n Department: "<<getDept()<<"\n Stipend: "<<getStipend();
			
			
		}
		
//		class Employee;
		friend void addBonus(Employee&e, Student&s ,long bonus );
		
	};
			
		

void addBonus(Employee &e1,Student &s,long bonus){
			e1.salary+=bonus;
			s.stipend+=bonus;
		}
		
		

int main(){

int n;
cout<<"\n Enter number of Employees: ";
cin>>n;
cin.ignore();
Employee e[n];

for(int i=0; i<n; i++){

cout<<"\n\n Enter Employee "<<i+1<<" details:"<<endl;
cout<<"\n Name:";
e[i].setName();

cout<<"\n Address: ";
e[i].setAdd();


cout<<"\n Department: ";
e[i].setDept();

cout<<"\n Salary: ";

e[i].setSalary();
cin.ignore();

}

cout<<"\n Enter number of Students: ";
cin>>n;
cin.ignore();
Student s[n];

for(int i=0; i<n; i++){

cout<<"\n\n Enter Student "<<i+1<<" details:"<<endl;
cout<<"\n Name:";
s[i].setName();

cout<<"\n Address: ";
s[i].setAdd();


cout<<"\n Department: ";
s[i].setDept();

cout<<"\n Stipend: ";

s[i].setStipend();
cin.ignore();

}


for(int i =0; i<n; i++){
	cout<<"\n Employee "<<i+1;
	
	e[i].display();
}

for(int i =0; i<n; i++){
	cout<<"\n Student "<<i+1;
	
	s[i].display();
}


cout<<"\n\n Company Gave Rs. 50000 Bonus to all Employees and 5000 Stipend to Student interns !!!"<<endl;

for(int i=0; i<n; i++)
addBonus(e[i],s[i],5000);

cout<<"\n Updated Details of Employees: "<<endl;
for(int i=0; i<n; i++)
e[i].display();

cout<<"\n Updated Details of Students: "<<endl;
for(int i=0; i<n; i++)
s[i].display();

	return 0;
}
		
		
		

