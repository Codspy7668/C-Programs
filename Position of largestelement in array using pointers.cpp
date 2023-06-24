#include <stdio.h>
int find_largest_element_pos(int *arr, int size)
 {
    int i, max_index = 0;
    for (i = 1; i < size; i++)
	 {
        if (*(arr + i) > *(arr + max_index)) 
		{
            max_index = i;
        }
    }
    return max_index;
}

int main() 
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++) 
	{
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max_index = find_largest_element_pos(arr, size);
    printf("The position of largest element is: %d\n", max_index);
    return 0;
}

