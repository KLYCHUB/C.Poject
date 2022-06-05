#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pi 3.14

struct adres {
	char mahalle[30];
	char sokak[30];
	char cadde[80];
};

struct Ogrenci {
	int yas;
	int numara;
	int sinif;
	char kalinanders[20];

	struct adres adres1;

};

int donduren(int sayi1) {
	
	int toplam=1, i = 1;

	for (; i <= sayi1; i++) {
		toplam *= i;
	}

	return toplam;
}

void dondurmeyen() {
	int toplam,x=9,y=8;
	toplam = x + y;
	printf("Degeriniz: %d", toplam);
}

int main() {

	//#define

	/*
	float r, cevre;

	printf("Yari cap giriniz: ");
	scanf_s("%f", &r);

	cevre = pi * r * r;

	printf("Dairenizin alani: %f", cevre);
	*/

	//struct

    /*
	struct Ogrenci ogrenci1;

	ogrenci1.yas = 21;
	ogrenci1.numara = 212701035;
	ogrenci1.sinif = 1;
	strcpy(ogrenci1.kalinanders, "ingilizce");

	strcpy(ogrenci1.adres1.mahalle,"Kasustu");
	strcpy(ogrenci1.adres1.sokak, "okullar3");
	strcpy(ogrenci1.adres1.cadde, "devlet karayolu");

	printf("%d\n%d\n%d\n%s\n%s\n%s\n%s", ogrenci1.yas,ogrenci1.numara,ogrenci1.sinif,ogrenci1.kalinanders,ogrenci1.adres1.mahalle,ogrenci1.adres1.sokak,ogrenci1.adres1.cadde);
	*/

	//fonksiyonlar

	/*
	int i;
	printf("Lutfen bir sayi girirniz: ");
	scanf_s("%d", &i);
	printf("Girdiginiz sayinin faktroyeli-> %d", donduren(i));

	dondurmeyen();
	*/

	//pointer

	/*
	int myAge = 43;  // An int variable
	int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

	// Output the value of myAge (43)
	printf("%d\n", myAge);

	// Output the memory address of myAge (0x7ffe5367e044)
	printf("%p\n", &myAge);

	// Output the memory address of myAge with the pointer (0x7ffe5367e044)
	printf("%p\n", ptr);
	*/

	//Dosya işlemleri
	//Dosyaya Yazdırma, oluşturma, kapatma -> w, fputc(dizi,filep) sadece karakter yazar, fclose(filep), fopen("ad_soyad.text", "w")

	/*
	char tamad[20] = "Eren KALAYCI";
	int uzunluk = strlen(tamad);
	int i;

	FILE* filep = fopen("ad_soyad.text", "w");

	if (filep == NULL) {
		printf("Dosya olusturulmadı");
	}
	else {
		for (i = 0; i < uzunluk; i++) {
			fputc(tamad[i], filep);
			printf("%c Yazdirildi\n", tamad[i]);
		}

		printf("Yazdirma islemi basarili");
		fclose(filep);
	}
	*/
    
	//fputs(yaz, filep), fgets(yaz, 256, stdin)

	/*
	FILE* filep;
	filep = fopen("text.text", "a");

	char yaz[256];

	if (filep == NULL) {
		printf("Dosya Olusturulmadi");
	}
	else {
		printf("Lutfen bir metin yaziniz: ");
		fgets(yaz, 256, stdin);
		fputs(yaz, filep);
		printf("Dosya yazdirildi...");
		fclose(filep);
	}
	*/

	//Dinamik bellek işlemleri
	//ilk dizimizi belirliyoruz -> int a[40];
	//sonra pointeri değişkene atıyoruz -> int *ptr;
	//sonra mallocla işlemimizi yapıyoruz -> (int*)malloc(40*sizeof(int)); -> int 4 bayt 40 ile de çarpılınca hafızada 160 baytlık yer açılıyor
	//program bitince aldığımız hafızayı geri vermek zorundayız -> free(ptr);
	//malloc içine girdiğimiz değer kadar dizide yer ayırıyor
	//ramde yerleştirme rasgele adreslere oluyor calloc da ise sırsı ile
	// bunda aldığı ddeğerleri hepsinin içini ilk sıfırla dolduruyo yani derliyor
	// yani biz atama yapmazsak sıfıra attı ama bu daha yavaş
	// kullanımı ptr = (int*)malloc(boyut, sizeof(int)); -> burda virgülle ayırırız ve bunlar çarpılır
	// realloc() -> aldığımız belleği değiştimek için
	// int *a = malloc(20*sizeof(int));
	// a = realloc(a, 15*sizeof(int)); -> ilk paremetre değiştirmek istediğimiz bellek alanının adresi, ikincisi yeni boutunu belirliyourz
	// realloc bize pointer döndürür
	// realloc ilk durumda a 80 baytlık yer gösteriyordu ikincci durumda 60 baytlık adres gösteriyor  

	/*
	int boyut;
	printf("Dizi buyuklugunu giriniz -> ");
	scanf_s("%d", &boyut);

	int* ptr;
	ptr = (int*)malloc(boyut * sizeof(int));

	int s;
	for (s = 0; s < boyut; s++) {
		printf("%d. notu giriniz -> ", s + 1);
		scanf_s("%d", &ptr[s]);
	}

	for (s = 0; s < boyut; s++) {
		printf("ptr[%d] = %d\n", s, ptr[s]);
	}

	free(ptr); //Hafızada açtığımız belleği geri verdik - mallocda aldığımız
	*/

	
	return 0;
}
