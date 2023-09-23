#include <stdio.h>


int maxmiun(int arr[], int size)
{
    int h = arr[0]; // Initialize h with the first element of the array
    for (int i = 0; i < size - 1; i++) // Iterate up to the second-to-last element
    {
        if (arr[i + 1] > h)
        {
            h = arr[i + 1];
        }
    }
    return h; // Return the maximum value
}
int minmiun(int arr[], int size)
{
    int p = arr[0]; // Initialize h with the first element of the array
    for (int i = 0; i < size - 1; i++) // Iterate up to the second-to-last element
    {
        if (arr[i + 1] < p)
        {
            p = arr[i + 1];
        }
    }
    return p; // Return the maximum value
}

int main()
{ 
    int arr[8] = {3, 1, 4, 1, 5, 9, 2, 6};
    int h = maxmiun(arr, 8);
    printf("The max value of the array is: %d\n", h);
    int p = minmiun(arr, 8);
    printf("The max value of the array is: %d", p);

    return 0;
}
