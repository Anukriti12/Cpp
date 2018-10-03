#include<iostream>

using namespace std;

template<class T1, class T2 = int>

class val{

T1 a;
T2 b;

public:
    val(T1 a, T2 b){
       this->a=a;
       this->b=b;
       }

       val()
       {

           a=b=0;
       }

       val(T1 a){
       this->a=a;
       b=5;
       }

       void set_a(T1 val){
       a=val;
       }

       void set_b(T2 val){
       b=val;
       }

void add(){

cout<<"\n The sum is: "<<a+b<<endl;
}


void mult(){
cout<<"\n Product is: "<<a*b<<endl;
}


};



int main(){

val<int,int> obj;
val<int,float> obj2(12,3.4);
val<int>obj3(16);



obj.set_a(12);
obj.set_b(15);

obj.add();
obj.mult();

obj2.add();
obj2.mult();

obj3.add();
obj3.mult();


return 0;


}
