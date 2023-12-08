#include <stdio.h>   //kütüphane olarak standart input output kütüphanesini kullandım.//

//İSMAİL ILICA NO:21181616066 Bilgisayar Mühendisliği Teknoloji Fakültesi 1.Sınıf//

int main() {         //Main fonksiyonu olmazsa kodlar çalışmaz.//
    int i;
	int secim,secim1,secim2,secim3,secim4,secim5,secim6,secim7,secim8;           //Seçimler tam sayı olduğu için int değişkenine atadım.//
    float tutar=0;                                                //Tutar küsüratlı bir sayı olabileceği için tutarı float değişkenine atadım.//
	printf("********* XYZ ELEKTRONIK**********\n\n");            //XYZ ELektronik yazısını printf ile yazdırdım.//
	printf("*********Hosgeldiniz**************\n");             //Hoşgeldiniz yazısını printf ile yazdırdım.//
	printf("*************************************\n");
	suraya: printf("Secim yapiniz\n 1-Urun fiyat sorgulama\n 2-Sepete urun ekle \n 3-Siparis tamamla\n 4-Programi sonlandir\n");  //Seçimleri printf ile yazdırdım.//
	scanf("%d",&secim);                                                        //Yapmak istenilen seçimi klavyeden tam sayı değer olarak aldım.// %d bir tam sayı değişkeninden bahseder.
	if(secim>=5||secim<=0){                                                    //Eğer seçim 5ten büyük eşit veya 0 dan küçük eşitse printf ile hatali sayi yazdırdım.//
	printf("Hatali sayi!\n");
	goto suraya;      //goto komutu öncesinde belirlemiş olduğumuz yere program akışının gitmesini sağlar.//         //Hatalı sayıdan sonra goto ile ana menüye tekrardan döndürdüm.//
	}
	 
	switch(secim){     //switch case kullandım bunun amacı eğer seçim 1 se yani case 1 ise bunları yap  case 2 ise bunları yap case 3 ise bunları yap case 4 ise bunları yap gibi şeyler 
     //yazdım içine ve bunların sonuna break komutunu ekledim break komutu ile işlemi kırdım ve switch caseden çıktım.


	case 1:buraya:printf("Hangi kategoriden urun sorgulamak istiyorsunuz\n 1-Akilli telefon\n 2-Akilli saat \n 3-Yazici \n 4-Bilgisayar"); scanf("%d",&secim6); //printf ile  Hangi kategoriden urun sorgulamak istiyorsunuz yazdırdım ve scanf ile bir secim istedim.//
	if(secim6==1){ // if ile koşula bağladım eğer secim6 1 e esit mi diye sorguladım  çift eşittir sorgulamadım tek eşittir atamadır.//
	printf("Akilli telefon 1-1500TL \t Akilli telefon 2-2750TL \t Akilli telefon 3-8832TL\n"); } //printf ile seçenekleri yazdırdım \n ile alt satıra geçtim.//
	 if(secim6==2){ // if ile koşula bağladım ve seçim6 2 ye eşit mi diye sorguladım eğer eşitse printf ile  Akilli saat 1-543.99TL \t Akilli saat 2-1324.50TL \tAkilli saat 3-850TL yazdırdım.
	 // \t nin amacı alt satıra geçmeden  yan yana aralarında boşluk bırakarak yazdırmak.//
	printf("Akilli saat 1-543.99TL \t Akilli saat 2-1324.50TL \tAkilli saat 3-850TL\n");
	}
	 if(secim6==3){
	printf("Yazici 1-553.50TL \t Yazici 2-848.20TL \t Yazici 3-1433.33\n"); // secim6 3 e eşit mi diye sorguladım eğer eşitse printf ile bu satırdaki yazanları yazdırdım.//
	}
	if(secim6==4){
	printf("Bilgisayar 1-14600TL \t Bilgisayar 2-12964TL \t Bilgisayar 3-22920TL \t Bilgisayar 4-36123TL\n");  // secim6 4 eşit mi diye sorguladım bu satırdaki yazanları yazdırdım.//
	}
	 if(secim6>=5||secim6<=0){ // eğer secim6 5e büyük eşitse ||(bunun anlamı veya) secim 0 dan küçük eşitse printf ile hatali sayi yazdırdım \n ile alt satıra geçtim.//
	printf("Hatali sayi!\n");
	}
	bura:printf("1-Ana menuye don \n 2-Baska kategoriden urun sorgula"); scanf("%d",&secim7); //Ürün sorguladıktan sonra klavyeden bir secim7 istedim secim7 1 e eşit mi diye sorguladım eşitse goto kullanarak ana menüye döndürdüm
	//secim7 2 ye eşit mi diye sorguladım eşitse goto kullanarak başka kategoriden ürün sorgulaya döndürdüm. 
	if(secim7==1){
	goto suraya;
	}
    if(secim7==2){
	 goto buraya;
	}
    if(secim7!=1&&secim7!=2) printf("Hatali sayi girisi yeniden secim yapiniz!\n");//Eğer secim7 1e &&(ve) 2e eşit değilse goto kullanarak yeniden secim yapmaya gönderdim.
	goto bura; //bu işlemlerden sonra goto kullanarak yeniden seçim yapmasını sağladım.//
    break;
	case 2:oraya:printf("Hangi kategoriden urun eklemek istiyorsunuz?\n Eklemek istediginiz urunun yanindaki sayiya basiniz eger bunlardan farkli bir sayiya basarsaniz urun sepete eklenmez!!!\n\n"); printf("1-Akilli telefon\n 2-Akilli saat \n 3-Yazici \n 4-Bilgisayar"); scanf("%d",&secim1); 
	// case 2 diyerek yani secim 2 ye eşitse printf ile Hangi kategoriden urun eklemek istiyorsunuz?\n Eklemek istediginiz urunun yanindaki sayiya basiniz eger bunlardan farkli bir sayiya basarsaniz urun sepete eklenmez!!!\n\n
	// Yazdırdım iki tane \n kullanarak 2 defa alt satıra geçtim scanf ile klavyeden girilen bir secim1 istedim.//
	
	if(secim1==1){ //eğer secim1 1 eşit mi diye önce sorguladım sonra eşitse printf ile 45.satırdaki şeyleri yazdırdım ve yazılan şeylerden hangisinin secilmesini sordum ve scanf ile bir klavyeden bir secim2 istedim.//
	printf("Akilli telefon 1-1500TL \t Akilli telefon 2-2750TL \t Akilli telefon 3-8832TL\n Hangisini eklemek istersiniz? "); scanf("%d",&secim2);
	if(secim2==1){ //secim2 1 e eşit mi diye sorguladım eşitse tutarı tutar +1500 e eşitledim.//
	tutar=tutar+1500;
	}
	if(secim2==2){ //secim2 2 ye eşit mi diye sorguladım eşitse tutarı tutar +2750 ye eşitledim.//
	tutar=tutar+2750;
	}
	if(secim2==3){ //secim2 3 e eşit mi diye sorguladım eşitse tutarı tutar +8832 ye eşitledim.//
	tutar=tutar+8832;
	}
    if(secim2>=4||secim2<=0) printf("Hatali sayi urun sepete eklenemedi!\n"); //secim2 4e büyük eşitse ||(veya) secim2 0dan küçük eşitse printf ile hatali sayi urun sepete eklenemedi yazdırdım.//
	}
	 if(secim1==2){ //secim1 2 ye eşit mi diye sorguladım eşitse printf ile Akilli saat 1-543.99TL \t Akilli saat 2-1324.50TL \tAkilli saat 3-850TL\n Hangisini eklemek istersiniz? yazdırdım.//
	printf("Akilli saat 1-543.99TL \t Akilli saat 2-1324.50TL \tAkilli saat 3-850TL\n Hangisini eklemek istersiniz?"); scanf("%d",&secim3); //scanf ile secim3 içim klavyeden bir tam sayı değeri istedim.//
	if(secim3==1){ //secim3 1 e eşit mi diye sorguladım 1 e eşitse tutarı tutar+543.99 a eşitledim.//
	 tutar=tutar+543.99;
	} 
	if(secim3==2){ //secim3 2 e eşit mi diye sorguladım eşitse tutarı tutar+1324.50 ye eşitledim.//
	tutar=tutar+1324.50;
	}
	if(secim3==3){  //secim3 3 e eşit mi diye sorguladım eşitse tutarı tutar+850 ye eşitledim.//
	tutar=tutar+850;
	}
  
    if(secim3>=4||secim3<=0) printf("Hatali sayi urun sepete eklenemedi!\n");  //secim3  4e büyük eşitse ||(veya) secim3 0dan küçük eşitse printf ile hatali sayi urun sepete eklenemedi yazdırdım.//
	
	}
	if(secim1==3){ //secim1 3 e eşit mi diye sorguladım eğer eşitse printf ile Yazici 1-553.50TL \t Yazici 2-848.20TL \t Yazici 3-1433.33 \n Hangisini eklemek istersiniz? yazdırdım scanf ile klavyeden bir tam sayı değeri istedim.//
	printf("Yazici 1-553.50TL \t Yazici 2-848.20TL \t Yazici 3-1433.33 \n Hangisini eklemek istersiniz?"); scanf("%d",&secim4);
	if(secim4==1){  
	tutar=tutar+553.50;    //secim4 1 e eşit mi diye sorguladım eşitse tutarı  tutar+553.50 e eşitledim.//
	}
	if(secim4==2){
	tutar=tutar+848.20;   //secim4 2 e eşit mi diye sorguladım eşitse tutarı  tutar+848.20 ye eşitledim.//
	}
	if(secim4==3){
	tutar=tutar+1433.33;  //secim4 3 e eşit mi diye sorguladım eşitse tutarı tutar+1433.33 eşitledim.// 
	}
    if(secim4>=4||secim4<=0) printf("Hatali sayi urun sepete eklenemedi!\n"); //secim4 4e büyük eşitse ||(veya) secim4 0dan küçük eşitse printf ile hatali sayi urun sepete eklenemedi yazdırdım.//
	}
	if(secim1==4){//secim1 4 e eşitse printf ile Bilgisayar 1-14600TL \t Bilgisayar 2-12964TL \t Bilgisayar 3-22920TL \t Bilgisayar 4-36123TL \t ile yan yana aralarında boşluk bırakarak yazdırdım.\n ile alt satıra geçtim.Ve scanf ile klavyeden  bir tam sayı değeri istedim.
	printf("Bilgisayar 1-14600TL \t Bilgisayar 2-12964TL \t Bilgisayar 3-22920TL \t Bilgisayar 4-36123TL\n Hangisini eklemek istersiniz?"); scanf("%d",&secim5);
	if(secim5==1){
	tutar=tutar+14600;  //secim5 1 e eşit mi diye sorguladım eşitse tutara 14600 tl ekledim//
	}
	if(secim5==2){
	tutar=tutar+12964;   //secim5 2 e eşit mi diye sorguladım eşitse tutara 12964 tl ekledim//
	}
    if(secim5==3){
	tutar=tutar+22920;  //secim5 3 e eşit mi diye sorguladım eşitse tutara 22920 tl ekledim//
	}
	if(secim5==4){
	tutar=tutar+36123; //secim5 4 e  eşit mi diye sorguladım eşitse tutara 36123 tl ekledim//
	}
    if(secim5>=5||secim5<=0) printf("Hatali sayi urun sepete eklenemedi!\n"); //Seçim5 5ten büyük eşitse ||(veya) secim5 sıfıra küçük eşitse printf ile Hatali sayi urun sepete eklenemedi! yazdırıyorum.//
	}
	if(secim1>=5||secim1<=0) {printf("Hatali sayi girisi\n");}//Seçim1  5ten büyük eşitse ||(veya) secim1 sıfıra küçük eşitse  printf ile hatali sayi girisi yazdırdım.//
   
	sura:printf("1-Ana menuye don\n 2-Sepete urun ekle"); scanf("%d",&secim8); //printf ile Ana menuye don 2-Sepete urun ekle yazdırdım scanf ile klavyeden bir veri girişi istedim.//
	if(secim8==2){ //Secim8 2 ye eşit mi diye sorguladım eğer eşitse goto kullanarak Hangi kategoriden ürün sepete eklemek istiyorsunuza döndürdüm.//
	goto oraya;
	}
	if(secim8==1){//Secim8 1 e eşit mi diye sorguladım eğer eşitse goto kullanarak ana menüye döndürdüm.//
	goto suraya;
	}
	if(secim8!=1&&secim8!=2) {
	printf("Hatali sayi girisi yeniden secim yapiniz\n"); //eğer secim8 1e ve 2 ye eşit değilse printf ile hatali sayi girisi yazdırdım ve goto kullanarak yeniden seçim yapmaya gönderdim.//
	goto sura; //goto kullanarak yeniden seçim yapmaya gönderdim.//
	}
                         
	
	
	
	case 3:printf("Toplam sepet tutariniz %f TL\n ",tutar);  goto suraya; break; //3e basıldığında toplam sepet tutarını noktadan sonra 6 basamağını float değişkeni  ile gösteriyor ve goto ile tekrardan ana menüye dönüyor.//
	case 4:printf("iyi gunler dileriz \nProgram sonlandiriliyor...");  break;   //4 e basıldığında printf ile iyi günler dileriz \n ile alt satıra geçtim  program sonlandırılıyor yazdırdım ve bir tuşa basıldığında program sonlanıyor.//
    

	
	
	
	}
	

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
