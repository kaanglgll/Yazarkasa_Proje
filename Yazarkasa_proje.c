		#include<stdio.h>
	#include<stdlib.h>

//kasayi gosterir.
	int secim1(int banknotlar[]);

//para cekme.
	int secim2(int banknotlar[], int cekilecekMiktar);

//para yatirma.
	int secim3(int banknotlar[], int yatirilacakMiktar);



			int main(){

int banknotlar[] = {50,  50,  50,  20,  10}; 
//                 0-5  1-10 2-20 3-50 4-100


int secim;

do{
	//MENU 
		printf("\n     MENU\n1 Kasayi Goster\n2 Para Cekme\n3 Para Yatirma\n4 Cikis\nSeciminiz:");
		scanf("%d", &secim);
	
	if     (secim == 1){ secim1(banknotlar);
	}
	
	else if(secim == 2){ 
	int cekilecekMiktar; 
	printf("\nCekilecek miktar: "); 
	scanf("%d", &cekilecekMiktar); 
	secim2(banknotlar,cekilecekMiktar);
	} 
	
	else if(secim == 3){ 
	int yatirilacakMiktar;
	printf("\nYatirilacak miktar: ");
	scanf("%d", &yatirilacakMiktar);
	secim3(banknotlar, yatirilacakMiktar);
	} 
	
	else if(secim == 4){ printf("\niyi gunler :)");   /* programi kapatir. */
	} 
	
	else printf("\ngecersiz islem!\n");
  }
	while(secim != 4);
	
	return 0;
}


			int secim1(int banknotlar[]){
// bakiyeyi gosterir
int kasaPara = banknotlar[0] * 5  +  banknotlar[1] * 10  +  banknotlar[2] * 20
  +  banknotlar[3] * 50  +  banknotlar[4] * 100;
	
	printf("\nMevcut Bakiye: %d\n", kasaPara);
	printf("Kasanin Durumu:\n");
	printf("5 TL banknot miktari: %d\n", banknotlar[0]);
	printf("10 TL banknot miktari: %d\n", banknotlar[1]);
	printf("20 TL banknot miktari: %d\n", banknotlar[2]);
	printf("50 TL banknot miktari: %d\n", banknotlar[3]);
	printf("100 TL banknot miktari: %d\n", banknotlar[4]);
}


//para cekme
			int secim2(int banknotlar[], int cekilecekMiktar){
				
// bakiyeyi gosterir
int kasaPara = banknotlar[0] * 5  +  banknotlar[1] * 10  +  banknotlar[2] * 20
  +  banknotlar[3] * 50  +  banknotlar[4] * 100;

	printf("Mevcut bakiye: %d\n",kasaPara);
	printf("Cekilen miktar: %d\n", cekilecekMiktar);
	
//islemler
while (banknotlar[4]>0 && cekilecekMiktar>=100){

	cekilecekMiktar = cekilecekMiktar - 100;
	banknotlar[4] = banknotlar[4] - 1;
}

while (banknotlar[3]>0 && cekilecekMiktar>=50){
	
	cekilecekMiktar = cekilecekMiktar - 50;
	banknotlar[3] = banknotlar[3] -1;
}

while (banknotlar[2]>0 && cekilecekMiktar>=20){
	
	cekilecekMiktar = cekilecekMiktar - 20;
	banknotlar[2] = banknotlar[2] - 1;
}

while (banknotlar[1]>0 && cekilecekMiktar>=10){
	
	cekilecekMiktar = cekilecekMiktar - 10;
	banknotlar[1] = banknotlar[1] -1;
}

while (banknotlar[0]>0 && cekilecekMiktar>=5){
	
	cekilecekMiktar = cekilecekMiktar - 5;
	banknotlar[0] = banknotlar[0] -1;
}

// bakiyeyi gosterir		
	kasaPara = banknotlar[0] * 5  +  banknotlar[1] * 10  +  banknotlar[2] * 20
  	 +  banknotlar[3] * 50  +  banknotlar[4] * 100;
	
	printf("Yeni bakiye: %d\n", kasaPara);
	
	if (cekilecekMiktar > 5 ){ printf("yetersiz bakiye!");
	}
}


//para yatirma
			int secim3(int banknotlar[], int yatirilacakMiktar){

// bakiyeyi gosterir
int kasaPara = banknotlar[0] * 5  +  banknotlar[1] * 10  +  banknotlar[2] * 20
    +  banknotlar[3] * 50  +  banknotlar[4] * 100;

    printf("Mevcut bakiye: %d\n", kasaPara);
	printf("yatirilan miktar: %d\n", yatirilacakMiktar);
	
//islemler
while (banknotlar[4]>=0 && yatirilacakMiktar>=100){

	yatirilacakMiktar = yatirilacakMiktar - 100;
	banknotlar[4] = banknotlar[4] + 1;
}

while (banknotlar[3]>=0 && yatirilacakMiktar>=50){
	
	yatirilacakMiktar = yatirilacakMiktar - 50;
	banknotlar[3] = banknotlar[3] +1;
}

while (banknotlar[2]>=0 && yatirilacakMiktar>=20){
	
	yatirilacakMiktar = yatirilacakMiktar - 20;
	banknotlar[2] = banknotlar[2] + 1;
}

while (banknotlar[1]>=0 && yatirilacakMiktar>=10){
	
	yatirilacakMiktar = yatirilacakMiktar - 10;
	banknotlar[1] = banknotlar[1] +1;
}

while (banknotlar[0]>=0 && yatirilacakMiktar>=5){
	
	yatirilacakMiktar = yatirilacakMiktar - 5;
	banknotlar[0] = banknotlar[0] +1;
}

// bakiyeyi gosterir
	kasaPara = banknotlar[0] * 5  +  banknotlar[1] * 10  +  banknotlar[2] * 20
    +  banknotlar[3] * 50  +  banknotlar[4] * 100;

    printf("yeni bakiye: %d\n", kasaPara);
 
}
