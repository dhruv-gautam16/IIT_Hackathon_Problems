#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,k,i,j,sum;
    int flag = 0;
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for ( i = 0; i < n; i++)
    {
        sum=arr[i];
        for ( j = i+1; j <= n; j++)
        {
            if (sum==k)
            {
                flag=1;
            }
            if (sum>k||j==n)
            {
                break;
            }
            sum+=arr[j];
            
        }
        
    }
    if (flag>0)
    {
        printf("1");
    }
    else{
        printf("0");
    }
    
    
}
