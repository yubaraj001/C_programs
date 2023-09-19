#include<stdio.h>
void main(){
    int a;
    printf("Enter the no. to check whether its a even no. or not: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is an even no.",a);
    }
    else{
        printf("%d is a odd no.",a);
    }
}