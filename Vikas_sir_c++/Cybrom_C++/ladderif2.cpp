# include <iostream>
using namespace std;
int main(){
    int p,c,m;
    cout<<"Enter your physics marks :";
    cin>>p;
    cout<<"Enter your chemistry marks :";
    cin>>c;
    cout<<"Enter your mathmarks :";
    cin>>m;

    int total,per;
    total = p+c+m;
    per=total/3;

    if(p<0||c<0||m<0){
        cout<<"\nInvalid marks";
    }else if(p<35 &&c>=35 && m>=35){
        cout<<"\nfail in physics";
    }else if(p>=35 &&c<35 && m>=35){
        cout<<"\nfail in chemistry";
}else if(p>=35 &&c>=35 && m<35){
        cout<<"\nfail in math";
}else if(p<35 && c<35 && m>34){
    cout<<"Fail";
}else if(p<35 && c>34 && m<35){
    cout<<"Fail";
}else if(p>34 && c<35 && m<35){
    cout<<"Fail";
}else if(per>=60 && per <=100){
    cout<<"\nFirst division";
    cout<<"\nYour persantage is :"<<per;
}else if(per<60 && per>=50){
    cout<<"\nSecond division";
    cout<<"\nYour persantage is :"<<per;
}else if(per<50 && per>35){
    cout<<"Third division";
    cout<<"\nYour persantage is :"<<per;

}else{
    cout<<"Fail";
}return 0;
}
