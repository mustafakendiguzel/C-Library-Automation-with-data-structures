#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ogrenciler *kitapgoster(ogrenciler *ilkOgrenci){
    if(ilkOgrenci == NULL){
        printf("liste bos\n");
    }
    else{
        ogrenciler *temp = ilkOgrenci;
        int sayac = 1;
        while(temp != NULL){
            printf("%s isimli kisi %s kitabini odunc almistir.\n",temp->oduncAlan_KisiAdi,temp->odunckitapadi);
            temp = temp->sonraki;
        }
    }
    return ilkOgrenci;
}