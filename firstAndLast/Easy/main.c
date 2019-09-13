#include "stdio.h"

#define arr_size 10
int arr[arr_size] = {1, 2, 3, 3, 3, 4, 5, 6, 7, 8};

/*

naci prvi i zadnji 3 u arrayu

*/

void firstAndLast(int n) {
  int first = 0, last = 0;

  for(int i = 0; i < arr_size; i++){
    if(arr[i] == n){
      if(first == 0) {
        printf("First %d\n", i);
        first = 1;
      }

      if(arr[i + 1] != arr[i] || i == arr_size - 1) {
        printf("Last %d\n", i);
        last = 1;
        break;
      }
    }
  }

  if(last + first == 0) {
    printf("Not found");
  }
}

int main() {
  firstAndLast(11);

  return 0;
}