#include<iostream>
using namespace std;

class Student{

string name,rollno,branch;
string ph_no;
int age;
static char grade ;


public:

    Student(){
    name ="KUNAL FARMAH";
    branch="IT";
    age=19;
    rollno="DTU/2K17/IT/061";
    ph_no= "9654211634";
    }

    Student(string _name, string _branch){

     name =_name;
     branch=_branch;
    age=19;
    rollno="DTU/2K17/IT/061";
    ph_no="9654211634";
    }

    Student(string _name, string _branch, int _age){
          name =_name;
     branch=_branch;
    age=_age;
    rollno="DTU/2K17/IT/061";
    ph_no="9654211634";
    }

    Student(string _name, string _branch, int _age, string _ph_no ){
         name =_name;
     branch=_branch;
    age=_age;
    rollno="DTU/2K17/IT/061";
    ph_no=_ph_no;
    }

    Student(string _name, string _branch, string _rollno,int _age, string _ph_no){
       name =_name;
     branch=_branch;
    age=_age;
    rollno=_rollno;
    ph_no=_ph_no;
    }



void setName(){

cout<<"\n Enter Student Name:";
getline(cin,name);
}
void setBranch(){

cout<<"\n Enter Student's Branch:";
getline(cin,branch);
}

void setAge(){

cout<<"\n Enter Student's Age:";
cin>>age;
cin.ignore();
}

void setRollNo(){

cout<<"\n Enter Student's Roll No.:";
getline(cin,rollno);
}

void setPhoneNo(){
cout<<"\n Enter Student's Phone Number:";
cin>>ph_no;

}

static void setgrade(char a){
    //cout<<"\n Enter Grade: ";
    grade = a;

    }

string getName (){
    return name;
}

string getBranch(){
return branch;
}

string getRollNo(){
return rollno;
}

int getAge(){
return age;
}

string getPhno(){
return ph_no;
}

static char getgrade(){
return grade;
}

void display();

};

char Student::grade='A';   // we need to define the static member outside the class
void Student::display(){

cout<<"\n Student Details: "<<endl;
cout<<"\n Name: "<<getName();
cout<<"\n Branch: "<<getBranch();

cout<<"\n Age: "<<getAge();

cout<<"\n Roll No.: "<<getRollNo();

cout<<"\n Phone Number: "<<getPhno()<<endl;


}

int main(){

char g;

    Student s1;
    Student s2("Dhruv Jain", "COE");
    Student s3("Harshit Madan", "SE", 23);
    Student s4("Happy Pandey","ME",21,"8765234901");
    Student s5("Ayush Aggarwal", "SOE","DTU/2K17/IT/33", 30, "1234567890");



     cout<<"\n ************* Student 1 *****************";
    s1.display();
     cout<<"\n ************* Student 2 *****************";
    s2.display();
     cout<<"\n ************* Student 3 *****************";
    s3.display();
     cout<<"\n ************* Student 4 *****************";
    s4.display();
     cout<<"\n ************* Student 5 *****************";
    s5.display();


    cout<<"\n Enter "<<s5.getName()<<"'s Grade: ";
    cin>>g;
    Student::setgrade(g);

    s5.display();
    cout<<endl;
    cout<<" "<<s5.getName()<<"'s Grade is: "<<Student::getgrade()<<endl;

    cout<<"\n Enter "<<s1.getName()<<"'s Grade: ";
    cin>>g;
    Student::setgrade(g);

    s1.display();
    cout<<endl;
    cout<<" "<<s1.getName()<<"'s Grade is: "<<Student::getgrade()<<endl;

    return 0;

}

