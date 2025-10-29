#include <stdio.h>
void merge_arr(int arr1[], int m, int arr2[], int n, int merged[]) 
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) 
    {  if (arr1[i] < arr2[j]) 
        { merged[k++] = arr1[i++];} 
        else
         { merged[k++] = arr2[j++]; }
    }
    while (i < m) 
    {  merged[k++] = arr1[i++];  }
    while (j < n)
     { merged[k++] = arr2[j++];}
}
int main() 
{
    int m, n;
    printf("Enter size of 1st array: ");
    scanf("%d", &m);
    int arr1[m];        
    printf("Enter elements of : ");
    for (int i = 0; i < m; i++) 
    {  scanf("%d", &arr1[i]);  }        
    printf("Enter size of 2nd array: ");
    scanf("%d", &n);
    int arr2[n];        
    printf("Enter elements of : ");
    for (int i = 0; i < n; i++) 
    {  scanf("%d", &arr2[i]);  }        
    int merged[m + n];      
    merge_arr(arr1, m, arr2, n, merged);        
    printf("Merged array: ");    
    for (int i = 0; i < m + n; i++) 
    {  printf("%d ", merged[i]);  }
    return 0;
}
