/**
* @file Node.cpp
* @description Bağlı Listenin Kurucu Fonksiyonunun İçinideki data ve next  Değerlerini Atama
* @course 1-B
* @assignment 1.Ödev
* @date 20.07.2023 ile 27,07.2023 Arası
* @author İlyas Kalfa ve Halil İbrahim Boztaş ve ilyas.kalfa@ogr.sakarya.edu.tr ve halil.boztas@ogr.sakarya.edu.tr

*/

#include "Node.hpp"

Node::Node(const int& data=int(),Node *next =nullptr){
    this->data=data;
    this->next=next;
}
