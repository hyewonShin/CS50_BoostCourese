#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string animal = get_string("좋아하는 동물을 알려주세요\n");
  printf("제가 좋아하는 동물은%s\n", animal);
}


