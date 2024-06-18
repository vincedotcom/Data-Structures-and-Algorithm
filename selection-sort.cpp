#include <iostream>
using namespace std;

void selection_sort(int a[], int length);

int main()
{
    int a[] = {6, 5, 2, 3, 1, 4};
    int length = 6;
    
    return 0;
}

void selection_sort(int a[], int length)
{
     for (int i = 0; i < (lenght - 1); i++)
     {
         int min_pos = i;
         for (int j = i + 1; j < length; j++)
         {
             if (a[j] < a[min_pos])
             {
                      min_pos = j;
                         
             }
                      
         
         }   
     }
}
     
 
