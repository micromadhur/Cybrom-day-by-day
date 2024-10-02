#include<iostream>
using namespace std;
int main()
{
int P,C,M,Total;
float per;
cout<<"enter marks of maths\n";
cin>>M;
cout<<"enter the marks of physics\n";
 cin>>P;
 cout<<"enter the marks of chemistry\n";
 cin>>C;
 Total=P+C+M;
 per=Total/3;
 if(P>0 || C>0 || M>0)
    {
        cout<<"Invaild marks\n";
    }
    else if(P<35 && C>=35 && M>=35)
    {
        cout<<"supply in phy";
    }
    else if(P>=35 && C<35 && M>=35)
    {
        cout<<"supply in chem";
        }
        else if(P>=35 && C>=35 && M<35)
    {
        cout<<"supply in math";
        }
        else if(per>=70 && per<=100)
        {
            cout<<"First Division";
        }
        else if(per>=60 && per<=70)
            {
                cout<<"Second Division";
            }
        else if(per>=40 && per<=50)
        {
            cout<<"Third Division";
        }
        else if(per<=30)
        {
            cout<<"Failed";
        }
 }
