//linear search
/*#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
   for (int i = 0; i < n; i++) {
      if (arr[i] == x) {
         return i;
      }
   }
   return -1;
}

int main() {
   int arr[] = {3, 5, 2, 1, 8, 6};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 8;
   int index = linearSearch(arr, n, x);
   if (index == -1) {
      printf("Element not found");
   } else {
      printf("Element found at index %d", index);
   }
   return 0;
}
*/

//linear search in a sorted array
#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
   for (int i = 0; i < n; i++) {
      if (arr[i] == x) {
         return i;
      } else if (arr[i] > x) {
         return -1;
      }
   }
   return -1;
}

int main() {
   int arr[] = {1, 2, 3, 4, 5, 6};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 8;
   int index = linearSearch(arr, n, x);
   if (index == -1) {
      printf("Element not found");
   } else {
      printf("Element found at index %d", index);
   }
   return 0;
}
