/* Enter your solutions in this file */
#include <stdio.h>

 int max(int arr[], int n){ 
  int t=0;
   for(int i=0;i<n;i++){
   arr[i+1]=t;
   if(arr[i]>arr[i+1]){
      arr[i+1]=arr[i];
      arr[i]=t;
      }
    else{
     continue;
     }  
   }
   return arr[n-1];
}
