#include"stdio.h"
//selection sort
int main() {
  int arr[5] = {55,44,11,99,22};
  int n = sizeof(arr)/sizeof(arr[0]);
  int x;
  for (int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
      if(arr[j]<arr[i])
      {
	swap(&arr[j],&arr[i]);
      //x = arr[i];
      //arr[i] = arr[j];
      //arr[j] = x;  
      }
      
    }
  }
  return 0;
}
//bubble sort
int main() {
  int arr[5] = {44,33,55,22,11};
  int n = sizeof(arr)/sizeof(arr[0]);
  int x;
  for (int i = 0; i<n-1; i++)
  {
    for(int j = 1; j<n; j++)
    {
      if(arr[j]<arr[j-1])
      {
	swap(&arr[j],&arr[j-1])
        //x = arr[j-1];
        //arr[j-1] = arr[j];
        //arr[j] = x;  
      }      
    }
  }
  return 0;
}


//insertion sort


int main() {
  int arr[5] = {44,33,55,22,11};
  int n = sizeof(arr)/sizeof(arr[0]);
  int x,count;
  for (int i = 0; i<n-1; i++)
  {
    count = i;
    while(count>=0)
    {
      if(arr[count+1]<arr[count])
      {
        swap(&arr[count], &arr[count+1]);
        //x = arr[count];
        //arr[count] = arr[count+1];
        //arr[count+1] = x;  
      }
      count--;
    }      
  }
  return 0;
}

void swap(int *a, int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
