#include <stdio.h>
#include <stack>

using namespace std;

#define MAX_SIZE 30

int x, y;
char arr[MAX_SIZE][MAX_SIZE];
bool been[MAX_SIZE][MAX_SIZE];

struct point {
  int x;
  int y;
};

int main() {
  scanf("%d %d", &x, &y);
  
  stack<point> animals;

  int count = 0;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      scanf("%c", &arr[i][j]);
      animals.push({i, j});
    }
  }

  while(!animals.empty()) {
    point animal = animals.top();
    animals.pop();

    if(been[animal.x][animal.y]) {
      continue;
    }

    been[animal.x][animal.x] = true;
  }

  return 0;
}
