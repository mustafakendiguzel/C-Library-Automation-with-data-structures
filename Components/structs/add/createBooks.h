kitaplar *kitapEkleme(kitaplar *ilk) {

    kitaplar *yeniKitap =(kitaplar*)malloc(sizeof(kitaplar));
    printf("Kutuphaneye eklemek istediginiz Kitabin Adi:"); scanf(" %[^\t\n]s",&yeniKitap->kitapAdi);
    printf("Kitap Sayfasi:"); scanf("%d",&yeniKitap->kitapSayfasi);
    printf("Kitap Turu:"); scanf(" %[^\t\n]s",&yeniKitap->kitapTuru);
    int ayniKitapMi = 0;
    if(ilk == NULL) {
        ilk = yeniKitap;
        ilk -> sonraki = NULL;
        printf("Liste olusturuldu ilk kitap eklendi\n");
    } else {
        kitaplar *temp = ilk;
        kitaplar *temp2 = ilk;

        while(temp -> sonraki != NULL){
            temp = temp -> sonraki;
        }
        
        while(temp2 != NULL){
        	if(strcmp(temp2->kitapAdi,yeniKitap->kitapAdi) == 0) {
        		printf("Aradiginiz kitap kutuphanede zaten var");
        		ayniKitapMi = 1;
			}
            temp2 = temp2 -> sonraki;
        }
        if(ayniKitapMi == 0)
           temp -> sonraki = yeniKitap;
    }

    return ilk;
}
