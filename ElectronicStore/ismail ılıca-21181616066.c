#include <stdio.h>   //k�t�phane olarak standart input output k�t�phanesini kulland�m.//

//�SMA�L ILICA NO:21181616066 Bilgisayar M�hendisli�i Teknoloji Fak�ltesi 1.S�n�f//

int main() {         //Main fonksiyonu olmazsa kodlar �al��maz.//
    int i;
	int secim,secim1,secim2,secim3,secim4,secim5,secim6,secim7,secim8;           //Se�imler tam say� oldu�u i�in int de�i�kenine atad�m.//
    float tutar=0;                                                //Tutar k�s�ratl� bir say� olabilece�i i�in tutar� float de�i�kenine atad�m.//
	printf("********* XYZ ELEKTRONIK**********\n\n");            //XYZ ELektronik yaz�s�n� printf ile yazd�rd�m.//
	printf("*********Hosgeldiniz**************\n");             //Ho�geldiniz yaz�s�n� printf ile yazd�rd�m.//
	printf("*************************************\n");
	suraya: printf("Secim yapiniz\n 1-Urun fiyat sorgulama\n 2-Sepete urun ekle \n 3-Siparis tamamla\n 4-Programi sonlandir\n");  //Se�imleri printf ile yazd�rd�m.//
	scanf("%d",&secim);                                                        //Yapmak istenilen se�imi klavyeden tam say� de�er olarak ald�m.// %d bir tam say� de�i�keninden bahseder.
	if(secim>=5||secim<=0){                                                    //E�er se�im 5ten b�y�k e�it veya 0 dan k���k e�itse printf ile hatali sayi yazd�rd�m.//
	printf("Hatali sayi!\n");
	goto suraya;      //goto komutu �ncesinde belirlemi� oldu�umuz yere program ak���n�n gitmesini sa�lar.//         //Hatal� say�dan sonra goto ile ana men�ye tekrardan d�nd�rd�m.//
	}
	 
	switch(secim){     //switch case kulland�m bunun amac� e�er se�im 1 se yani case 1 ise bunlar� yap  case 2 ise bunlar� yap case 3 ise bunlar� yap case 4 ise bunlar� yap gibi �eyler 
     //yazd�m i�ine ve bunlar�n sonuna break komutunu ekledim break komutu ile i�lemi k�rd�m ve switch caseden ��kt�m.


	case 1:buraya:printf("Hangi kategoriden urun sorgulamak istiyorsunuz\n 1-Akilli telefon\n 2-Akilli saat \n 3-Yazici \n 4-Bilgisayar"); scanf("%d",&secim6); //printf ile  Hangi kategoriden urun sorgulamak istiyorsunuz yazd�rd�m ve scanf ile bir secim istedim.//
	if(secim6==1){ // if ile ko�ula ba�lad�m e�er secim6 1 e esit mi diye sorgulad�m  �ift e�ittir sorgulamad�m tek e�ittir atamad�r.//
	printf("Akilli telefon 1-1500TL \t Akilli telefon 2-2750TL \t Akilli telefon 3-8832TL\n"); } //printf ile se�enekleri yazd�rd�m \n ile alt sat�ra ge�tim.//
	 if(secim6==2){ // if ile ko�ula ba�lad�m ve se�im6 2 ye e�it mi diye sorgulad�m e�er e�itse printf ile  Akilli saat 1-543.99TL \t Akilli saat 2-1324.50TL \tAkilli saat 3-850TL yazd�rd�m.
	 // \t nin amac� alt sat�ra ge�meden  yan yana aralar�nda bo�luk b�rakarak yazd�rmak.//
	printf("Akilli saat 1-543.99TL \t Akilli saat 2-1324.50TL \tAkilli saat 3-850TL\n");
	}
	 if(secim6==3){
	printf("Yazici 1-553.50TL \t Yazici 2-848.20TL \t Yazici 3-1433.33\n"); // secim6 3 e e�it mi diye sorgulad�m e�er e�itse printf ile bu sat�rdaki yazanlar� yazd�rd�m.//
	}
	if(secim6==4){
	printf("Bilgisayar 1-14600TL \t Bilgisayar 2-12964TL \t Bilgisayar 3-22920TL \t Bilgisayar 4-36123TL\n");  // secim6 4 e�it mi diye sorgulad�m bu sat�rdaki yazanlar� yazd�rd�m.//
	}
	 if(secim6>=5||secim6<=0){ // e�er secim6 5e b�y�k e�itse ||(bunun anlam� veya) secim 0 dan k���k e�itse printf ile hatali sayi yazd�rd�m \n ile alt sat�ra ge�tim.//
	printf("Hatali sayi!\n");
	}
	bura:printf("1-Ana menuye don \n 2-Baska kategoriden urun sorgula"); scanf("%d",&secim7); //�r�n sorgulad�ktan sonra klavyeden bir secim7 istedim secim7 1 e e�it mi diye sorgulad�m e�itse goto kullanarak ana men�ye d�nd�rd�m
	//secim7 2 ye e�it mi diye sorgulad�m e�itse goto kullanarak ba�ka kategoriden �r�n sorgulaya d�nd�rd�m. 
	if(secim7==1){
	goto suraya;
	}
    if(secim7==2){
	 goto buraya;
	}
    if(secim7!=1&&secim7!=2) printf("Hatali sayi girisi yeniden secim yapiniz!\n");//E�er secim7 1e &&(ve) 2e e�it de�ilse goto kullanarak yeniden secim yapmaya g�nderdim.
	goto bura; //bu i�lemlerden sonra goto kullanarak yeniden se�im yapmas�n� sa�lad�m.//
    break;
	case 2:oraya:printf("Hangi kategoriden urun eklemek istiyorsunuz?\n Eklemek istediginiz urunun yanindaki sayiya basiniz eger bunlardan farkli bir sayiya basarsaniz urun sepete eklenmez!!!\n\n"); printf("1-Akilli telefon\n 2-Akilli saat \n 3-Yazici \n 4-Bilgisayar"); scanf("%d",&secim1); 
	// case 2 diyerek yani secim 2 ye e�itse printf ile Hangi kategoriden urun eklemek istiyorsunuz?\n Eklemek istediginiz urunun yanindaki sayiya basiniz eger bunlardan farkli bir sayiya basarsaniz urun sepete eklenmez!!!\n\n
	// Yazd�rd�m iki tane \n kullanarak 2 defa alt sat�ra ge�tim scanf ile klavyeden girilen bir secim1 istedim.//
	
	if(secim1==1){ //e�er secim1 1 e�it mi diye �nce sorgulad�m sonra e�itse printf ile 45.sat�rdaki �eyleri yazd�rd�m ve yaz�lan �eylerden hangisinin secilmesini sordum ve scanf ile bir klavyeden bir secim2 istedim.//
	printf("Akilli telefon 1-1500TL \t Akilli telefon 2-2750TL \t Akilli telefon 3-8832TL\n Hangisini eklemek istersiniz? "); scanf("%d",&secim2);
	if(secim2==1){ //secim2 1 e e�it mi diye sorgulad�m e�itse tutar� tutar +1500 e e�itledim.//
	tutar=tutar+1500;
	}
	if(secim2==2){ //secim2 2 ye e�it mi diye sorgulad�m e�itse tutar� tutar +2750 ye e�itledim.//
	tutar=tutar+2750;
	}
	if(secim2==3){ //secim2 3 e e�it mi diye sorgulad�m e�itse tutar� tutar +8832 ye e�itledim.//
	tutar=tutar+8832;
	}
    if(secim2>=4||secim2<=0) printf("Hatali sayi urun sepete eklenemedi!\n"); //secim2 4e b�y�k e�itse ||(veya) secim2 0dan k���k e�itse printf ile hatali sayi urun sepete eklenemedi yazd�rd�m.//
	}
	 if(secim1==2){ //secim1 2 ye e�it mi diye sorgulad�m e�itse printf ile Akilli saat 1-543.99TL \t Akilli saat 2-1324.50TL \tAkilli saat 3-850TL\n Hangisini eklemek istersiniz? yazd�rd�m.//
	printf("Akilli saat 1-543.99TL \t Akilli saat 2-1324.50TL \tAkilli saat 3-850TL\n Hangisini eklemek istersiniz?"); scanf("%d",&secim3); //scanf ile secim3 i�im klavyeden bir tam say� de�eri istedim.//
	if(secim3==1){ //secim3 1 e e�it mi diye sorgulad�m 1 e e�itse tutar� tutar+543.99 a e�itledim.//
	 tutar=tutar+543.99;
	} 
	if(secim3==2){ //secim3 2 e e�it mi diye sorgulad�m e�itse tutar� tutar+1324.50 ye e�itledim.//
	tutar=tutar+1324.50;
	}
	if(secim3==3){  //secim3 3 e e�it mi diye sorgulad�m e�itse tutar� tutar+850 ye e�itledim.//
	tutar=tutar+850;
	}
  
    if(secim3>=4||secim3<=0) printf("Hatali sayi urun sepete eklenemedi!\n");  //secim3  4e b�y�k e�itse ||(veya) secim3 0dan k���k e�itse printf ile hatali sayi urun sepete eklenemedi yazd�rd�m.//
	
	}
	if(secim1==3){ //secim1 3 e e�it mi diye sorgulad�m e�er e�itse printf ile Yazici 1-553.50TL \t Yazici 2-848.20TL \t Yazici 3-1433.33 \n Hangisini eklemek istersiniz? yazd�rd�m scanf ile klavyeden bir tam say� de�eri istedim.//
	printf("Yazici 1-553.50TL \t Yazici 2-848.20TL \t Yazici 3-1433.33 \n Hangisini eklemek istersiniz?"); scanf("%d",&secim4);
	if(secim4==1){  
	tutar=tutar+553.50;    //secim4 1 e e�it mi diye sorgulad�m e�itse tutar�  tutar+553.50 e e�itledim.//
	}
	if(secim4==2){
	tutar=tutar+848.20;   //secim4 2 e e�it mi diye sorgulad�m e�itse tutar�  tutar+848.20 ye e�itledim.//
	}
	if(secim4==3){
	tutar=tutar+1433.33;  //secim4 3 e e�it mi diye sorgulad�m e�itse tutar� tutar+1433.33 e�itledim.// 
	}
    if(secim4>=4||secim4<=0) printf("Hatali sayi urun sepete eklenemedi!\n"); //secim4 4e b�y�k e�itse ||(veya) secim4 0dan k���k e�itse printf ile hatali sayi urun sepete eklenemedi yazd�rd�m.//
	}
	if(secim1==4){//secim1 4 e e�itse printf ile Bilgisayar 1-14600TL \t Bilgisayar 2-12964TL \t Bilgisayar 3-22920TL \t Bilgisayar 4-36123TL \t ile yan yana aralar�nda bo�luk b�rakarak yazd�rd�m.\n ile alt sat�ra ge�tim.Ve scanf ile klavyeden  bir tam say� de�eri istedim.
	printf("Bilgisayar 1-14600TL \t Bilgisayar 2-12964TL \t Bilgisayar 3-22920TL \t Bilgisayar 4-36123TL\n Hangisini eklemek istersiniz?"); scanf("%d",&secim5);
	if(secim5==1){
	tutar=tutar+14600;  //secim5 1 e e�it mi diye sorgulad�m e�itse tutara 14600 tl ekledim//
	}
	if(secim5==2){
	tutar=tutar+12964;   //secim5 2 e e�it mi diye sorgulad�m e�itse tutara 12964 tl ekledim//
	}
    if(secim5==3){
	tutar=tutar+22920;  //secim5 3 e e�it mi diye sorgulad�m e�itse tutara 22920 tl ekledim//
	}
	if(secim5==4){
	tutar=tutar+36123; //secim5 4 e  e�it mi diye sorgulad�m e�itse tutara 36123 tl ekledim//
	}
    if(secim5>=5||secim5<=0) printf("Hatali sayi urun sepete eklenemedi!\n"); //Se�im5 5ten b�y�k e�itse ||(veya) secim5 s�f�ra k���k e�itse printf ile Hatali sayi urun sepete eklenemedi! yazd�r�yorum.//
	}
	if(secim1>=5||secim1<=0) {printf("Hatali sayi girisi\n");}//Se�im1  5ten b�y�k e�itse ||(veya) secim1 s�f�ra k���k e�itse  printf ile hatali sayi girisi yazd�rd�m.//
   
	sura:printf("1-Ana menuye don\n 2-Sepete urun ekle"); scanf("%d",&secim8); //printf ile Ana menuye don 2-Sepete urun ekle yazd�rd�m scanf ile klavyeden bir veri giri�i istedim.//
	if(secim8==2){ //Secim8 2 ye e�it mi diye sorgulad�m e�er e�itse goto kullanarak Hangi kategoriden �r�n sepete eklemek istiyorsunuza d�nd�rd�m.//
	goto oraya;
	}
	if(secim8==1){//Secim8 1 e e�it mi diye sorgulad�m e�er e�itse goto kullanarak ana men�ye d�nd�rd�m.//
	goto suraya;
	}
	if(secim8!=1&&secim8!=2) {
	printf("Hatali sayi girisi yeniden secim yapiniz\n"); //e�er secim8 1e ve 2 ye e�it de�ilse printf ile hatali sayi girisi yazd�rd�m ve goto kullanarak yeniden se�im yapmaya g�nderdim.//
	goto sura; //goto kullanarak yeniden se�im yapmaya g�nderdim.//
	}
                         
	
	
	
	case 3:printf("Toplam sepet tutariniz %f TL\n ",tutar);  goto suraya; break; //3e bas�ld���nda toplam sepet tutar�n� noktadan sonra 6 basama��n� float de�i�keni  ile g�steriyor ve goto ile tekrardan ana men�ye d�n�yor.//
	case 4:printf("iyi gunler dileriz \nProgram sonlandiriliyor...");  break;   //4 e bas�ld���nda printf ile iyi g�nler dileriz \n ile alt sat�ra ge�tim  program sonland�r�l�yor yazd�rd�m ve bir tu�a bas�ld���nda program sonlan�yor.//
    

	
	
	
	}
	

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
