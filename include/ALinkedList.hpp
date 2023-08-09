#ifndef ALINKEDLIST_HPP
#define ALINKEDLIST_HPP

#include <iostream>
#include <string>
#include <fstream> 
#include <sstream>
#include "ANode.hpp"


using namespace std;

class ALinkedList{
public:
    int size;             // Düğümün Boyutu
    ANode *head;          // Düğümün İlk Adresi

    ANode *elementAt(int);               //Veri Döndüren Fonksiyon
    ANode *FindPrevByPosition(int);      // Bir Öncesine Giden Fonksiyon 
    ALinkedList();           //Kurucu Fonksiyon
    int Count() const;      //Size Döndüren Fonksiyon
    bool isEmpty();         //Dolu ve Boş mu Diye Kontrol Yapan
    void add(LinkedList* ,LinkedList* );   //Ekleme Fonksiyonu 
    void insert(int,LinkedList*,LinkedList*);       //Eklemeyi Kullanmak için Kullanığımız Fonksiyon
    void degistir(int, int);            //Bağlı Listeleri Değiştiren Fonksiyon
    void ortalamaAl();                  //Ortalama Alır

};
#endif
