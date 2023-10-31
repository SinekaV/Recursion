#include<stdio.h>

/*  Write a program in C to find the GCD of two numbers using recursion. >
Test Data :
Input 1st number: 10
Input 2nd number: 50
Expected Output :

The GCD of 10 and 50 is: 10 
*/
int gcd(int num1,int num2){
    
}

int main(){

    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int gcd=0;
    int great=num1>num2?num1:num2;
    for(int i=1;i<=great;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            // printf("The GCD of %d and %d is: %d",num1,num2,i);
            gcd=i;
        }
    }
    int lcm=(num1*num2)/gcd;
    printf("The GCD of %d and %d is: %d\n",num1,num2,gcd);
    printf("The lcm of %d and %d is: %d\n",num1,num2,lcm);

}