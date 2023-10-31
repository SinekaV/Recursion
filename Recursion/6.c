#include<stdio.h>

/*Write a program in C to find the sum of digits of a number using recursion. >
Test Data :
Input any number to find sum of digits: 25
Expected Output:

The Sum of digits of 25 = 7 
*/

int sod(int num,int temp){
    static int sum=0;
    int dig;
    if(num){
        dig=num%10;
        sum=sum+dig;
        num=num/10;
        sod(num,temp);
    }
    else
    printf("The Sum of digits of %d = %d",temp,sum);
}

int main(){
   int num,temp;
   scanf("%d",&num);
   temp=num;
   sod(num,temp);
}