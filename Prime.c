#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int flag=0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Not Prime");
    else
        printf("Prime");
    return 0;
}