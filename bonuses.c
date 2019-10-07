#include <stdio.h>

// Input: [1, 2, 3, 2, 3, 5, 1]
// Output: [1, 2, 3, 1, 2, 3, 1]

int n = 7;

int work[10] = {1, 2, 3, 2, 3, 5, 1};
int bonuses[10];

int main() {
  bonuses[0] = work[0] > work[1] ? 2 : 1;
  for(int i = 1; i < n; i++) {
    int tmp = 1;
    if(work[i] > work[i-1]) tmp++;
    if(i <= n-2) {
      if(work[i] > work[i+1]) tmp++;
    }

    bonuses[i] = tmp;
  }

  for(int i = 0; i < n-1; i++) {
    printf("%d ", bonuses[i]);
  }

  printf("%d\n", bonuses[n-1]);

  return 0;
}
