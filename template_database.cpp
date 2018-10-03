#include<iostrea>
using namespace std;


 vector<string> students;
template <class T1, class T2>
vector<T2> last;

void details(T1 univ, T1 yr, T1 branch, T2 rno){

    students.push(univ+"/"+yr+"/"+branch+"/"+rno);
last.push(rno);

}


template<class T1, class T2, class T3>
struct table{
 T1 rno;
 T2 sub,marks;
 t3 grade;
};

template<class T1, class T2, class T3>

void details(T1 rno, T2 sub, T2 marks, T3 grade){

    int rollcnt=0,subcnt=0;
    static T1 oldrno =rno;
    static T2 oldsub =sub;

    if(oldrno!=rno) rollcnt++;
    else oldrno=rno;

    if(oldsub!=sub) subcnt++;
    else oldsub=sub;

   table obj;
   obj.rno =rno;
   obj.sub=sub;
   obj.marks=marks;
   obj.grade=grade;
    vector<table> details_table;
    //details_table.push(rno+" "+sub+ " " + marks+" "+grade);
    details_table.push(obj);

}


void match(){

    // matches the last digit of the roll number with subject code makes the data and gives the data long with complete rollnumber
    // also returns the distinct count of students and roll numbers



}

