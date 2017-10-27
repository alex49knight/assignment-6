#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter a and b";
cin>>a>>b;
int*p=&a;
b=a;
cout<<"a="<<a<<" and b ="<<b<<"and pointer p is "<<p;
}