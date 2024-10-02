# include <iostream>
using namespace std;
int main(){
    int days;

    cout<<"Enter the days of month :";
    cin>>days;

    if(days==28){
        cout<<"\n\nFEBRUARY";
    }else if(days==29){
        cout<<"february (leap year)";
    }
    else if(days==30){
        cout<<"\n\nAPRIL,JUNE,SEPTEMBER,NOVEMBER";
    }else if(days==31){
        cout<<"\n\nJANUARY,MARCH,MAY,JULY,AUGUST,OCTOBER,DECEMBER";
    }else{
        cout<<"\n\nNo  month has  "<<days<<" days";
    }return 0;
}