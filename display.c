#include <stdio.h>

#define MAX_DIGITS 7
#define DIGITS 10
#define HEIGHT 4
#define WIDTH 4

const int segments[DIGITS][MAX_DIGITS] = {
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
                            };

char digits[HEIGHT][WIDTH*MAX_DIGITS];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main()
{
  int num_digit;
  int digit;
  char digit_ch;

  clear_digits_array();

  num_digit = 0;
  while (num_digit < MAX_DIGITS) {
    digit_ch = getchar();

    if('0' <= digit_ch && digit_ch <= '9') {
      num_digit++;
      digit = digit_ch - '0';
      process_digit(digit, num_digit);
    }
  }

  return 0;
}

void clear_digits_array(void)
{
  for (int i = 0; i < HEIGHT; i++)
    for (int j = 0; j < WIDTH*MAX_DIGITS; j++)
      digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
  for (int seg = 0; seg < )
}

void print_digits_array(void)
{
}
