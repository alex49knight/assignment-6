#include<iostream>
using namespace std;
int main(){
int a=2,b=3;
int*p=&a;
b=a;
cout<<"a="<<a<<" and b ="<<b<<"and pointer p is "<<p;
}