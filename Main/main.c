#include <stdio.h>
#include <stdlib.h>
#include "..\Components\structs\struct.h"
#include "..\Components\structs\add\createBooks.h"
#include "..\Components\structs\show\showBooks.h"
#include "..\Components\structs\delete\deleteBooks.h"
#include "..\Components\structs\kontrol\kontrol.h"
#include "..\Components\structs\kontrol\kontrol1.h"
#include "..\Components\structs\ogrenci\islemler.h"
#include "..\Components\structs\ogrenci\ogrenciKontrol.h"
#include "..\Components\structs\ogrenci\odunc.h"
#include "..\Components\structs\ogrenci\showperson.h"
#include "..\Components\structs\ogrenci\geriverme.h"
#include "..\Components\UI\ui.h"

kitaplar *ilk = NULL;
yetkililer *ilkYetkili=NULL;
ogrenciler *ilkOgrenci=NULL;


#include <stdio.h>
#include <stdlib.h>


int main() {
	
    int secim,secim1,secim2,secim3,kontrol,kontrol1;
	while (1==1)
	{
		
		git:printf("\n1-)Yetkili girisi:\n2-)Ogrenci girisi:\nSecim:"); scanf(" %d",&secim1);
		
		if (secim1==1)
		{
			if(ilkYetkili==NULL){
				ilkYetkili=yetkiliKontrol(ilkYetkili);
			}
			else{
				kontrol=yetkiliKontrol1(ilkYetkili);
				if (kontrol==0||kontrol==1)
				{
					printf("Islemi bastan yapiniz...\n\n");
					goto git;
				}
			
			}
			while(1==1) {
				printf("\nYapmak istediginiz islemi seciniz:\n");
				printf("1)Kitap ekle\n");
				printf("2)Kitap sil\n");
				printf("3)Kitaplari goruntule\n");
				printf("4)Yetkili hesabi olustur\n");
				printf("5)Yetkili hesabindan cikis yap\n");
				
				scanf("%d",&secim);
				switch(secim)
				{
					case 1: ilk=kitapEkleme(ilk); break;
					case 2: ilk=kitapSilme(ilk); break;
					case 3: ilk=kitaplariGoster(ilk); break;
					case 4: yetkiliKontrol(ilkYetkili); break;
					case 5: goto git; break;
					default: printf("\nBoyle bir secenek yoktur lutfen tekrar deneyiniz...\n"); break;
		        }
			}
		}
		else if (secim1==2)
		{
			while(1==1){
				printf("1-)Kitap odunc alma\n");
				printf("2-)Kitap teslim etme\n");
				scanf("%d",&secim3);
				if(secim3 == 1){
					ilkOgrenci = oduncalma(ilkOgrenci);
					ilkOgrenci = kitapgoster(ilkOgrenci);
					ilk = kitapSilme(ilk);
					ilk  = kitaplariGoster(ilk);					
					goto git;
				}
				else if(secim3 == 2){
					char silinecekKitap[40];
					printf("Teslim edeceginiz kitabin adi:");
    				scanf(" %[^\t\n]s",&silinecekKitap);
					ilkOgrenci = geriverme(ilkOgrenci,silinecekKitap);
					ilkOgrenci = kitapgoster(ilkOgrenci);
					ilk = kitapEkleme(ilk);
					//ilk = kitaplariGoster(ilk);
					goto git;
				}
			}
		}
		else
		{
			printf("\nYanlis giris denemesi tekrar deneyiniz...\n");
			goto git;
		}
		
	}
	return 0;

}
  
