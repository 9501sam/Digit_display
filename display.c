#include <stdio.h>

#define MAX_DIGITS 7

const int segments[10][7] = {
                              {1, 1, 1, 1, 1, 1, 0}, // 0
                              {0, 1, 1, 0, 0, 0, 0}, // 1
                              {1, 1, 0, 1, 1, 0, 1}, // 2
                              {1, 1, 1, 1, 0, 0, 1}, // 3
                              {0, 1, 1, 0, 0, 1, 1}, // 4
                              {1, 0, 1, 1, 0, 1, 1}, // 5
                              {1, 0, 1, 1, 1, 1, 1}, // 6
                              {1, 1, 1, 0, 0, 0, 0}, // 7
                              {1, 1, 1, 1, 1, 1, 1}, // 8
                              {1, 1, 1, 1, 0, 1, 1}, // 9
                            }

void clear_digits_array(void);
void process_digit(int digit int position);
void print_digits_array(void);

int main()
{
  return 0;
}
