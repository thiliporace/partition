#include <stdio.h>

//Thiago Leandro Liporace, 42128481, 03G

int partition(int A[6],int p,int r){
  int x = A[r];
  int i = p-1;
  int aux;
  for (int j = p;j<r;j++){
    if (A[j] <= x){
      i = i+1;
      aux = A[i];
      A[i] = A[j];
      A[j] = aux;
    }
  }
  aux = A[i+1];
  A[i+1] = A[r];
  A[r] = aux;
  return i + 1;
}

int main() {
  int p = 0;
  int r = 5;
  int A[6] = {1,3,7,4,8,9};
  partition(A,p,r);
  for (int i = 0;i<6;i++)
    printf("%i",A[i]);
}