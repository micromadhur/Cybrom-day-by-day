/*# include <iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"Enter two number :";
    cin>>a>>b;

    cout<<"Enter the 'a' for add and 'm' for multiply :";
    cin>>c;

    switch (c){
        case 'a':
        case 'A':
        {
            cout<<a+b;
            break;
        }
        case 'M':
        case 'm':
        {
            cout<<a*b;
            break;
        }
        default:
        {
            cout<<"INVALID";
        }
    }
    
}*/

/*# include <iostream>
using namespace std;
int main()
{
  int a,b,c,t;
  cout<<"enter 2 no\n";
  cin>>a>>b;
  cout<<"select 1 for swep the value and 2 for largest number :";
  cin>>c;

  switch (c){
    case 1:{
        t=a;
        a=b;
        b=t;
        cout<<"a="<<a<<" b="<<b;
        break;
    }case 2:{
    if(a>b){
        cout<<a<<" is larger";
    }else{
        cout<<b<<" is larger";
        break;
    }
  }default:{
    cout<<"invalid";
  }
   
} 
}*/

/*# include<iostream>
using namespace std;
int main(){
    int p,r,t;
    char n;
    cout<<"Enter the Principle, Rate and Time :";
    cin>>p>>r>>t;

    cout<<"For simple interest press 's' and for larger number among three press 'L' :";
    cin>>n;

    switch(n){
        case 's':
        case 'S':{
            cout<<"The simple Interest is :"<<(p*r*t)/100;
            break;
        }case 'l':
        case 'L':
        {
            if((p>r) && (p>t)){
                cout<<"First no. "<<p<<" is larger";
            }else if((r>t) && (r>p)){
                cout<<"Second no. "<<r<<" is larger";
            }else{
                cout<<"Third no. "<<t<<" is larger"; 
            }
        }break;
        default:{
            cout<<"Invalid Command";
        }
    }return 0;
}*/

/*# include <iostream>
using namespace std;
int main(){
    char c,v;
    cout<<"Enter any character :";
    cin>>v;

    cout<<"Enter check the character is vovels of consonent press 'V' and for check the gender press 'G' :";
    cin>>c;

    switch(c){
        case 'V':
        case 'v':{
            if(v=='a' || v=='A' || v=='E' || v=='e' || v=='I' || v=='i' || v=='O' || v=='o' || v=='u' || v=='U' ){
                cout<<v<<" is vovels ";
            }else{
                cout<<v<<" is consonent";
            }break;
        }
        case 'g':
        case 'G':
        {
            if(v=='M' || v=='m'){
                cout<<"Male";
            }else if(v=='f' || v=='F'){
                cout<<"Female";
            }else{
                cout<<"Other";
            }break;
        }default:{
            cout<<"Invalid choice";
        }
    }return 0;
}*/

/*# include<iostream>
using namespace std;
int main(){
    int n,c;
    cout<<"Enter any number :";
    cin>>n;
    cout<<"Enter 1 for square, 2 for cube and 3 for no. is even or odd :";
    cin>>c;

    switch(c){
        case 1:{
            cout<<"The square of no. is :"<<n*n;
            break;
        }
        case 2:{
            cout<<"The cube of no. is :"<<n*n*n;
            break;
        }
        case 3:{
            n%2==0?cout<<n<<" is even no.":cout<<n<<" is odd no.";
            break;
        }default:{
            cout<<"Invalid choice";
        }
    }return 0;
}*/




