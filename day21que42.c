#include <stdio.h>
int main() 
{ int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i;i<n;i++)
    { if(n%i==0)
        sum=sum+i;
    }
    if (sum==n)
    { printf("The number is perfect");
    }
    else
    { printf("The number is not perfect");
    }
    return 0;
}
