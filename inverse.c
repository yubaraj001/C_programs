#include<stdio.h>
int main(){
    int n=321,reverse=0;
    printf("before inverse: %d",n);
    while(n!=0){
        reverse=reverse*10+n%10;
        n=n/10;
    }
    printf("\n after reverse: %d",reverse);
    return 0;
}