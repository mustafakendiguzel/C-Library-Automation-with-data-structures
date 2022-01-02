#include <stdio.h>
#include <stdlib.h>
#include <string.h>

kitaplar *kitapSilme(kitaplar *ilk) { 
	char istenilenKitap[40];
	printf("Kutuphaneden silmek istediginiz kitabin adi:");
	scanf(" %[^\t\n]s",&istenilenKitap);
	int m=0;
	kitaplar *x=ilk;
	while(x != NULL){
		if (strcmp(x->kitapAdi,istenilenKitap) == 0)
		{
			m=1;
		}
		x=x->sonraki;
	}
	if(ilk == NULL) {
		printf("Kitaplikta hicccc kitap yok\n");
		return ilk;
	}else if(m==1){
  	    kitaplar *temp = ilk;
		kitaplar *q = NULL;
	    while(temp != NULL) {
	            if(strcmp(ilk->kitapAdi,istenilenKitap) == 0){
					kitaplar *p = ilk->sonraki;
					free(ilk);
					ilk=p;
					temp=ilk;
					while (temp != NULL)
					{
						temp->kitapNo = temp->kitapNo-1;
						temp=temp->sonraki;
					}
					return ilk;
				}
				else if (strcmp(temp->sonraki->kitapAdi,istenilenKitap) == 0) {
					q=temp->sonraki->sonraki;
					free(temp->sonraki);
					temp->sonraki=q;
	  	            printf("kitap bulundu\n");
					while (q != NULL)
					{
						q->kitapNo = q->kitapNo-1;
						q=q->sonraki;
					}
					return ilk;
	            }
        	temp = temp->sonraki;
		}
	}
	else{
		printf("kitap yok\n");
		return ilk;
	}
}
