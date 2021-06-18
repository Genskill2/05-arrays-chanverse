/* Enter your solutions in this file */
#include <stdio.h>
#include <cs50>

int max(int [], int);

int main(void){
int t=0;
   int n=get_int("enter a integer: ");
   int arr[n]={0};
   for(int i=0;i<n;i++){
   arr[i]=get_int();
   }
   max(arr[],n];
   }
   
 int max(int arr[], int n){  
   for(int j=0;j<n;j++){
   arr[i+1]=t;
   if(arr[i]>arr[i+1){
      arr[i+1]=arr[i];
      arr[i]=t;
      }
    else{
     continue;
     }  
   }
   return arr[n-1];
}
