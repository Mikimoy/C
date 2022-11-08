#include <stdio.h>

int main(){
  int a,b,c;

  printf("\t\t\t Masukan Nilai a :");
  scanf("%i", &a);
  printf("\t\t\t Masukan Nilai b :");
  scanf("%i", &b);
  printf("\t\t\t Masukan Nilai c :");
  scanf("%i", &c);
  
  if (a>b && a>c){
    printf("Nilai Terbesar : %i",a);
  }else if (b>c && b>a){
    printf("Nilai Terbesar : %i",b);
  }else{
    printf("Nilai Terbesar : %i",c);
  }
}
