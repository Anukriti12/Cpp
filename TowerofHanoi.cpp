#include<iostream>
using namespace std;

void toh(char src, char dest, char helper, int i){

if(i==0)
    return;

    toh(src,helper,dest,i-1);

    cout<<"\n Move disk "<<i<<" from "<<src<<" to "<<dest<<" using "<<helper;

    toh(helper,dest,src,i-1);

}


int main(){
int n;
char A='A',B='B',C='C';
cin>>n;
toh(A,C,B,n);

return 0;

}





