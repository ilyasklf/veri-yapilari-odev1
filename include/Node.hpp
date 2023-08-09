#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <string>
#include <fstream> 
#include <sstream>
using namespace std;

struct Node {
public:
    int data;      // Veri tutar
    Node* next;       // Diğer Elemanın Adresini Tutar
    Node(const int&,Node*);       // Kurucu Fonksiyon
};
#endif