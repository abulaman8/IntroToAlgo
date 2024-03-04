#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char input[16];
  printf("Enter a number (enter \"exit\" to exit): ");
  int *arr = (int *)malloc(sizeof(int));
  int i = 0;
  while (scanf("%s", input) == 1 && strcmp(input, "exit") != 0) {
    printf("Enter a number (enter \"exit\" to exit): ");
    int a = atoi(input);
    arr = (int *)realloc(arr, sizeof(int) * (i + 1));
    arr[i] = a;
    i++;
  }
  printf("The array is: ");
  for (int j = 0; j < i; j++) {
    printf("%d ", arr[j]);
  }
  for (int j = 0; j < i; j++) {
    int k = j;
    while (k > 0 && arr[k - 1] > arr[k]) {
      int temp = arr[k];
      arr[k] = arr[k - 1];
      arr[k - 1] = temp;
      k--;
    }
  }
  printf("\nSorted array: ");
  for (int j = 0; j < i; j++) {
    printf("%d ", arr[j]);
  }
}
