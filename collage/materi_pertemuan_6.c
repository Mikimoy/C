#include <stdio.h>
#include <string.h>

int main(){
	
	char name[10] ="Ramaa";
	printf("=========================== Materi Pertemuan 6 =========================\n\n");
	printf("\t Hello %s", name);
	printf("\n\t Fighting %s Semangat Kamu Ngodingnya Yahh" , name);
	
	int r;
	float phi,L,K;
	phi = 3.14;
	
	printf("\n\n\n============= Program Menghitung Luas Dan Keliling lingkaran ===================\n");
	printf("\t Silahkan Masukan Jari-Jari Lingkaran : ");
	scanf("%i", &r);
	L = phi*r*r;
	printf("\n\t Hasil Keliling Lingkaran Berdasarkan Jari-Jari Yang Di Input Adalah : %.2f", L);
	K = 2*phi*r;
	printf("\n\t Hasil Luas Lingkaran Berdasarkan Jari-Jari Yang Di Input Adalah : %.2f", K);
	
	
	int p,l,luas,keliling;
	
	printf("\n\n\n============= Program Menghitung Luas Dan Keliling Persegi Panjang ===================\n");
	printf("\t Silahkan Masukan Panjang Persegi Panjang : ");
	scanf("%i", &l);
	luas = p*l;
	printf("\n\t Hasil Keliling Persegi Berdasarkan Panjang Yang Di Input Adalah : %i", L);
	printf("\n\t Silahkan Masukan Luas Persegi Panjang : ");
	scanf("%i", &p);
	keliling = 2*(p+l);
	printf("\n\t Hasil Luas Lingkaran Berdasarkan Jari-Jari Yang Di Input Adalah : %i", K);
	return 0;
	
	/*
	char C = 'A';
	printf("Isi Dari Variabel C Yaitu : %c", C);
	*/
	
	/*
	char C=65;
	printf("Rubah angka menjadi huruf : %c", C);
	*/
	
	/*
	char Kota[10] = "Jakarta";
	printf("Coba Membuat String Kota %s", Kota);
	*/
	
	/*
	char Kota[10];
	strcpy(Kota, "Jakarta");
	printf("Jajal String Kota %s", Kota);
	*/
	
	/*
	int N = 'A';
	printf("Jajal Interger To Char : %c", N);
	*/
	
	/*
	printf("%10.4s", "Jakarta");
	printf("%s", "Bandung");
	*/
}
