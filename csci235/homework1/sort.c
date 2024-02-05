#include <stdio.h>

void swap(int array[], int index1, int index2) {
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}

int getSmallestIndex(int array[], int startIndex, int len) {
    int indexOfSmallest = startIndex;
    for (int i = startIndex; i < len; i++) {
	if (array[i] < array[indexOfSmallest]) {
	    indexOfSmallest = i;
	}
    }

    return indexOfSmallest;
}

int selection_sort(int array[], int len) {
    for (int i = 0; i < len; i++) {
	int smallestIndex = getSmallestIndex(array,  i, len);
	swap(array, i, smallestIndex);
    }  
}

void print_array(int array[], int len) {
    for(int i = 0; i < len; i++) {
	printf("%d, ", array[i]);
    }
    printf("\n");
}

int main() {
    // Making arrays
    int array1[] = { 1, 98, 2, 0, 67, 3, 88 };
    int array2[] = { 21, 2, 51, 17, 94, 1, 92};
    int array3[] = { 23, 133, 28, 523, 57};
    int array4[] = { 22, 49, 12, 90, 67, 123, 5, 69, 46, 83};

    // Really lengthy section for printing and sorting arrays
    printf("Array 1 unsorted: ");
    print_array(array1, 7);
    selection_sort(array1, 7);
    printf("Array 1 sorted: ");
    print_array(array1, 7);

    printf("Array 2 unsorted: ");
    print_array(array2, 7);
    selection_sort(array2, 7);
    printf("Array 2 sorted: ");
    print_array(array2, 7);

    printf("Array 3 unsorted: ");
    print_array(array3, 5);
    selection_sort(array3, 5);
    printf("Array 3 sorted: ");
    print_array(array3, 5);

    printf("Array 4 unsorted: ");
    print_array(array4, 10);
    selection_sort(array4, 10);
    printf("Array 4 sorted: ");
    print_array(array4, 10);
}
