#include<iostream>
using namespace std;
int main(){
int s;
cout<<"how many letters do your name have?";
cin>>s;
char name[s];
cout<<"enter your name";
cin>>name;
cout<<"index method"<<endl;
for(int i=0;i<s;i++){
cout<<name[i]<<" ";
}
cout<<"pointer method"<<endl;
char *p;
for(int j=0;j<s;j++){
p=&name[j];
cout<<*p<<" ";
}
}