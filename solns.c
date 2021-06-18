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

int min(int arr[], int n){ 
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
   return arr[0];
}

float average(int arr[], int n)
{
    float sum=0;
    float avg=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    return (avg);
}


int mode(int num[], int n)
{
    int x=0,y=0;
  for(int i=0;i<n;++i){
    int z=0;
    for(int j=0;j<n;++j){
      if(num[j]==num[i])
        z++;
    }
    if(z>x){
      x =z;
      y = num[i];
    }
  }
  return(y);
}

int factors(int num, int f[])
{
    int n=num;
     int x=0;
    int prime[]={2,3,5,7,9,11,13,17,19};
    int p=(int)(sizeof(prime)/sizeof(int));
    for( int i=0;n!=1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((n%prime[j])==0)
            {
                f[i]=prime[j];
                n/=prime[j];
                break;

            }
            else
            {
                continue;
            }
        }
      x=i;
    }
    return x;
}
