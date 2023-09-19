#include<stdio.h>
void main(){
    int marks;
    printf("Enter your marks to show your grade: ");
    scanf("%d",&marks);
    if(marks>=90)
    printf("Your grade is: O");
    else if(marks>=80)
    printf("Your grade is: A+");
    else if(marks>=70)
    printf("Your grade is: A");
    else if(marks>=60)
    printf("Your grade is: B+");
    else if(marks>=50)
    printf("Your grade is: B");
    else if(marks>=40)
    printf("Your grade is: C");
    else
    printf("Your grade is: F");

}