#include <stdio.h>

// Input: [0, 1, 2, 5, 7, 8, 9, 9, 10, 11, 15]
// Output: ['0->2', '5->5', '7->11', '15->15']

#define MAX_SIZE 16

struct range {
  int begin;
  int end;
};

int arr[MAX_SIZE] = {0, 1, 2, 5, 7, 8, 9, 9, 10, 11, 15};
struct range out[MAX_SIZE];

int main() {
  int j = 0;
  int tmp = arr[0];
  out[j].begin = arr[0];

  for (int i = 1; i < 11; i++) {
    if (arr[i] > tmp + 1) {
      out[j].end = tmp;
      out[++j].begin = arr[i];
    }

    tmp = arr[i];
  }

  out[j].end = tmp;

  for (int i = 0; i < j+1; i++) {
    printf("%d->%d\t", out[i].begin, out[i].end);
  }

  return 0;
}
