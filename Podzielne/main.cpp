//Damian Lamonski
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, k;
    int l=0;
    cin >> a >> b >> k;
    l=b/k - (a-1)/k;
    // do{
    //     if(a%k==0) l++;
    //     a=a+k;
    // }while(a<=b);
    cout << l;
}