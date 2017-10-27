#include<iostream>
using namespace std;
int main(){
int array[10];
for(int i=0;i<10;i++){
cout<< i+1<<"th element is";
cin>>array[i];
}
cout<<"normal index method";
for(int j=0;j<10;j++){
cout<<array[j]<<endl;
}
cout<<"pointer method";
int *p;
   for(int k=0 ; k<10 ; k++)
   {
       p = &array[k];
       cout << *p << "\n";
   }
}