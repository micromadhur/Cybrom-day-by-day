/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    for(int i;i<=10;i++){
        cout<<n<<"x"<<i<<"="<<n*i<<"\n";
    }
}*/

// WAP to find out the given number perfect number or not;
/*#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"Enter the number :";
    cin>>n;

    for(int i=1;i<n;i++){
        if(n%i==0){
            a+=i;
        }
    }if(n==a)
    {
        cout<<a<<" is perfect number";
        }else{
        cout<<a<<" is not perfect number";
    }
}*/
// WAP to count the no of digits to make a giving number
/*#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"Enter the number :";
    cin>>n;
    while(n>0){
        c++;
        n=n/10;  
    }cout<<"Total "<<c<<" digit in number";
}*/

//WAP to print the ascii value
/*#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=255;i++){
        cout<<i<<"="<<char(i)<<"\t";
    }return 0;
}*/

// WAP to print Welcome without using semicolon
/*#include<iostream>
using namespace std;
int main(){
    if(cout<<"Welcome"){

    }
}*/

// WAP to convert capital character into small character
#include <iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"Enter any character :";
    cin>>c; 

    if(65>=c && c<=90){
        cout<<c<<"="<<char(c+32);
    }else if(c>=90 && c<=122){
        cout<<c<<"="<<char(c-32);
    }else{
        cout<<"Invalid character";
    }
    return 0;
}