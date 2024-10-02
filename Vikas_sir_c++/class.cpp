#include<iostream>
using namespace std;
int main()
{
    int pin,otp;
    cout<<"enter your pin";
    cin>>pin;

    if(pin==2024)
    {
        cout<<"enter ur otp\n";
        cin>>otp;
        if(otp==1007)
        {
            cout<<"Owner";
        }
        else
        {
            cout<<"fraud";
        }
    }
    else{
        cout<<"not macth";
    }

}
