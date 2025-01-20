#include <stdio.h>

int main() {
  int n, f, pos = 0, flag;
  printf("Enter the number of elements in the array\n");
  scanf("%d", &n);

  // Initializing an array
  int array[n];

  // Input array elements
  printf("Enter %d numbers\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  // Taking input for key element to search in the array
  printf("Enter the number to search\n");
  scanf("%d", &f);

  // Searching for the key element
  // If element found - changing value of 'pos' to 1 & storing position in 'flag'
  for (int i = 0; i < n; i++) {
    if (f == array[i]) {
      pos = 1;
      flag = i;
    }
  }

  // Printing output
  if (pos) {
    printf("%d is present at location %d.\n", f, flag);
  } else {
    printf("%d is not present in array.\n", f);
  }

  return 0;
}