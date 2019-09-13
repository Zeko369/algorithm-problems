#include <stdio.h>

#define MAX_SIZE 20

int n, a; // length, looking for
int arr[MAX_SIZE];
int first = -1, last = -1;

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    // if you want to do it here read a before this
  }
  scanf("%d", &a);

  for(int i = 0; i < n; i++) {
    if(arr[i] == a) {
      if(first == -1) {
        first = i;
      } else {
        last = i;
      }
    }
  }

  printf("%d %d\n", first, last);

  return 0;
}