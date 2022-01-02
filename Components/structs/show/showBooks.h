#include <stdio.h>
#include <stdlib.h>
#include <string.h>

kitaplar *kitaplariGoster(kitaplar *ilk) {
	if(ilk == NULL) {
		printf("Kitap yok\n");
	} 
	else {
		kitaplar *temp = ilk;
		int sayac = 1;
		while(temp != NULL) {
			temp->kitapNo=sayac;
			printf("******************************************* \n");
        	printf("%d.Kitabin adi:%s ,sayfasi:%d ,turu:%s \n",temp->kitapNo,temp->kitapAdi,temp->kitapSayfasi,temp->kitapTuru);
    	    temp = temp->sonraki;
			sayac++;
	    }

    }  
    return ilk;
}
