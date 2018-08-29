// plain
//constructor
// static
#include<iostream>
using namespace std;

class Student{

string name,rollno,branch;
int ph_no,age;

public:

void setData(){

cout<<"\n Enter Student Name:";
getline(cin,name);

cout<<"\n Enter Student's Branch:";
getline(cin,branch);

cout<<"\n Enter Student's Age:";
cin>>age;
cin.ignore();

cout<<"\n Enter Student's Roll No.:";
getline(cin,rollno);

cout<<"\n Enter Student's Phone Number:";
cin>>ph_no;

}

void getData(){

cout<<"\n Student Details :"<<"\n Name: "<<name<<"\n Branch: "<<branch<<"\n Age: "<<age<<"\n Roll No.: "<<rollno<<"\n Phone Number: "<<ph_no;

}

};


int main(){

Student s1;

s1.setData();

s1.getData();

return 0;



}

