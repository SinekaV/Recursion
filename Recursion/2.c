#include<stdio.h>
//to calculate the sum of numbers from 1 to n using recursion.
int val;
int newval;
int sum(int num,int val){
    if(val<=num){
    newval+=val;
    ++val;
    sum(num,val);
    }
    return newval;
}
int main(){
    val=0;
    int num;
    scanf("%d",&num);
    printf("%d",sum(num,val));
}