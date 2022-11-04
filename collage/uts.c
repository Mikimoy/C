#include <stdio.h>

int main(){
	int choise;
	
	system("cls");
	printf("\t\t\t <=========== PROGRAM UTS ===========>");
	printf("\n\t\t\t 1). Konversi Suhu");
	printf("\n\t\t\t 2). Waktu Dalam Detik");
	printf("\n\t\t\t 3). Menghitung Nilai Q");
	printf("\n\n\t\t\t Select Choise : ");
	scanf("%i", &choise);
	switch(choise){
		case 1:
			suhu();
			break;
		case 2:
			waktu();
			break;
		case 3:
			menghitung();
			break;
		default:
			printf("Unregonized Choise !!!!");	
			sleep(2);
			main();
	}
}

void suhu(){
	float celc,f,r,k;
	
	system("cls");
	printf("\t\t\t <=========== Konversi Suhu ===========>");
	printf("\n\t\t\t Masukan Suhu Celcius : ");
	scanf("%f", &celc);
	f = (celc*1.8)+32;
	printf("\n\t\t\t Konversi Ke Fahrenheit : %.2f", f);
	r = celc*0.8;
	printf("\n\t\t\t Konversi Ke Rheamur : %.2f", r);
	k = celc+273.15;
	printf("\n\t\t\t Konversi Ke Kelvin : %.2f", k);
	sleep(2);
	main();
}

void waktu(){
	int detik,menit,jam,d,m,j;
	
	system("cls");
	printf("\t\t\t <=========== Konversi Suhu ===========>");
	printf("\n\t\t\t Masukan Detik : ");
	scanf("%d", &detik);
	d = detik % 60;
	printf("\n\t\t\t detik : %d", d);
	jam = detik/3600;
	printf("\n\t\t\t Jam : %d", jam);
	menit = detik % 3600/60;
	printf("\n\t\t\t Menit : %d", menit);
	sleep(3);
	main();
}

void menghitung(){
	int x,y,q,p;
	system("cls");
	
	printf("\t\t\t <=========== Menghitung Nilai Q ===========>");
	printf("\n\t\t\t Masukan Nilai X : ");
	scanf("%i", &x);
	printf("\n\t\t\t Masukan Nilai Y : ");
	scanf("%i", &y);
	p = x+y;
	if(p >= 0){
		q = x*y;
		printf("\n\t\t\t Nilai Q Adalah : %i", q);
		sleep(2);
		main();
	}else{
		q = x/y;
		printf("\n\t\t\t Nilai Q Adalah : %i", q);
		sleep(2);
		main();
	}
}
