#include<stdio.h>

/* Write a program in C to count the digits of a given number using recursion. >
Test Data :
Input a number : 50
Expected Output :

The number of digits in the number is :  2 
*/

int countdigit(int num){
    static int count=0;
    if(num){
        count++;
        num=num/10;
        countdigit(num);
    }
    else{
        printf("The number of digits in the number is : %d",count);
    } 
}

int main(){

    int num;
    scanf("%d",&num);
    countdigit(num);

}