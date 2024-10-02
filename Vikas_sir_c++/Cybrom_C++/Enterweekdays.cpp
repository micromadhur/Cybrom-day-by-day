# include<iostream>
using namespace std;
int main(){
    int weekdays;
    cout<<"Enter number 1 to 7 :";
    cin>>weekdays;

    // if(a<0){
    //     cout<<"Not any day";
    // }
     if(weekdays==1){
        cout<<"Monday";
    }else if(weekdays==2){
        cout<<"Tuesday";
    }else if(weekdays==3){
        cout<<"Wednesday";
    }else if(weekdays==4){
        cout<<"Thursday";
    }else if(weekdays==5){
        cout<<"Friday";
    }else if(weekdays==6){
        cout<<"Saturday";
    }else if(weekdays==7){
        cout<<"Sunday";
    }else{
        cout<<"Not register any day";
    }return 0;
}