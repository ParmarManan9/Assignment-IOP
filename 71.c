// Write a program in C to find the pivot element of a sorted and rotated array using binary search. Pivot element is the only element in input array which is smaller than its previous element. A pivot element divided a sorted rotated array into two monotonically increasing array.
#include <stdio.h>

int findPivot(int arr[], int low, int high) {
    if (high < low) 
        return -1;
    if (high == low)
        return low;

    int mid = (low + high) / 2;

    // Check if mid is pivot
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid + 1;

    // Check if mid-1 is pivot
    if (mid > low && arr[mid] < arr[mid - 1])
        return mid;

    // Decide which half to search in
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
    else
        return findPivot(arr, mid + 1, high);
}

int main() {
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = findPivot(arr, 0, n - 1);

    if (pivotIndex == -1) {
        printf("No pivot found, the array might not be rotated.\n");
    } else {
        printf("The pivot element is %d at index %d.\n", arr[pivotIndex], pivotIndex);
    }

    return 0;
}
