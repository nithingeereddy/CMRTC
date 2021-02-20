#include <stdio.h>

#define MAX_SIZE 100

/* Function declaration */
void printArr(int *arr, int size);


int main()
{
    int arr[MAX_SIZE];
    int size;
    int *left = arr;  // Pointer to arr[0]
    int *right;


    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    right = &arr[size - 1];  // Pointer to arr[size - 1]

    /*
     * Input elements in array
     */
    printf("Enter elements in array: ");
    while(left <= right)
    {
        scanf("%d", left++);
    }


    printf("\nArray before reverse: ");
    printArr(arr, size);

    left = arr;


   
    while(left < right) 
    {
       
        *left    ^= *right;
        *right   ^= *left;
        *left    ^= *right;

        left++;
        right--;
    }


    printf("\nArray after reverse: ");
    printArr(arr, size);

}

void printArr(int * arr, int size)
{
    int * arrEnd = (arr + size - 1);

    while(arr <= arrEnd)
    {
        printf("%d, ", *arr);
        arr++;
    }
}
