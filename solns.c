/* Enter your solutions in this file */
#include <stdio.h>

int max(int num[], int n)
{
    int max=num[0]; 
    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}
int min(int num[], int n)
{
    int min =num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
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
     int i=0;
    int prime[]={2,3,5,7,9,11,13,17,19};
    int p=(int)(sizeof(prime)/sizeof(int));
    for( ;n!=1;i++)
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
     
    }
    return i;
}
