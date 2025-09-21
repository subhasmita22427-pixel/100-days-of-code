#include<stdio.h>
int main()
{
    int n,i,positive=0,negetive=0,zero=0;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
      {scanf("%d",&arr[i]);
       if(arr[i]>0) 
       {  positive++; }
       else if(arr[i]<0) 
       { negetive++;  }    
       else 
       { zero++; }
        }
            printf("Positive: %d\n",positive);
            printf("Negetive: %d\n",negetive);
            { printf("Zero: %d\n",zero);
      }
        return 0;
}
