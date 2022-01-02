#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ogrenciler *oduncalma(ogrenciler *ilkOgrenci){
    
    ogrenciler *odunckitap = (ogrenciler*)malloc(sizeof(ogrenciler));
    printf("Kitabi alan kisinin adi: ");
    scanf("%s",&odunckitap->oduncAlan_KisiAdi);
    
    printf("Hangi kitabi odunc almak istiyorsunuz?: ");
    scanf("%s",&odunckitap->odunckitapadi);

    if(ilkOgrenci == NULL){
        ilkOgrenci = odunckitap;
        ilkOgrenci->sonraki = NULL;
        printf("ilk ogrenci kitabini aldi listeye eklendi\n");
    }
    else{
        ogrenciler *temp = ilkOgrenci;
        while(temp->sonraki !=NULL){
            temp = temp->sonraki;
        }
        temp ->sonraki = odunckitap;
        printf("ogrenci kitabini aldi\n");
    }
    return ilkOgrenci;
}