#include <stdio.h>

#define MAX_DIGITS 7
#define DIGITS 10
#define HEIGHT 4
#define WIDTH 4
#define SEG 7

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
      digit = digit_ch - '0';
      process_digit(digit, num_digit);
      num_digit++;
    }
  }

  print_digits_array();

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
  int abs_position = WIDTH*position;
  for (int seg = 0; seg < SEG; seg++)
    if(segments[digit][seg] == 1)
      switch (seg) {
        case 0: digits[0][abs_position+1] = '_'; break;
        case 1: digits[1][abs_position+2] = '|'; break;
        case 2: digits[2][abs_position+2] = '|'; break;
        case 3: digits[2][abs_position+1] = '_'; break;
        case 4: digits[2][abs_position+0] = '|'; break;
        case 5: digits[1][abs_position+0] = '|'; break;
        case 6: digits[1][abs_position+1] = '_'; break;
      }
}

void print_digits_array(void)
{
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH*MAX_DIGITS; j++)
      printf("%c", digits[i][j]);
    printf("\n");
  }
}
