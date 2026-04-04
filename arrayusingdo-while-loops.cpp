#include<iostream>
using namespace std;
int main(){
    int  mathmarks[]={34,56,78,99,12};
    int marks[5];
    marks[0]=33;
    marks[1]=55;
    marks[2]=77;
    marks[3]=213;
    marks[4]=999;
    cout<<"---These are mathmarks---"<<endl;
    int i=0;
    while(i<5){
        cout<<"Math marks "<<i<<" is "<<mathmarks[i]<<endl;
        i++;
    }
    cout<<"---These are Marks---"<<endl;
    i=0;
    do{
        cout<<"Marks "<<i<<" is "<<marks[i]<<endl;
        ++i;
    }
    while(i<5);
    return 0;
}