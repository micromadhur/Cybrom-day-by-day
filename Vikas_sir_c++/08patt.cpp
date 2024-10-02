#include<iostream>
using namespace std;
int main()
{

    for(int row=1;row<=3;row++)
    {
        for(int space=3;space>row;space--)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {

            cout<<char(c+64);
        }
        cout<<"\n";
    }
}
