//Damian Lamonski
#include <iostream>
using namespace std;

typedef int Item;

struct node{

    Item info;
    node* next;
};

typedef node* link;

link lista;

void create(link &lista){
    lista = new node;  
    lista->next = nullptr; // NULL  
}

void wstaw(link p, Item x){
   link temp = new node;
   temp->next = p->next;
   p->next = temp;
   temp->info = x ; 
}

void sortuj(link p){
    node* P = lista->next;
    node* temp = lista;
    node* start = lista;
    int tmp;
    while(P != nullptr)
    {
      if(P->info < temp->info){
            tmp = P->info;
            
            P=start->next;
            while(P->info != tmp){
                if(P->info < tmp){
                    P->info = temp->info;
                    temp->info = tmp;
                }
                P=P->next;
            }

            
            
            
            // P=start->next;
            // temp=start;
        }
        P=P->next;
        temp=temp->next;
    }
}

void wypisz(link lista)
{
    node* P = lista->next;
    
    while(P != nullptr)
    {
      cout << P->info << " ";
      P = P->next;
    }
}

int main(){
    Item x;
    node* p = lista;
    create(lista);
    do{
        cin>>x;
        if(x==0) {
            wstaw(lista, x) ;
            break;
        }
        wstaw(lista, x) ;
    }while(1);
    sortuj(lista);
    wypisz(lista);
}