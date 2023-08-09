#ifndef ANODE_HPP
#define ANODE_HPP

#include <iostream>
#include <string>
#include <fstream> 
#include <sstream>
#include "LinkedList.hpp"
using namespace std;


struct ANode {
public:
    LinkedList* onlar;         //Onları Gösterecek Kısım
    LinkedList* birler;        //Bİrleri Gösterecek Kısım
    ANode* next;               //Sonraki Düğümün Adresi
    ANode(LinkedList* ,LinkedList* ,ANode *);           //Kurucu Fonksiyon Oluşturuluyor
    ~ANode();
};

#endif