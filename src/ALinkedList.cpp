/**
* @file ALinkedList.cpp
* @description LinkedListteki Verileri Farklı Bir Bağlı Listeye Ekleyip Oradan Yer Değiştirme ve Ortalama İşlemlerini Yapma
* @course 1-B
* @assignment 1.Ödev
* @date 20.07.2023 ile 27,07.2023 Arası
* @author İlyas Kalfa ve Halil İbrahim Boztaş ve ilyas.kalfa@ogr.sakarya.edu.tr ve halil.boztas@ogr.sakarya.edu.tr

*/

#include "ANode.hpp"
#include "ALinkedList.hpp"

ANode *ALinkedList::elementAt(int index){
    if(index<0 || index >=size) throw "index of range";
    ANode *tmp=head;
    for(int i=0;i<index;i++){
        tmp=tmp->next;
    }
    return tmp;
}

ANode *ALinkedList::FindPrevByPosition(int position){
    if(position<0 || position > size) throw "index out of range";
    int index=1;
    for(ANode * itr =head;itr!=nullptr;itr=itr->next,index++){
        if(position==index) return itr;
    }

    return NULL;
}
ALinkedList::ALinkedList() {
    head = NULL;
    size=0;
}

int ALinkedList::Count() const{
    return size;
}
bool ALinkedList::isEmpty(){
    return head=NULL;
}
void ALinkedList::add(LinkedList* onlar,LinkedList* birler){
    insert(size,onlar,birler);
}
    
void ALinkedList::insert(int index,LinkedList* onlar,LinkedList* birler){
    if(index==0) {
        head= new ANode(onlar,birler,head);
    }
    else{
        ANode *p=FindPrevByPosition(index);  
        p->next=new ANode(onlar,birler,p->next);
    }
    size++;
}


void ALinkedList::degistir(int konumA, int konumB)
{
    ANode* onlar = elementAt(konumA); 
    ANode* birler = elementAt(konumB); 

    LinkedList* temp = birler->birler;
    birler->birler = onlar->onlar;
    onlar->onlar = temp;
}

void ALinkedList::ortalamaAl(){
    
        
    int index = 0;
    int sayi = 0;
    long double satirToplam = 0;
    long double genelToplam = 0;

    for(int i = 0; ;i++){ //kacinci indis?
        sayi=Count();
        satirToplam = 0;
        index = 0;
        for(int j = 0; j<Count(); j++){ //Alistenin kacinci elemani
            if(elementAt(j)->onlar->elementAt(i)==NULL){
                sayi=sayi-1;
                index++;
                continue;
            }
            satirToplam += elementAt(j)->onlar->elementAt(i)->data; 
        }
        if(sayi!=0 && satirToplam != 0)
        {
            genelToplam += satirToplam/sayi;
        }
        if(index == size)
               break;
    }

    index = 0;
    sayi = 0;
    satirToplam = 0;
    long double genelToplamBirler = 0;

    for(int i = 0; ;i++){ //kacinci indis?
        sayi=Count();
        satirToplam = 0;
        index = 0;
        for(int j = 0; j<Count(); j++){ //Alistenin kacinci elemani
            if(elementAt(j)->birler->elementAt(i)==NULL){
                sayi=sayi-1;
                index++;
                continue;
            }
            satirToplam += elementAt(j)->birler->elementAt(i)->data; 
        }
        if(sayi!=0 && satirToplam != 0)
        {
            genelToplamBirler += satirToplam/sayi;
        }
            

        if(index == size)
            break;
    }
    cout<<"UST: "<<genelToplam<<endl<<"ALT: "<<genelToplamBirler<<endl;
}

	
    
