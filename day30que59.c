#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
      {scanf("%d",&arr[i]);
       if(arr[i]%2==0) even++;
       else odd++;}
    printf("Even elements: %d\n",even);
    printf("Odd elements: %d\n",odd);   
        return 0;
}
