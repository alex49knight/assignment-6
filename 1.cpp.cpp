#include<iostream>
using namespace std;
int main(){
int x;
float y;
double z;
char a;
int *ix=&x;
char *ia=&a;
float *iy=&y;
double *iz=&z;
cout<<"enter an interger";
cin>>x;
cout<<"the size of integer is"<<sizeof(x)<<" and size of integer pointer is"<<sizeof(ix)<<endl;
cout<<"enter a double value";
cin>>z;
cout<<"the size of double value is"<<sizeof(z)<<" and size of double pointer is"<<sizeof(iz)<<endl;

cout<<"enter a float value";
cin>>y;
cout<<"the size of float value is"<<sizeof(y)<<" and size of float pointer is"<<sizeof(iy)<<endl;

cout<<"enter a character";
cin>>a;
cout<<"the size of character is"<<sizeof(a)<<" and size of character is"<<sizeof(ia)<<endl;
}