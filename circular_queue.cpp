#include<iostream>
using namespace std;

const int maxval=5;

class cqueue{

 int _front,rear;

 int a[maxval];


 public:

     cqueue(){

     _front=-1;
     rear=-1;

     }


     void push(int val){

     if(_front==rear && rear==-1){
        _front=0;
        rear=0;
     }

     else if(rear==maxval-1 && _front==0){
        cout<<"Queue is full!!"<<endl;
        return;
     }

     else if(rear==maxval-1 && _front!=0) {
            cout<<"Circulating now!!"<<endl;
            rear=0;
     }

     else
        ++rear;


     a[rear]=val;

     }

     void pop(){

     if(_front==-1){
        cout<<"Queue is empty!!!"<<endl;
        return;
     }

     else if(_front==maxval-1)
        _front=0;

     else
        _front=_front+1;

     }



     int rearval(){

     return a[rear];

     }

     int frontval(){
     return a[_front];

     }


     bool _empty(){

     return(_front==-1);

     }


};


int main(){


cqueue q;

q.push(12);
cout<<q.rearval()<<endl;

q.push(13);
cout<<q.rearval()<<endl;

q.push(14);
cout<<q.rearval()<<endl;

q.push(15);
cout<<q.rearval()<<endl;

q.push(19);
cout<<q.rearval()<<endl;


// now queue will be full
q.push(15);
cout<<q.rearval()<<endl;



q.pop();
cout<<q.frontval()<<endl;

//now queue will circulate
q.push(16);
cout<<q.rearval()<<endl;

q.push(17);
cout<<q.rearval()<<endl;

q.pop();
cout<<q.frontval()<<endl;


cout<<"\nElement at end is: ";
cout<<q.rearval()<<endl;

cout<<"\nElement at front is: ";
cout<<q.frontval()<<endl;


}
