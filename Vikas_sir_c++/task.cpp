#include<iostream>
using namespace std;
int main()
{
    int age;
    float percentage;
    cout<<"Enter your age";
    cin>>age;
    if(age>=18 && age<=100)
        {
        cout<<"Enter your percentage";
        cin>>percentage;
        if(percentage>=60 &&percentage<100)
            cout<<"Qualified";
            else{
                    cout<<"Disqualified";
            }
    }
    else{
        cout<<"Not Elligible";
    }
}
