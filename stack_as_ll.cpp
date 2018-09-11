#include<iostream>
using namespace std;

class node{


public:

    int data;
node* next;


 node(int val){
        data=val;
        next=nullptr;
    }

};

class Stack{

    node* top;

public:

    Stack(){

        top=nullptr;
    }



    void push(int val){

        node* temp = new node(val);

        if(top==nullptr){
            top = temp;
        }




    temp->next = top;

    top = temp;


    }


    void pop(){

        node* temp = top;

        temp=temp->next;

        top=temp;

        delete temp;


    }


    bool isEmpty(){

        return top==nullptr;


    }


    int top(){
    return top->data;
    }


    void display(){

    node* temp =top;

    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    }



};


int main(){

Stack s;

s.push(1);
s.push(2);
s.push(3);
s.pop();

s.display();







}
