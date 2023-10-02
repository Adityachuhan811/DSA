// max till ith element 

#include <stdio.h>

int mx1(int arr[], int mx, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            mx = arr[i + 1];
            printf("the mx is that %d", arr[i + 1]);
            printf("\n");
        }
        else{
            mx=arr[i];
            printf("the mx is that %d", arr[i]);
            printf("\n");

        }
    }
   

    return mx;
}
int main()
{
    int arr[] = {0, -9, 1, 3, -4, 5};
    int size = 6;

    int mx = 0;
    mx1(arr, mx, size);

    return 0;
}
