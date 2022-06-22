

#include <stdio.h>
#include <string.h>


void print_in_binary(char s)
{
    char b[17];
    b[0] = '\0';

    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((s & z) == z) ? "1" : "0");
    }

    printf("%d in binary is %s\n", s, b);
}


int main () {

  unsigned char c1 = 255;
  unsigned char c2 = c1 & (0x0f);
  unsigned char c3 = c1 & (0xf0);
  printf("%d  %c \n", (short)c1, c1);
  print_in_binary(c1);
  print_in_binary( c2 | c3 );
  print_in_binary(c1 & 0x3c);



  return 0;
}
