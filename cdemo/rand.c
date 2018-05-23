#include <stdio.h>
#include <time.h>
#include <stdlib.h>


// only do this once
void setSeed()
{
  srand((unsigned int)time(NULL));
}

// return a random number between 0 and range
int getRand(int range)
{
  return rand() % range;
}


int main()
{
  setSeed();
  for (int i = 0; i < 20; i++)
    printf("%d\n", getRand(10));
  return 0;
}
