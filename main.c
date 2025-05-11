#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	char OyunListesi[5][50] = {
		
    	"\n1. Oyun - Hades - 100 TL\n",
    	"2. Oyun - Hearts of Iron IV - 150 TL\n",
    	"3. Oyun - Witcher 3 - 200 TL\n",
        "4. Oyun - Cyberpunk 2077 - 250 TL\n",
    	"5. Oyun - Red Dead Redemption 2 - 300 TL\n",
		};
	int oyunVarliklari[5] = {0};
    int oyunFiyatlari[5] = {100, 150, 200, 250, 300}; 
	int oyunSecim;
	int odemeSecim;
	int oyunDevam;
	int toplamFiyat = 0;
	int krediKarti = 0;
	int i = 0;
	
    do {
    	for (i = 0; i < 5; i++) {
        printf("%s\n", OyunListesi[i]);
	}
        printf("Almak istediginiz oyunun numarasini yaziniz: ");
        scanf("%d", &oyunSecim);

        switch (oyunSecim) {
            case 1:
                if (oyunVarliklari[oyunSecim - 1] == 0) {
                toplamFiyat += oyunFiyatlari[oyunSecim - 1];
                oyunVarliklari[oyunSecim - 1] = 1;
                    printf("\n1. oyun sepetinize eklendi\n\n");
                }
				else {
                    printf("\n1. oyun zaten sepetinizde var\n\n");
                }
                break;

            case 2:
                if (oyunVarliklari[oyunSecim - 1] == 0) {
                toplamFiyat += oyunFiyatlari[oyunSecim - 1];
                oyunVarliklari[oyunSecim - 1] = 1;
                    printf("\n2. oyun sepetinize eklendi\n\n");
                }
				else {
                    printf("\n2. oyun zaten sepetinizde var\n\n");
                }
                break;

            case 3:
                if (oyunVarliklari[oyunSecim - 1] == 0) {
                toplamFiyat += oyunFiyatlari[oyunSecim - 1];
                oyunVarliklari[oyunSecim - 1] = 1;
                    printf("\n3. oyun sepetinize eklendi\n\n");
                }
				else {
                    printf("\n3. oyun zaten sepetinizde var\n\n");
                }
                 break;
            case 4:
                if (oyunVarliklari[oyunSecim - 1] == 0) {
                toplamFiyat += oyunFiyatlari[oyunSecim - 1];
                oyunVarliklari[oyunSecim - 1] = 1;
                    printf("\n4. oyun sepetinize eklendi\n\n");
                }
				else {
                    printf("\n4. oyun zaten sepetinizde var\n\n");
                }
                 break;
            case 5:
                if (oyunVarliklari[oyunSecim - 1] == 0) {
                toplamFiyat += oyunFiyatlari[oyunSecim - 1];
                oyunVarliklari[oyunSecim - 1] = 1;
                    printf("\n5. oyun sepetinize eklendi\n\n");
                }
				else {
                    printf("\n5. oyun zaten sepetinizde var\n\n");
                }
                break;

            default:
                printf("Dogru bir oyun secimi yapamadiniz. Baska bir zaman gorusmek uzere\n\n");
                return 0;
    
        }
		
		 printf("Oyun almaya devam etmek icin 1'e, odeme ekranina gelmek icin 0'a basiniz: ");
        scanf("%d", &oyunDevam);

        while (oyunDevam != 1 && oyunDevam != 0) {
            printf("Yanlis giris yaptiniz, lutfen 1 ya da 0'a basiniz: ");
            scanf("%d", &oyunDevam);
			}       

	}while (oyunDevam==1);
	
    if (toplamFiyat > 0) {
    printf("\nToplam Fiyat %d TL'dir\n", toplamFiyat);

     while (1) {
        printf("\nOdeme yapmak icin 1'e, alimi iptal etmek icin 0'a basiniz: ");
        scanf("%d", &odemeSecim);

        switch (odemeSecim) {
            case 1:
                printf("\nKredi karti bilgilerinizi giriniz: ");
                scanf("%d", &krediKarti);
                printf("\nOdemeniz gerceklesti. Bizi tercih ettiginiz icin tesekkur ederiz.\n");
                break;
            case 0:
                printf("\nOdeme islemi iptal edildi\n");
                break;
            default:
                printf("\nYanlis giris yaptiniz, lutfen 1 ya da 0'a basiniz\n");
                continue;
        }
        break;
    }
}

return 0;

}
    


