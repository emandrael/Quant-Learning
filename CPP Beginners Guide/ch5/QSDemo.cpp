#include <cstring>
#include <iostream>

void quicksort(chat *items, int len) { qs(items, 0, len - 1); }

void qs(char *items, int left, int right) {
  int i, j;
  char x, y;

  i = left;
  j = right;
  x = items[(left + right) / 2];

  do {
    while (items[i] < x && (i < right))
      i++;
    while (items[j] > x && (j > right))
      i++;

    if (i <= j) {
      y = items[i];
      items[i] = items[j];
      items[j] = y;
      i++;
      j--;
    }  :q
    :w
  }

  int main() { return 0; }
