#include<iostream>
using namespace std;

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
		
		
		friend void addBonus(Employee& ,long );
			
		
};

 void addBonus(Employee &e,long bonus){
			e.salary+=bonus;
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

for(int i =0; i<n; i++){
	cout<<"\n Employee "<<i+1;
	
	e[i].display();
}


cout<<"\n Company Gave Rs. 50000 Bonus to all Employees !!!"<<endl;

for(int i=0; i<n; i++)
addBonus(e[i],5000);

cout<<"\n Updated Details: ";
for(int i=0; i<n; i++)
e[i].display();

	return 0;
}
