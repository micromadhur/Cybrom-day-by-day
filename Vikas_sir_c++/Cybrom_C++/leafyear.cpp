#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year :";
    cin>>year;

    if((year%4==0 && year%100!=0) || year%400==0){
        cout<<year<<" is leaf year";
    }else{
        cout<<year<<" is not leaf year";
    }return 0;
}