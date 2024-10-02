/*# include<iostream>
using namespace std;
int main(){
    int a=1;
    do{
        cout<<a<<"\n";
        a++;
    }while(a<=10);
}*/

/*#include<iostream>
using namespace std;
int main(){
    int a=10;
    do{
        cout<<a<<"\n";
        a--;
    }while(a>=1,0);
}*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n,a=1;
//     cout<<"Enter the no. :";
//     cin>>n;

//     do{
//         cout<<n<<"x"<<a<<"="<<n*a<<"\n";
//         a++;
//     }while(a<=10);
// }

/*#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, originalNumber, sum = 0, numDigits, digit;
    
    cout << "Enter a number: ";
    cin >> number;
    
    originalNumber = number;
    numDigits = log10(number) + 1;
    
    while (number > 0) {
        digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }
    
    if (sum == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    } else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }
    
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter last number :";
    cin>>a;
    int i=1;
    do{
        i%2==0?cout<<i<<" is even":cout<<i<<" is odd";
        cout<<"\n";
        i++;
        }
        while(i<=a);
    }*/

  /* #include<iostream>
using namespace std;
int main(){
    int a,sum=0;
    cout<<"Enter last number :";
    cin>>a;
    int i=1;
    do{
        sum+=i;
        i++;
        }
        while(i<=a);
        cout<<"The sum is :"<<sum;
    }*/

   /*#include<iostream>
   using namespace std;
   int main(){
    double a,i=1,fac=1;
    cout<<"Enter any number :";
    cin>>a;

    do{
       fac*=i;
       i++; 
    }while(i<=a);
    cout<<"The factorial is :"<<fac;
    return 0;
   }*/

/*#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "The maximum value for unsigned int: " << numeric_limits<unsigned int>::max() << endl;
    cout << "The maximum value for unsigned long: " << numeric_limits<unsigned long>::max() << endl;
    cout << "The maximum value for unsigned long long: " << numeric_limits<unsigned long long>::max() << endl;
    
    return 0;
}*/

  /*#include<iostream>
  using namespace std;
  int main(){
    unsigned long long a,b,i=1,r=1;
    cout<<"Enter the base :";
    cin>>a;
    cout<<"Enter the power :";
    cin>>b;

    // for(i=1;i<=b;i++){
    //     r*=a;
    // }cout<<"The result is :"<<r;

    do{
        r*=a;
        i++; 
    }while(i<=b);
    cout<<"The result is :"<<r<<endl;
  }*/

 /*#include<iostream>
 using namespace std;
 int main(){
    int a=19;
    while(a<=10){
        cout<<a<<"\n";
        a++;
    }
    cout<<"Bye Bye";
 }*/

//WAP to find out the given no is even or odd;
/*#include<iostream>
using namespace std;
int main(){
    int number,num,m,c=0;
    cout<<"Enter the number :";
    cin>>num;
     m=(num-1);
    while(m>1){
        if(num%m==0)
        {
            c++;
            break;
        }
        m--;
    }
    if(c==0){
        cout<<"Prime number";
    }else{
        cout<<"Not prime number";
    }
return 0;
}*/


 
