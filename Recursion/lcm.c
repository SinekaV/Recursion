#include<stdio.h>


int main(){

    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int lcm=1;
    int great=num1>num2?num1:num2;
    for(int i=1;i<=great;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            // printf("The GCD of %d and %d is: %d",num1,num2,i);
            lcm*=i;
        }
    }
    printf("The lcm of %d and %d is: %d\n",num1,num2,lcm);

}