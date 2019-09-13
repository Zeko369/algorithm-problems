#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX_SIZE 100

char arr[MAX_SIZE][MAX_SIZE];
bool been[MAX_SIZE][MAX_SIZE];

struct item {
  int x;
  int y;
  int distance;
};

int arr_size;
int beg_x, beg_y;

void printBeen(int x, int y) {
  for(int i = 0; i < arr_size; i++) {
    for(int j = 0; j < arr_size; j++) {
      if(i == x && j == y) {
        cout << 'X';
      } else {
        cout << been[i][j];
      }
    }
    cout << endl;
  }
}

bool sortFunction(item first, item second) {
  return first.distance < second.distance;
}

int main() {
  cin >> arr_size;
  for(int i = 0; i< arr_size; i++) {
    for(int j = 0; j < arr_size; j++) {
      cin >> arr[i][j];
      if(arr[i][j] == 'X') {
        beg_x = i;
        beg_y = j;
      }
    }
  }

  vector<item> results;
  stack<item> items;

  item beginPoint = {beg_x, beg_y, 0};
  items.push(beginPoint);

  while(!items.empty()) {
    item thisPoint = items.top();
    items.pop();

    // Tmp vars
    int x, y, distance;
    x = thisPoint.x;
    y = thisPoint.y;
    distance = thisPoint.y;

    // been
    if(been[x][y]) {
      continue;
    }
    been[x][y] = true;

    // check if Coin
    if(arr[x][y] == 'C') {
      results.push_back(thisPoint);
    }

    if(x > 0 && !been[x - 1][y]) {
      items.push({x - 1, y, distance + 1});
    }
    if(x < arr_size - 1 && !been[x + 1][y]) {
      items.push({x + 1, y, distance + 1});
    }
    if(y > 0 && !been[x][y - 1]) {
      items.push({x, y - 1, distance + 1});
    }
    if(y < arr_size - 1 && !been[x][y + 1]) {
      items.push({x, y + 1, distance + 1});
    }
  }

  sort(results.begin(), results.end(), sortFunction);

  for(int i = 0; i < results.size(); i++) {
    printf("(%d, %d) -> %d\n", results[i].x, results[i].y, results[i].distance);
  }

  return 0;
}
