#include <stdio.h>


int main (){
  int harga,fotocopy,total;
  char choise;
  
  system("cls");
  printf("\t\t\t Are You a Member (Y/N) : ");
  scanf("%c", &choise);
  if (choise == 'Y' || choise == 'y'){
    printf("\n\t\t\t Masukan Jumlah Fotocopy : ");
    scanf("%i", &fotocopy);
    harga = 75;
    total = harga*fotocopy;
    printf("\n\t\t\t Total Harga = %i", total);
    sleep(3);
    main();
  }else if(choise == 'N' || choise == 'n'){
    printf("\n\t\t\t Masukan Jumlah Fotocopy : ");
    scanf("%i", &fotocopy);
    if (fotocopy < 100){
      harga = 100;
      total = harga*fotocopy;
      printf("\n\t\t\t Total Harga = %i", total);
      sleep(3);
      main();
    }else{
      harga = 85;
      total = harga*fotocopy;
      printf("\n\t\t\t Total Harga = %i", total);
      sleep(3);
      main();
    }
  }else{
    printf("\n\t\t\t Unregonzed Choisee !!!");
    sleep(3);
    main();
  }
}
