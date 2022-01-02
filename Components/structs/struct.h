#include <stdio.h>
#include <stdlib.h>

struct kitap{
	int kitapNo;
	char kitapAdi[40];
	int kitapSayfasi;
	char kitapTuru[40];
	struct kitap *sonraki;
};

typedef struct kitap kitaplar;

struct yetkili{
	char kullaniciAdi[40];
	char yetkiliSifre[40];
	struct yetkili *sonraki;
};

typedef struct yetkili yetkililer;

struct ogrenci{
	char kullaniciAdi[40];
	char sifre[40];
	char oduncAlan_KisiAdi[40];
	char odunckitapadi[40];
	struct ogrenci *sonraki;
};

typedef struct ogrenci ogrenciler;