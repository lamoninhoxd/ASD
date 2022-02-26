//Operacje na listach z glowa (atrapa)
//Damian Lamonski

#include <iostream>
using namespace std;

typedef int Item;

struct node
{
	Item  info;
	node *next;
};
typedef node* link;
link lista;

void create(link &lista)
{
    lista = new node;  
    lista->next = nullptr; // NULL  
}
//wstawienie x za elementem wskazywanym przez p
void wstaw(link p, Item x)
{
   link temp = new node;
   temp->next = p->next;
   p->next = temp;
   temp->info = x ; 
}
//wypisuje liste zaczynaj¹c od elementu wskazywanego przez glowe
void wypisz(link lista)
{
    node* P = lista->next;
    
    while(P != nullptr)
    {
      cout << P->info << " ";
      P = P->next;
    }
    cout << "\n";
}


//sprawdza czy x jest na liscie (funkcja iteracyjna)
bool jest_iter(link lista, Item x)
{
    return true;
}



int main()
{
   Item x;
	int wybor;
    do
    {
        cout<<"[0] Koniec\n";
        cout<<"[1] Utworz liste\n";
        cout<<"[2] wstaw x\n";
        cout<<"[3] wypisz liste\n";
        cout<<"[4] sprawdz czy x jest na liscie\n";
        cout<<"[5] \n";
        cout<<"[6] \n";
        cout<<"[7] \n";
        cout<<"[8] \n\n";
        cout<<"\n";
        cin>>wybor;
        switch(wybor)
        {
            case 1 : create(lista); cout<< "Lista utworzona:\n" ; break;
            case 2 :
                cout << "Podaj x";
                cin >> x; 
                wstaw(lista, x) ;
                break;
            case 3 : 
                    wypisz(lista);  
                    break;
            case 4 : ;  break;
            case 5 : ;  break;
            case 6 : ;  break;
            case 7 : ;  break;
            case 8 : ;  break;
            case 9 : ;  break;
    }

    }while(wybor);

    //system("PAUSE");

	return 0;
}
