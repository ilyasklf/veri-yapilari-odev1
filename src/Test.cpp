/**
* @file Test.cpp
* @description Dosya Okuma ve Bölme İşlemlerinin Yapıldığı ve Kullanıcıdan Değiştirelecek Kısımları Alıp Değiştirip Ortalama Değerinin Ekrana Yazıldığı Kısım
* @course 1-B
* @assignment 1.Ödev
* @date 20.07.2023 ile 27,07.2023 Arası
* @author İlyas Kalfa ve Halil İbrahim Boztaş ve ilyas.kalfa@ogr.sakarya.edu.tr ve halil.boztas@ogr.sakarya.edu.tr

*/

#include "Node.hpp"
#include "ANode.hpp"
#include "LinkedList.hpp"
#include "ALinkedList.hpp"

int main() {

    ifstream dosya("Sayilar.txt"); // Dosyayı aç

    if (!dosya.is_open()) {
        cerr << "Dosya açılamadı." << endl;
        return 1;
    }

    string satir;
    int sayi;
    int satirSayisi=0;
    int ondalikBasamak , birlerBasamak;
 
 //A LİSTESİ OLUŞTUR NEW 
    ALinkedList* a = new ALinkedList();

    while(getline(dosya, satir)){ // İlk satırı oku
        istringstream iss(satir);
        LinkedList *ondalikListe= new LinkedList();
        LinkedList *birlerListe=new LinkedList();

        while (iss >> sayi) {
            birlerBasamak=sayi%10;
            ondalikBasamak=sayi/10;
            ondalikListe->add(ondalikBasamak);
            birlerListe->add(birlerBasamak);
        }
        //A LİSTESİNE ONDALİKLİSTE VE BİRLER LİSTE EKLE
        a->add(ondalikListe,birlerListe);
        satirSayisi++;
    }
    int konumA,konumB;
    cout<<"KonumA:";
    cin>>konumA;
    cout<<endl;
    cout<<"KonumB:";
    cin>>konumB;
    cout<<endl;

    a->degistir(konumA,konumB);

    a->ortalamaAl();
    
    delete a;
   
    return 0;
}
