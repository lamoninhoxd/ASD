//Tablicowa implementacja kolejki
//Autor AT
//Lab 05 - grupa marcowa
//Damian Lamonski

#include <iostream>
#include <cstdlib>
using namespace std;

int const LIMIT = 30;
struct Kolejka
{
    int tab[LIMIT];
    int rear; //indeks ostatniego elementu kolejki
    int front; //indeks pierwszego elementu kolejki
};

//Tworzy kolejke pusta
void makeNull(Kolejka &Q)
{
  Q.rear = 0;
  Q.front = 1;
}

//Sprawdza czy kolejka jest pusta
bool empty(Kolejka Q)
{
	// return ((Q.rear+1) % LIMIT == Q.front ? true : false);
	return (Q.rear+1) % LIMIT == Q.front;
}

//Sprawdza czy kolejka jest pelna
bool full(Kolejka Q)
{
	return (Q.rear +2) % LIMIT == Q.front;
}

//Wstawia element x na koniec kolejki Q
void enqueue(Kolejka &Q, int x)
{ 
  if(!full(Q)){
    Q.rear = (Q.rear + 1) % LIMIT;
    Q.tab[Q.rear] = x;
  }
}

//Usuwa element z pocz¹tku kolejki
void dequeue(Kolejka &Q)
{
    if(!empty(Q)){
  	Q.front = (Q.front + 1) % LIMIT;
  }
}

//Zwraca element z poczatku kolejki
int first(Kolejka Q)
{
    return Q.tab[Q.front];
}

//wypisuje kolejke
void print(Kolejka Q)
{
    if(!empty(Q))
	{
		int i;
		i = Q.front;
		while(i != (Q.rear + 1) % LIMIT)
		{
      		cout << Q.tab[i] << " ";
      		i = (i+1) % LIMIT;
    	}
	}
}



int main()
{
    Kolejka kolejka;
        makeNull(kolejka);
        
    for(int i=0; i<20; i++){
        enqueue(kolejka, i);
    }
    print(kolejka);
        for(int i=0;i<15;i++){
        dequeue(kolejka);
    }
    print(kolejka);
        
    for(int i=0;i<20;i++){
        enqueue(kolejka, i);
    }
    print(kolejka);
    for(int i=0;i<20;i++){
        enqueue(kolejka, i);
    }
    print(kolejka);
    return 0;
}
