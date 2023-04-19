#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

void ordena(int *v, int n)
{
   int elem, i, j;
 for(i = 1; i < n; i++) {
  elem = v[i];

  for(j = i-1; j >= 0 && v[j] > elem; j--){
   v[j + 1] = v[j];
  }

  v[ j + 1] = elem;
 }
}

