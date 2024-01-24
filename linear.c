#include<stdio.h>
int LinearSearch(int arr[], int size, int element) 
{
   for (int i = 0; i < size; i++) 
   {
     if (arr[i] == element) 
     { return i; }
   }
   return -1; 
}
int main() 
{
   int size, element;
  
   printf("Enter the number of elements in the array: ");
   scanf("%d", &size);
   int arr[size];
  
   printf("Enter the elements of the array:\n");
   for (int i = 0; i < size; i++) 
   {  scanf("%d", &arr[i]); }
  
   printf("Enter the element to search: ");
   scanf("%d", &element);
  
   int searchIndex = LinearSearch(arr, size, element);
  
   if (searchIndex != -1)
   {  printf("Element found at index %d\n", searchIndex); }
   else 
   {  printf("Element not found\n");  }
   return 0; 
}