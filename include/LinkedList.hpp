#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>
#include <string>
#include <fstream> 
#include <sstream>
#include "Node.hpp"

using namespace std;

class LinkedList{
public:
    Node* head;          // Düğümün İlk Adresi
    int size;            // Düğümün Boyutu

    Node *FindPrevByPosition(int);      // Bir Öncesine Giden Fonksiyon 
    
    LinkedList();           //Kurucu Fonksiyon
    int Count() const;      //Size Döndüren Fonksiyon
    bool isEmpty();         //Dolu ve Boş mu Diye Kontrol Yapan
    void add(const int&);   //Ekleme Fonksiyonu 
    void insert(int,const int& );       //Eklemeyi Kullanmak için Kullanığımız Fonksiyon
    Node *elementAt(int);               //Veri Döndüren Fonksiyon
    void removeAt(int );
    void clear();
    ~LinkedList();

};

#endif