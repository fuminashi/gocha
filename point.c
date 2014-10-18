#include<stdio.h>
#include<stdlib.h>
 
typedef struct POINT{
  int x, y;
} POINT;


POINT nibai (POINT p){
  p.x *= 2;
  p.y *= 2;
  return p;
}

void main (int argc, char *argv[]){
  POINT p;

//main関数の引数のエラー処理
  if (argc != 3)
    {
      fprintf (stderr, "Usage: point <int> <int>\n");
      exit (EXIT_FAILURE);
    }

  p.x = atoi(argv[1]);
  p.y = atoi(argv[2]);

  p = nibai(p);

  printf("(x,y) = (%d, %d)\n", p.x, p.y);

}
