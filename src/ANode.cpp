/**
* @file ANode.cpp
* @description Bağlı Listenin Kurucu Fonksiyonunun İçinde birler onlar ve next Değerlerini Atama
* @course 1-B
* @assignment 1.Ödev
* @date 20.07.2023 ile 27,07.2023 Arası
* @author İlyas Kalfa ve Halil İbrahim Boztaş ve ilyas.kalfa@ogr.sakarya.edu.tr ve halil.boztas@ogr.sakarya.edu.tr

*/

#include "ANode.hpp"

ANode::ANode(LinkedList* onlar,LinkedList* birler,ANode *next =nullptr){
    this->onlar =onlar;
    this->birler = birler;
    this->next = next;
}
ANode::~ANode(){
    cout<<"xxxx";
    delete birler;
    delete onlar;
}