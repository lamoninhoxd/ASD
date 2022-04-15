#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack <int> stos_plaskie;
stack <int> stos_glebokie;

int main(){

    int ilosc_slow;
    int indeks_talerza;
    string irena;
    string jaki_talerz;
    cin>>ilosc_slow;
    do
    {
        cin>>irena>>jaki_talerz;
        if(irena == "dziekuje"){
            cin>>indeks_talerza;
            if(jaki_talerz == "plytki"){
                stos_plaskie.push(indeks_talerza);
            }
            if(jaki_talerz == "gleboki"){
                stos_glebokie.push(indeks_talerza);
            }
        }
        if(irena == "prosze"){
            if(jaki_talerz == "plytki"){
                cout<<stos_plaskie.top()<<endl;
                stos_plaskie.pop();
            }
            if(jaki_talerz == "gleboki"){
                cout<<stos_glebokie.top()<<endl;
                stos_glebokie.pop();
            }
        }

        ilosc_slow--;
    } while (ilosc_slow>0);

    return 0;
}