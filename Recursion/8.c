#include<stdio.h>
/* Write a program in C to get the largest element of an array using recursion. >
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 5
element - 1 : 10
element - 2 : 15
element - 3 : 20
element - 4 : 25
Expected Output :

Largest element of an array is: 25  
*/
int large=0;
int findlarge(int size,int* arr){
    if(size!=0){
        if(large<arr[size-1]){
            large=arr[size-1];
            findlarge(--size,arr);
        }   
    }
    return large;
}

int main(){
  int size;
  scanf("%d",&size);
  int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
  printf("%d",findlarge(size,arr));
  
}