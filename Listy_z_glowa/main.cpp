//Operacje na listach z glowa (atrapa) cd.
//Lal. 03.
//Grupa- Marzec
//Damian Lamonski 
//Zajecia 1-4
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
    link p = lista->next;
    while(p != nullptr)
    {
        if(p->info == x)
        {
            return true;
        }
        p = p->next;
    }   
    return false;
    
    /*
    while(p != nullptr and p->info != x)
    {
         p = p->next;           
    }
    if(p == nullptr )
    {
        return false;
    }
    else
    {
        return true;
    }
    */
}
//usuwa element za wezlem wskazywanym przez p;
void usun(link p)
{
    link tmp; //node * tmp;
    tmp=p->next;
    p->next = tmp->next; 
    delete tmp;
}

//usuwa wszystkie elementy listy
void wyczysc_liste(link lista)
{
    while(lista->next != nullptr)
    {
        usun(lista);        
    }
}

//wstaw x na koniec listy
void wstaw_na_koniec(link lista, Item x)
{
    node * p = lista;
    while (p->next  != nullptr)
    {
        p = p->next;
    }
       wstaw(p, x);
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
        cout<<"[5] usun pierwszy element listy\n";
        cout<<"[6] wyczysc liste \n";
        cout<<"[7] wstaw na koniec listy\n";
        cout<<"[8] \n\n";
        cout<<"\n";
        cin>>wybor;
        switch(wybor)
        {
            case 1 : create(lista); cout<< "Lista utworzona:\n" ; break;
            case 2 :
                cout << "Podaj x: ";
                cin >> x; 
                wstaw(lista, x) ;
                break;
            case 3 : 
                    wypisz(lista);  
                    break;
            case 4 : 
                    cout << "podaj x do wyszukania: "; 
                    cin >> x;
                    if(jest_iter(lista, x) == true)
                    {
                        cout << x << " jest na liscie" << endl;
                    }
                    else
                    {
                        cout << x << " nie ma na liscie" << endl;
                    }
                break;
            case 5 : 
                    usun(lista);  
                    break;
            case 6 : 
                    wyczysc_liste(lista);  
                    break;
            case 7 : 
                cout << " podaj x do wstawienia: ";
                cin >> x;
                wstaw_na_koniec(lista, x);
                break;
            case 8 : ;  break;
            case 9 : ;  break;
    }

    }while(wybor);
    
    wyczysc_liste(lista);
    //usuwamy glowe listy
    delete lista;

	return 0;
}
