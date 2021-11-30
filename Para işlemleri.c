#include <stdio.h>
#include <stdlib.h>

int main()
{
	                                                                                       
	int ilktutar, girilentutar, toplam, toplam2, toplam3, islemsecimi, harcantuar, fatura, borsa, dolarsecim, dolaral, dolarbakiye, dolarsat;
	toplam = 0;
	toplam2 = 0;
	dolarbakiye = 0;
	dolaral = 0;

	printf("Lutfen hesaba yatirmak istediginiz tutari giriniz: ");
	scanf_s("%d", &ilktutar);

	printf("Hosgeldiniz, Lutfen bir islem secinz:\n");

	printf("1.Para Yatirma\n2.Para cekme\n3.Fatura odeme\n4.Borsa islemleri\n5.Bakiye sorgulama\n0.Cikis yap\nSeciminiz: ");
	scanf_s("%d", &islemsecimi);

	if (islemsecimi==1 || islemsecimi==2 || islemsecimi==3 || islemsecimi==4 || islemsecimi==5)
	{

		while (islemsecimi!=0)
		{

			switch (islemsecimi)
			{

			case 1:
				printf("Yatirmak istediginiz tutari giriniz: ");
				scanf_s("%d", &girilentutar);

				toplam = ilktutar + girilentutar;
				ilktutar = toplam;

				printf("Guncel bakiyeniz: %d TL\n", toplam);

				printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
				scanf_s("%d", &islemsecimi);
				break;

			case 2:
				printf("Lutfen cekmek istediginiz tutari giriniz: ");
				scanf_s("%d", &harcantuar);

				toplam2 = ilktutar - harcantuar;
				ilktutar = toplam2;

				printf("Guncel bakiyeniz: %d\n", toplam2);

				printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
				scanf_s("%d", &islemsecimi);
				break;

			case 3:
				printf("Lutfen toplam odeyeceginiz faturayi girin (Elektrik, isinma, su): ");
				scanf_s("%d", &fatura);

				toplam3 = ilktutar - fatura;
				ilktutar = toplam3;

				printf("Guncel faturaniz: %d\n", toplam3);

				printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
				scanf_s("%d", &islemsecimi);
				break;

			case 4: 
				printf("Lutfen yapacaginiz bors islemini seciniz:\n1.Dolar\nisleminiz: ");
				scanf_s("%d", &borsa);

				if (borsa==1)
				{
					switch (borsa)
					{
					case 1:
						printf("Dolar: 13TL\n1.Dolar al\nisleminiz: ");
						scanf_s("%d", &dolarsecim);

						if (dolarsecim==1)
						{ 
							switch (dolarsecim)
							{
							case 1:
								printf("Lutfen alacaginiz dolar miktarini giriniz: ");
								scanf_s("%d", &dolaral);

								dolarbakiye = dolaral;
								ilktutar = ilktutar - dolaral * 13;
							
								printf("Dolar Miktari: %d\nTL Bakiyesi: %d\n",dolaral, ilktutar);

								break;

							}


						}
						else
						{

							while (dolarsecim != 1)
							{

								printf("Dolar: 13TL\n1.Dolar al\nisleminiz: ");
								scanf_s("%d", &dolarsecim);

								if (dolarsecim == 1)
								{
									switch (dolarsecim)
									{
									case 1:
										printf("Lutfen alacaginiz dolar miktarini giriniz: ");
										scanf_s("%d", &dolaral);

										dolarbakiye = dolaral;
										ilktutar = ilktutar - dolaral * 13;

										printf("Dolar Miktari: %d\nTL Bakiyesi: %d\n", dolaral, ilktutar);

										break;

									}


								}

							}

						}
						break;
					}

				}
				else
				{

					while (borsa!=1)
					{

					     printf("Lutfen yapacaginiz borsa islemini dogru seciniz:\n1.Dolar\nisleminiz: ");
					     scanf_s("%d", &borsa);

						 if (borsa == 1)
						 {
							 switch (borsa)
							 {
							 case 1:
								 printf("Dolar: 13TL\n1.Dolar al\nisleminiz: ");
								 scanf_s("%d", &dolarsecim);

								 if (dolarsecim == 1)
								 {
									 switch (dolarsecim)
									 {
									 case 1:
										 printf("Lutfen alacaginiz dolar miktarini giriniz: ");
										 scanf_s("%d", &dolaral);

										 dolarbakiye = dolaral;
										 ilktutar = ilktutar - dolaral * 13;

										 printf("Dolar Miktari: %d\nTL Bakiyesi: %d\n", dolaral, ilktutar);

										 break;

									 }


								 }
								 else
								 {


									 while (dolarsecim != 1)
									 {

										 printf("Dolar: 13TL\n1.Dolar al\nisleminiz: ");
										 scanf_s("%d", &dolarsecim);

										 switch (dolarsecim)
										 {
										 case 1:
											 printf("Lutfen alacaginiz dolar miktarini giriniz: ");
											 scanf_s("%d", &dolaral);

											 dolarbakiye = dolaral;
											 ilktutar = ilktutar - dolaral * 13;

											 printf("Dolar Miktari: %d\nTL Bakiyesi: %d\n", dolaral, ilktutar);

											 break;

										 }

									 }

								 }
								 break;
							 }

						 }

					

				    }


				}

				printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
				scanf_s("%d", &islemsecimi);
				break;

			case 5:
				printf("TL Bakiyeniz:%d\nDolar bakiyeniz: %d\n", ilktutar, dolarbakiye);

				printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
				scanf_s("%d", &islemsecimi);
				break;

			}

		}

		printf("iyi gunler...");

	}
	else 
	{

	while (islemsecimi != 1 && islemsecimi != 2 && islemsecimi != 3 && islemsecimi != 4 && islemsecimi != 5 && islemsecimi!=0)
	{

		printf("1.Para Yatirma\n2.Para cekme\n3.Fatura odeme\n4.Borsa islemleri\n5.Bakiye sorgulama\n0.Cikis yap\nSeciminiz: ");
		scanf_s("%d", &islemsecimi);

		if (islemsecimi == 1 || islemsecimi == 2 || islemsecimi == 3 || islemsecimi == 4 || islemsecimi == 5)
		{

			while (islemsecimi != 0)
			{

				switch (islemsecimi)
				{

				case 1:
					printf("Yatirmak istediginiz tutari giriniz: ");
					scanf_s("%d", &girilentutar);

					toplam = ilktutar + girilentutar;
					ilktutar = toplam;

					printf("Guncel bakiyeniz: %d TL\n", toplam);

					printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
					scanf_s("%d", &islemsecimi);
					break;

				case 2:
					printf("Lutfen cekmek istediginiz tutari giriniz: ");
					scanf_s("%d", &harcantuar);

					toplam2 = ilktutar - harcantuar;
					ilktutar = toplam2;

					printf("Guncel bakiyeniz: %d\n", toplam2);

					printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
					scanf_s("%d", &islemsecimi);
					break;

				case 3:
					printf("Lutfen toplam odeyeceginiz faturayi girin (Elektrik, isinma, su): ");
					scanf_s("%d", &fatura);

					toplam3 = ilktutar - fatura;
					ilktutar = toplam3;

					printf("Guncel faturaniz: %d\n", toplam3);

					printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
					scanf_s("%d", &islemsecimi);
					break;

				case 4:
					printf("Lutfen yapacaginiz bors islemini seciniz:\n1.Dolar\nisleminiz: ");
					scanf_s("%d", &borsa);

					if (borsa == 1)
					{
						switch (borsa)
						{
						case 1:
							printf("Dolar: 13TL\n1.Dolar al\nisleminiz: ");
							scanf_s("%d", &dolarsecim);

							if (dolarsecim == 1)
							{
								switch (dolarsecim)
								{
								case 1:
									printf("Lutfen alacaginiz dolar miktarini giriniz: ");
									scanf_s("%d", &dolaral);

									dolarbakiye = dolaral;
									ilktutar = ilktutar - dolaral * 13;

									printf("Dolar Miktari: %d\nTL Bakiyesi: %d\n", dolaral, ilktutar);

									break;

								}


							}
							else
							{

								while (dolarsecim != 1)
								{

									printf("Dolar: 13TL\n1.Dolar al\nisleminiz: ");
									scanf_s("%d", &dolarsecim);

									if (dolarsecim == 1)
									{
										switch (dolarsecim)
										{
										case 1:
											printf("Lutfen alacaginiz dolar miktarini giriniz: ");
											scanf_s("%d", &dolaral);

											dolarbakiye = dolaral;
											ilktutar = ilktutar - dolaral * 13;

											printf("Dolar Miktari: %d\nTL Bakiyesi: %d\n", dolaral, ilktutar);

											break;

										}


									}

								}

							}
							break;
						}

					}
					else
					{

						while (borsa != 1)
						{

							printf("Lutfen yapacaginiz borsa islemini dogru seciniz:\n1.Dolar\nisleminiz: ");
							scanf_s("%d", &borsa);

							if (borsa == 1)
							{
								switch (borsa)
								{
								case 1:
									printf("Dolar: 13TL\n1.Dolar al\nisleminiz: ");
									scanf_s("%d", &dolarsecim);

									if (dolarsecim == 1)
									{
										switch (dolarsecim)
										{
										case 1:
											printf("Lutfen alacaginiz dolar miktarini giriniz: ");
											scanf_s("%d", &dolaral);

											dolarbakiye = dolaral;
											ilktutar = ilktutar - dolaral * 13;

											printf("Dolar Miktari: %d\nTL Bakiyesi: %d\n", dolaral, ilktutar);

											break;

										}


									}
									else
									{


										while (dolarsecim != 1)
										{

											printf("Dolar: 13TL\n1.Dolar al\nisleminiz: ");
											scanf_s("%d", &dolarsecim);

											switch (dolarsecim)
											{
											case 1:
												printf("Lutfen alacaginiz dolar miktarini giriniz: ");
												scanf_s("%d", &dolaral);

												dolarbakiye = dolaral;
												ilktutar = ilktutar - dolaral * 13;

												printf("Dolar Miktari: %d\nTL Bakiyesi: %d\n", dolaral, ilktutar);

												break;

											}

										}

									}
									break;
								}

							}



						}


					}

					printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
					scanf_s("%d", &islemsecimi);
					break;

				case 5:
					printf("TL Bakiyeniz:%d\nDolar bakiyeniz: %d\n", ilktutar, dolarbakiye);

					printf("Secmek istediginiz islemi tuslayin yada cikis yapmak icin SIFIRI tuslayin: ");
					scanf_s("%d", &islemsecimi);
					break;

				}

			}

		}


	}

	printf("iyi gunler...");

	}

	system("pause");
	return 0;
}
