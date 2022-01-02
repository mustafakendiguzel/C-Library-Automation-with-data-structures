#include <stdio.h>
#include <stdlib.h>

yetkililer *yetkiliKontrol(yetkililer *ilkYetkili){

    yetkililer *yeniYetkili =(yetkililer*)malloc(sizeof(yetkililer));
    printf("Kullanici Adi:"); scanf(" %[^\t\n]s",&yeniYetkili->kullaniciAdi);
    printf("Sifre:"); scanf(" %[^\t\n]s",&yeniYetkili->yetkiliSifre);

    if(ilkYetkili==NULL){
        printf("Ilk yetkili kullaniciyi olusturdunuz...\n");
        ilkYetkili=yeniYetkili;
    }
    else
    {
        yetkililer *temp=ilkYetkili;
        while (temp->sonraki!=NULL)
        {
            temp=temp->sonraki;
        }
        temp->sonraki=yeniYetkili;
    }
    return ilkYetkili;
}