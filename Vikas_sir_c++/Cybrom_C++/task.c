#include<stdio.h>
int main(){
    int num;
    printf("Enter the first number :");
    scanf("%d",&num);

    condition;
    if(num==1234){
        printf("Welcome\n");
    }
    else{
    for(int i=1;i<3;i++){
        if(i==1){
            printf("try again :");
            scanf("%d",&num);
            goto condition 
        }else if(i==2){
            printf("try again :");
            scanf("%d",&num);
        }else{
            printf("You are blocked");
        }
        }
    }
    }
