#include<iostream>

using namespace std;

// template
template<class T>

T max_val(T a, T b){

return (a>b)?a:b;

}

template<class T1, class T2>

T1 add(T1 a, T2 b){

return a+b;

}

/*
template<class T1, class T2>

T1 max_val(T1 a, T2 b){

if(a>b)
    return a;

    else
        return (T2)b;

}
*/


// specialisation of argument and overloading
template<class T3>

T3 max_val(T3 a,T3 b,int c){
    return c*((a>b)?a:b);
}



// speacialisation
string add(string a, string b){

    cout<<"\n Concatination of Strtings"<<endl;

return a+b;
//cout<<"Concatinated string is: "<<a+b<<endl;

}


int main(){


int a,b,c;
float a1,b1,c1;
string s1,s2;


cout<<"\n Enter 2 Integer numbers: ";
cin>>a>>b;
cout<<"\n Max of them is: "<<max_val(a,b);


cout<<"\n Enter 2 Decimal numbers: ";
cin>>a1>>b1;
cout<<"\n Max of them is: "<<max_val(a1,b1);

/*
cout<<"\n Enter 2 different numbers: ";
cin>>a>>b1;
cout<<"\n Max of them is: "<<max_val(a,b1);
*/


cout<<"\n Enter 2 more Integer numbers: ";
cin>>a>>b;
cout<<"\n Max value multiplied by 3 is: "<<max_val(a,b,3);

cout<<"\n Enter 2 more Decimal numbers: ";
cin>>a1>>b1;
cout<<"\n Max of them multiplied by 5 is: "<<max_val(a1,b1,5);


cout<<"\n Enter 2 Integer numbers: ";
cin>>a>>b;
cout<<"\n Sum is: "<<add(a,b);

cout<<"\n Enter 2 Decimal numbers: ";
cin>>a1>>b1;
cout<<"\n Sum is: "<<add(a1,b1);


cout<<"\n Enter 2 numbers: ";
cin>>a>>b1;
cout<<"\n Sum is: "<<add(a,b1);


cout<<"\n Enter 2 Strings: ";
cin>>s1>>s2;
cout<<add(s1,s2)<<endl;



return 0;
}

