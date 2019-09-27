#include <stdio.h>

#define NUM_COINS 4

int change;
int coins[NUM_COINS] = {25, 10, 5, 1};

// 33
// 25 + 5 + 1 + 1 + 1 -> 5

int main() {
  scanf("%d", &change);

  int result = 0;

  for(int i = 0; i < NUM_COINS; i++) {
    while(change >= coins[i]) {
      change -= coins[i];
      result++;
    }
  }

  printf("%d", result);

  return 0;
}
