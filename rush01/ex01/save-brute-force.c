#include <stdio.h>

void crack(int index, char table[]);
int check(char table[]);

int main(void)
{
  char table[5] = {2,'A','A','A',1};
  //printf("%s\n", table);
  crack(1, table);

  return (0);
}

void crack(int index, char table[])
{
  int i = 1;

  while (i < 4)
  {
    printf("%s\n", table);
    if (check(table))
    {
      printf("Success (1: %c, 2: %c, 3: %c)\n", table[1], table[2], table[3]);
      break;
    }
    table[index]++;
    if (table[index] == 'D')
    {
      table[index] = 'A';
      table[index + 1]++;
      if(table[index + 1] == 'D')
      {
        printf("\n");
        table[index + 1] = 'A';
        table[index + 2]++;
        if(table[index + 2] == 'D')
        {
          break;
        }
      }
      i = 0;
    }
  }
}

int  check(char table[])
{
  int i = 1;
  int bigger = 0;
  int counter = 0;

  while (i < 4) {
    if (table[i] > bigger)
    {
      bigger = table[i];
      counter++;
    }
    else if(table[i] == bigger)
    {
      return (0);
    }
    i++;
  }

  if(counter != table[0])
    return (0);

  i = 3;
  bigger = 0;
  counter = 0;

  while (i > 0) {
    if (table[i] > bigger)
    {
      bigger = table[i];
      counter++;
    }
    else if(table[i] == bigger)
    {
      return (0);
    }
    i--;
  }

  if (counter != table[4])
    return (0);
  else
    return (1);
}
