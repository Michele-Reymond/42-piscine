#include <stdio.h>

#define NUMBER_OF_CHAR 4
#define LAST_INDEX 5

void crack(int index, char table[]);
int check(char table[]);

int main(void)
{
  char table[6] = {4,'A','A','A','A',1};
  //printf("%s\n", table);
  crack(1, table);

  return (0);
}

void crack(int index, char table[])
{
  int i = 1;
  int success = 0;

  while (i <= NUMBER_OF_CHAR)
  {
    printf("%s\n", table);
    if (check(table))
    {
      success = 1;
      printf("Success (1: %c, 2: %c, 3: %c, 4: %c)\n", table[1], table[2], table[3], table[4]);
      break;
    }
    table[index]++;
    if (table[index] == 'E')
    {
      table[index] = 'A';
      table[index + 1]++;
      if(table[index + 1] == 'E')
      {
        printf("\n");
        table[index + 1] = 'A';
        table[index + 2]++;
        if(table[index + 2] == 'E')
        {
          table[index + 2] = 'A';
          table[index + 3]++;
          if(table[index + 3] == 'E')
          {
            break;
          }
        }
      }
      i = 0;
    }
  }
  if (!success)
    printf("Error");
}

int  check(char table[])
{
  int i = 1;
  int bigger = 0;
  int counter = 0;

  while (i <= NUMBER_OF_CHAR) {
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

  i = NUMBER_OF_CHAR;
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

  if (counter != table[LAST_INDEX])
    return (0);
  else
    return (1);
}
