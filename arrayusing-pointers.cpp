#include<iostream>
using namespace std;
int main(){
   int marks[]={23,45,678,990};
    cout<<"---Marks---"<<endl;
    for(int i=0;i<4;i++){
        cout<<"The Marks "<<i<<" are "<<marks[i]<<endl;
    }
    int* p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
}