#include <stdio.h>

#define NUMBER_OF_CHAR 4
#define LAST_INDEX 5

void crack(int index, char table[][6]);
int check(char table[][6]);
void increment(int index, int max, char table[][6]);

int main(void)
{
  char table[6][6] = {
    {0,4,3,2,1,0},
    {4,'A','A','A','A',1},
    {3,'A','A','A','A',2},
    {2,'A','A','A','A',2},
    {1,'A','A','A','A',2},
    {0,1,2,2,2,0},
  };
  //printf("%s\n", table);
  crack(1, table);

  return (0);
}

void crack(int index, char table[][6])
{
  int i = 1;
  int success = 0;

  while (i <= NUMBER_OF_CHAR)
  {
    printf("%c%c%c%c\n", table[1][1],table[1][2],table[1][3],table[1][4]);
    if (check(table))
    {
      success = 1;
      printf("Success (1: %c, 2: %c, 3: %c, 4: %c)\n", table[1][1], table[1][2], table[1][3], table[1][4]);
      break;
    }
    table[1][index]++;
    if (table[1][index] == 'E')
    {
      table[1][index] = 'A';
      table[1][index + 1]++;
      if(table[1][index + 1] == 'E')
      {
        printf("\n");
        table[1][index + 1] = 'A';
        table[1][index + 2]++;
        if(table[1][index + 2] == 'E')
        {
          table[1][index + 2] = 'A';
          table[1][index + 3]++;
          if(table[1][index + 3] == 'E')
          {
            break;
          }
        }
      }
      i = 0;
    }
    i++;
  }
  if (!success)
    printf("Error");
}

int  check(char table[][6])
{
  int i = 1;
  int bigger = 0;
  int counter = 0;

  while (i <= NUMBER_OF_CHAR) {
    if (table[1][i] > bigger)
    {
      bigger = table[1][i];
      counter++;
    }
    else if(table[1][i] == bigger)
    {
      return (0);
    }
    i++;
  }

  if(counter != table[1][0])
    return (0);

  i = NUMBER_OF_CHAR;
  bigger = 0;
  counter = 0;

  while (i > 0) {
    if (table[1][i] > bigger)
    {
      bigger = table[1][i];
      counter++;
    }
    else if(table[1][i] == bigger)
    {
      return (0);
    }
    i--;
  }

  if (counter != table[1][LAST_INDEX])
    return (0);
  else
    return (1);
}
