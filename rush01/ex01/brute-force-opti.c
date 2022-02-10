#include <stdio.h>
#include <unistd.h>

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
  int j = 1;
  int success = 0;

  while (i <= NUMBER_OF_CHAR)
  {
    while (j <= NUMBER_OF_CHAR)
    {
      //printf("%c%c%c%c\n", table[1][1],table[1][2],table[1][3],table[1][4]);
      if (check(table))
      {
        success = 1;
        printf("Success (1: %c, 2: %c, 3: %c, 4: %c)\n", table[1][1], table[1][2], table[1][3], table[1][4]);
        return;
      }
      table[i][index]++;
      if (table[i][index] == 'E')
      {
        table[i][index] = 'A';
        table[i][index + 1]++;
        if(table[i][index + 1] == 'E')
        {
          table[i][index + 1] = 'A';
          table[i][index + 2]++;
          if(table[i][index + 2] == 'E')
          {
            table[i][index + 2] = 'A';
            table[i][index + 3]++;
            if(table[i][index + 3] == 'E')
            {
              break;
            }
          }
        }
        //i = 0;
      }
      j++;
    }
    j = 0;
    i++;
  }
  if (!success)
    printf("Error");

  write(1,"Fini",4);
  i = 0;
  j = 0;
  while (i < NUMBER_OF_CHAR + 2)
  {
    while (j < NUMBER_OF_CHAR + 2) {
      write(1, &table[i][j], 1);
      j++;
    }
    //write(1, "\n", 1);
    j = 0;
  }
  i++;
}

int  check(char table[][6])
{
  int j = 1;
  int i = 1;
  int bigger = 0;
  int counter = 0;

  while (j <= NUMBER_OF_CHAR)
  {
    i = 1;
    bigger = 0;
    counter = 0;
    while (i <= NUMBER_OF_CHAR) {
      if (table[j][i] > bigger)
      {
        bigger = table[j][i];
        counter++;
      }
      else if(table[j][i] == bigger)
      {
        return (0);
      }
      i++;
    }

    if(counter != table[j][0])
      return (0);

    i = NUMBER_OF_CHAR;
    bigger = 0;
    counter = 0;

    while (i > 0) {
      if (table[j][i] > bigger)
      {
        bigger = table[j][i];
        counter++;
      }
      else if(table[j][i] == bigger)
      {
        return (0);
      }
      i--;
    }

    if (counter != table[j][LAST_INDEX])
      return (0);
    j++;
  }

  return (1);
}
