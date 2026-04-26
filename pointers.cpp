#include<iostream>
using namespace std;
int main(){
    int a = 34;
    int* b = &a;
    int** c = &b;
     cout<<"The value of a is "<<a<<endl;
     cout<<"The address of a is "<<b<<endl;
     cout<<"The value of b is "<<*b<<endl;
     cout<<"The address of b is "<<c<<endl;
     cout<<"The value of c is "<<*c<<endl;
     cout<<"The address of c is "<<&c<<endl;
     cout<<"The vaue of address value_at(value_at(c)) is "<<**c<<endl;
}