#include<stdio.h>

// to print the array elements

// Test Data :
// Input the number of elements to be stored in the array :6
// Input 6 elements in the array :
// element - 0 : 2
// element - 1 : 4
// element - 2 : 6
// element - 3 : 8
// element - 4 : 10
// element - 5 : 12
// Expected Output :

//The elements in the array are : 2  4  6  8  10  12 

int printArr(int num,int* arr,int val)
{
    if(val<num){
    printf("%d ",arr[val]);
    printArr(num,arr,++val);
    }

}

int main(){
    int num,val=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
       scanf("%d",&arr[i]); 
    }
   printf("The elements in the array are : ");
   printArr(num,arr,val);
}