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
		
//		
//			void modifyStudentName(Student&s, string name);
//		
//		void modifyStudentDept(Student&s, string dept);
		
		void display(){
			
			cout<<"\n Name: "<<getName()<<"\n Address: "<<getAdd()
			<<"\n Department: "<<getDept()<<"\n Salary: "<<getSalary();
			
			
		}
		
	
		
		friend void addBonus(Employee&e ,Student&s , long bonus );
		friend void modifySalary(Employee&, Student&, long);
			
		
};





class Student{
	

		
	string name,address,department;
	long stipend;
	
	public:
		friend class Employee;
		
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
		
			friend void addBonus(Employee&e , long bonus );
		friend void modifySalary(Employee&, Student&, long);
		
//		void modifyEmployeeName(Employee&e, string name);
//		
//		void modifyEmployeeDept(Employee&e, string dept);
//		
////		class Employee;
////		friend void addBonus(Employee&e, Student&s ,long bonus );
		
	};
	
	void Student :: addBonus(Employee&e , long bonus ){
		e.salary +=bonus;
	}
	
	void Student :: modifySalary(Employee&, Student&, long amt){
		long added = e.salary - amt;
		s.stipend +=added;
	}
	
	// we need to define the modifying functions outside the classes so as to make them complete their class types and
	// prevent incomplete class types error
	
	
//	void Employee:: modifyStudentName(Student&s, string name){
//			
//			s.name = name;
//			
//		}
//		
//void Employee:: modifyStudentDept(Student&s, string dept){
//			s.department = dept; 
//		}
//		
//	
//		void Student:: modifyEmployeeName(Employee&e, string name){
//			
//			e.name = name;
//			
//		}
//		
//		void Student :: modifyEmployeeDept(Employee&e, string dept){
//			
//			e.department = dept;
//			
//		}
			
		
//
//void addBonus(Employee &e1,Student &s,long bonus){
//			e1.salary+=bonus;
//			s.stipend+=bonus;
//		}
		
		

int main(){
	
	Employee e;
	Student s;
	
	
cout<<"\n\n Enter Employee details:"<<endl;
cout<<"\n Name:";
e.setName();

cout<<"\n Address: ";
e.setAdd();


cout<<"\n Department: ";
e.setDept();

cout<<"\n Salary: ";

e.setSalary();
cin.ignore();


cout<<"\n Modifying Employee's name and department using functions of friend class Student (uni directional) ";
	
	s.modifyEmployeeName(e,"Student");
	s.modifyEmployeeDept(e,"II");
	e.display();
	
	
cout<<"\n\n Enter Student details:"<<endl;
cout<<"\n Name:";
s.setName();

cout<<"\n Address: ";
s.setAdd();


cout<<"\n Department: ";
s.setDept();

cout<<"\n Stipend: ";

s.setStipend();
cin.ignore();

cout<<"\n Modifying Student's name and department using functions of its friend class Employee (bidirectional friend classes)";

e.modifyStudentName(s,"Student");
e.modifyStudentDept(s,"COE");

s.display();


	return 0;
}
		
		
		

