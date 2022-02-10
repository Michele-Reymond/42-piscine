#include <stdio.h>
#include <unistd.h>

#define NUMBER_OF_CHAR 3
#define NUMBER_OF_POSSIBILITY_BY_CHAR 3
#define LAST_INDEX 4

void crack(int i, int j, char table[][3]);
void check_brute(int i, int j, char table[][3]);
int increment(int i, int j, char table[][3]);
void afficher(char table[][3]);

int main(void)
{
  char table[3][3] = {
    {'A','A','A'},
    {'A','A','A'},
    {'A','A','A'},
  };

  crack(0, 0, table);
  //printf("%d\n", crack(0,0,table));
  /*char table[6][6] = {
    {0,4,3,2,1,0},
    {4,'A','A','A','A',1},
    {3,'A','A','A','A',2},
    {2,'A','A','A','A',2},
    {1,'A','A','A','A',2},
    {0,1,2,2,2,0},
  };*/

  return (0);
}

void crack(int i, int j, char table[][3])
{
  while (table[NUMBER_OF_CHAR-1][NUMBER_OF_CHAR-1] != 'D')
  {
    afficher(table);
    check_brute(i, j, table);
  }
}

void check_brute(int i, int j, char table[][3])
{
  if (table[i][j] != 'D')
  {
    table[i][j]++;
    check_brute(i,j,table);
  }
  else
  {
    table[i][j] = 'A';
    if (j + 1 < NUMBER_OF_CHAR)
    {
      check_brute(i, j + 1, table);
    }
  }
}

void afficher(char  table[][3])
{
  int i = 0;
  int j = 0;

  while (i < NUMBER_OF_CHAR) {
    while (j < NUMBER_OF_CHAR) {
      write(1, &table[i][j], 1);
      j++;
    }
    write(1, "\n", 1);
    j = 0;
    i++;
  }
  write(1, "\n", 1);
  write(1, "\n", 1);
}
