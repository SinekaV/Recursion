#include<stdio.h>
//to print the Fibonacci Series
int fibonacci(int a,int b,int c,int num){
    if(num){
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    fibonacci(a,b,c,--num);
    }
    return 0;
    
}

int main(){
    int num;
    scanf("%d",&num);
    int a=0,b=1,c;
    printf("%d %d ",a,b);
    fibonacci(a,b,c,num);
}