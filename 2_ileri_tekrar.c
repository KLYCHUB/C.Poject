goto ---> ilk dönmek istediğimiz yere etiket veririz sonra hangi işlemden sonra etiket verdiğimiz yere gideceğini belirleriz...
2. satırda basadon: etileti var 10 satırda döngüden sonra ya da yanlış düzelttirmek (mesela elseye) goto basadon; yazarız ve olur... 

Continue ---> Kendi kapsamının bi üst sekmesine, altındaki işlemleri yapmadan geri atar
Kullandığımız döndüğe bie elamanı vb. dahil etmek istemiyoruz diyelim o zaman örnek verirsek o döngün içine bi for açıp o şartı sağlayıp içine Continue koyup işleme devam edebiliriz...

----------------------------------------------------------------------------------------------------

short int ---> daha az yer kaplayan int (aralığı az alır)
log int ---> daha uzunu

double ---> float dan daha hassas ve uzun

char c ---> 'a';

int'ler ---> %d
double ve float ---> %f veya %.2f ---> virgülden sonra alınacak sayı uzunluğu
char ---> %c duruma göre %s

----------------------------------------------------------------------------------------------------

printf("%d", sizeof(int)); ---> kaç bayt yer kapladığını söyler ---> isizeofun içini değiştir sadece

direk floa için ---> printf("%f",10.0/4); ---> Bir tane değeri float yapsak yeter,

char -> short -> int -> float -> double

Tür dönüşümlerinde ---> printf("%d",(int)4.2); ---> 4

-----------------------------------------------------------------------------------------------------

getchar(); --> programın kapanmasını engeller

-----------------------------------------------------------------------------------------------------

printf("%d", 3<4); --> ekrana 1 yazar yani true (doğru) demek diğer operatörler için de geçerli --> == , >= , > , <= , < , !=

printf("%d", (3<4) && (4==4)); --> kapılardaki mantığı aynısı --> || , && - or , and

printf("%d", !(3<4)); ---> not operatörü işllemi tersine çevirir, cevap 1 ise 0 yapar 

-----------------------------------------------------------------------------------------------------

brek -->

while(1) --> 1 true olduğu için sonsuz döngüdür, 0 yazarsak döngüye hiç girmeyiz

while(1)
{
   i++;
   if(i==5)
   {
      printf("donguden cikiliyor");
      break; --> döngüden direk çıkmak içi kullanılır
   }
}

-----------------------------------------------------------------------------------------------------

while(1)
{
   i++;
   if(i==2 || i==5)
   {
      i++;
      continue;
   }
      printf("i: %d\n",i);
}

çıktı alt alta --> i:0 i:1 ..... i:9 <--> ama burda 2 ve 5 yok

-----------------------------------------------------------------------------------------------------

toplam = toplam + i; ile toplam += i; aynı şey

-----------------------------------------------------------------------------------------------------

char name[] = "Eren";
printf("%c", name[0],name[1]); --> çıktısı: Er olur.

ama

char name[] = "Eren";
printf("%s", name); --> çıktısı: Eren olur.

----------------------------------------------------------------------------------------------------- 

strlen fonksiyonun kaç karekter olduğunu söyler: 

char name[] = "Eren";
printf("%s", strlen(name)); --> çıktısı: 4 olur.

----------------------------------------------------------------------------------------------------- 

Karekök alma ---> sqrt(sayı)

        int sayi;
	double sonuc;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	sonuc = sqrt(sayi);

        printf("Girdiginiz sayinin karekoku: %.2f",sonuc);

----------------------------------------------------------------------------------------------------- 

Üst alma ---> pow(taban,üst)

        int x,y,sonuc;
	
	printf("Taban: ");
	scanf("%d",&x);
	
	printf("Us: ");
	scanf("%d",&y);
	
	sonuc = pow(x,y);
	
	printf("Sonuc: %d",sonuc);

----------------------------------------------------------------------------------------------------- 

Alta ve üste yuvarlama : 

Alta yuvarlama --> floor(sayi) ---> taban demek
Üste yuvarlama ---> ceil(sayi) ---> tavan demek

        double sayi,sonuc1,sonuc2;
	
	printf("Degeri girin: ");
	scanf("%lf",&sayi);
	
	sonuc1=floor(sayi);
	sonuc2=ceil(sayi);
	
	printf("Sonuc: %.3f\n",sonuc1);
	printf("Sonuc: %.3f",sonuc2);;

----------------------------------------------------------------------------------------------------- 

NOT ---> double'de scanf ve printf kullanırken %lf kullan 

----------------------------------------------------------------------------------------------------- 

Mutlak değer ---> fabs(sayi)

        double sayi,sonuc;
	
	printf("Sayi girin: ");
	scanf("%lf",&sayi);
	
	sonuc = fabs(sayi);
	
	printf("Sonuc: %.2lf",sonuc);

----------------------------------------------------------------------------------------------------- 

Logaritma ---> log() veya log10()

        double sayi,sonuc2;
	
	printf("Sayi girin: ");
	scanf("%lf",&sayi);
	
	sonuc2 = log10(sayi);
	
	printf("Sonuc Log: %.2lf",sonuc2);

NOT ---> log() fonksiyonu, tabanı e=2.71828182846 olan doğal logaritma değerlerini bulmak için kullanılır.
    ---> log10() 10 tabanında alır
----------------------------------------------------------------------------------------------------- 

Sin ve Cos --->

        double derece,sonucsin,sonuccos;
	
	printf("Lutfen dereceyi giriniz: ");
	scanf("%lf",&derece);
	 
	sonucsin = sin(derece);
	sonuccos = cos(derece);
	 
	printf("Sinus: %lf\n",sonucsin); 
	printf("Cosunus: %lf",sonuccos);

        -------------------------------

        Derece olarak hesaplanmış hali

        double derece,sonucsin,sonuccos,aci;
	printf("Aciyi Giriniz: ");
	scanf("%lf",&aci);
	derece = (aci*3.14159265359)/180;  
	
	sonucsin=sin(derece);
	printf("Sinus: %lf\n",sonucsin);
	
	sonuccos=cos(derece);
	printf("Cosinus: %lf",sonuccos); 

----------------------------------------------------------------------------------------------------- 

gets() ve puts() --->

        char bilgi[40];
	 
	printf("Bilgiyi Girin: ");
	gets(bilgi);
	
	printf("---------------------------\n");
	
	printf("Bilgi metini: ");
	puts(bilgi);

scanf kullandığımızda sadece girdiğimiz ilk kelimeyi alıyor ve boşluktan sonrasını almıyordu
scanf ---> gets
printf ---> puts

----------------------------------------------------------------------------------------------------- 

Stringde Biçimlendirilmiş Kullanımlar --->

       char ad[15];
	
	printf("Tek isim giriniz: ");
	scanf("%s",&ad);
        printf("%18s",ad);

NOT ---> Yazacağımız isim 10 karekter diyelim bu biçimde kullanrsak yazdırmanın sağ tarafında 8 boşluk bırakır
----------------------------------------------------------------------------------------------------- 

StrLen Fonksiyonu ---> Girilen metnin vb. kaç karekter olduğunu yazdırır

	char kelime[50];
	
	printf("Bilgiyi girin: ");
	gets(kelime);
	
	printf("-------------------\n");
	
	printf("Bilginiz: ");
	puts(kelime);
	
	printf("-------------------\n");
		
	printf("Kelimenin uzunlugu: %d",strlen(kelime));

----------------------------------------------------------------------------------------------------- 

StrCpy ---> kaynakdaki veriyi kopyaya yazdırdı - kaynağın tamamını kopyalıyor

        char kaynak[30] = "Merhaba Trabzon";
	char kopya[30] = "";
	
	strcpy(kopya,kaynak);
	printf("%s",kopya);


StrnCpy ---> nerende ki veriyi nereye'ye yazdırdı ama bizim belirlediğimiz karekter sayısında

        char nereden[30] = "Merhaba Trabzon";
	char nereye[30] = "";
	
	strncpy(nereye,nereden,9);
	printf("%s",nereye); ---> Merhaba T


----------------------------------------------------------------------------------------------------- 
 
Strcat ---> klavyeden alınan verileri birleştirmek için kullanılır

        char ad[15],soyad[20],kimlik[35];
	
	printf("Adini ve soyadini gir: ");
	scanf("%s %s",&ad,&soyad);
	
	strcat(kimlik,ad); // kimlikle ad birlestirdim
	strcat(kimlik," "); // sonra kimlik ile (ad yani) ile boslugu birlestirdim
	strcat(kimlik,soyad); // sonra kimlik ile (ad ) ile soyadi birlestirdim
	
	printf("--------------------\n");
	
	printf("Adin ve soyadin: %s",kimlik);

----------------------------------------------------------------------------------------------------- 

Enum yapısı ---> klavyeden veri girişliyi araştır

#include <stdio.h>
#include <stdlib.h>

enum sehirler
{
	hatali,adana,adiyaman,afyonkarahisar,agri,amasya,ankara,antalya
};

int main()
{
	enum sehirler il;
	
	il = amasya;
	
	printf("%d",il);
		
	return 0;
}

----------------------------------------------------------------------------------------------------- 

Struct Yapısı --->

#include <stdio.h>
#include <stdlib.h>

    struct kitapbilgi
    {
    	char kitapad[30];
    	char yazar[30];
    	int fiyat;
    	float puan;
    };
	
int main()
{
	struct kitapbilgi kb={"Hayat","ErenKLYC",0,10};

	printf("Kitap Adi: %s\n" ,kb.kitapad);
	printf("Yazar Adi: %s\n" ,kb.yazar);
	printf("Fiyati: %d\n" ,kb.fiyat);
	printf("Puani: %.f" ,kb.puan);
	
	return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>

struct kayit
{
	char ad[20];
	char soyad[30];
	int no;
	float ort;	
};

struct kayit ogr;

int main()
{
	printf("Adiniz ve soyadiniz: ");
	scanf("%s %s",&ogr.ad, &ogr.soyad);
	
	printf("Numaran: ");
	scanf("%d",&ogr.no);
	
	printf("Ortalaman: ");
	scanf("%f",&ogr.ort);
	
	printf("-----------------------\n");
	
	printf("%s\n",ogr.ad);
	printf("%s\n",ogr.soyad);
	printf("%d\n",ogr.no);
	printf("%.2f",ogr.ort);
	
	return 0;
}

----------------------------------------------------------------------------------------------------- 

Typdef Kullanımı --->

#include <stdio.h>
#include <stdlib.h>

typedef int d1;

int main()
{
	int toplam;
	
	d1 d2;
	d1 d3;
	d2=20;
	d3=40;
	
	toplam=d2+d3;
	
	printf("%d",toplam);
	
	return 0;
}

----------------------------------------------------------------------------------------------------- 

