#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ogrenciler *geriverme(ogrenciler *ilkOgrenci,char *silinecekKitap){

    int m=0;
    ogrenciler *x=ilkOgrenci;
    
    while(x !=NULL){
        if(strcmp(x->odunckitapadi,silinecekKitap) == 0){
            m = 1;
        }
        x = x->sonraki;
    }
    if(ilkOgrenci == NULL){
        printf("Listede teslim edilecek kitap bulunmamaktadir.\n");
        return ilkOgrenci;
    }
    else if(m == 1){
        ogrenciler *temp = ilkOgrenci;
        ogrenciler *q = NULL;
        while(temp != NULL){
            if(strcmp(ilkOgrenci->odunckitapadi,silinecekKitap) == 0){
                ogrenciler *p = ilkOgrenci->sonraki;
                free(ilkOgrenci);
                ilkOgrenci = p;
                temp = ilkOgrenci;
                while(temp != NULL){
                    temp = temp->sonraki;
                }
                return ilkOgrenci;
            }
            else if(strcmp(temp->sonraki->odunckitapadi,silinecekKitap)== 0){
                q = temp->sonraki->sonraki;
                free(temp->sonraki);
                temp->sonraki = q;
                printf("\nkitabi buldum\n");
                while(q != NULL){
                    q= q->sonraki;
                }
                return ilkOgrenci;
            }
        }
    }
    else{
        printf("listede kitap yok\n");
        return ilkOgrenci;
    }
}