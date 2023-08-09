/**
* @file LinkedList.cpp
* @description Dosyadan Aldığımız Verileri Bağlı Listeye Ekleme ve Data nın Hangi İndexte Olduğunu Bulma
* @course 1-B
* @assignment 1.Ödev
* @date 20.07.2023 ile 27,07.2023 Arası
* @author İlyas Kalfa ve Halil İbrahim Boztaş ve ilyas.kalfa@ogr.sakarya.edu.tr ve halil.boztas@ogr.sakarya.edu.tr

*/

#include "LinkedList.hpp"
#include "Node.hpp"

Node *LinkedList::FindPrevByPosition(int position){
        if(position<0 || position > size) throw "index out of range";
        int index=1;
        for(Node * itr =head;itr!=nullptr;itr=itr->next,index++){
            if(position==index) return itr;
        }
        return NULL;
}
    
    LinkedList::LinkedList() {
        head = NULL;
        size=0;
    }

    int LinkedList::Count() const{
        return size;
    }
    bool LinkedList::isEmpty(){
        return head=NULL;
    }

    
	void LinkedList::removeAt(int index){
		if(isEmpty()) throw "Empty list";
		Node *del;
		Node *prev = FindPrevByPosition(index);
		del = prev->next;
		prev->next = prev->next->next;
			
		delete del;
	}
	void LinkedList::clear(){
		while(!isEmpty())
			removeAt(0);
	}
	LinkedList::~LinkedList(){
		clear();	
                cout<<"yok oldum"<<endl;

		delete head;
	}




   
   

    // Yeni bir düğüm ekleyen fonksiyon
    void LinkedList::add(const int& item){
        insert(size,item);
    }
    void LinkedList::insert(int index,const int& item){
        if(index==0) {
            head= new Node(item,head);
        }
        else{
            Node *p=FindPrevByPosition(index);  
            p->next=new Node(item,p->next);
        }
        size++;
    }

    Node *LinkedList::elementAt(int index){
        if(index<0 || index >=size) return NULL;
        Node *tmp=head;
        for(int i=0;i<index;i++){
            tmp=tmp->next;
        }
        return tmp;
    }
