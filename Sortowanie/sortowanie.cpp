#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()

{
  vector<int> d;int ch;
  cin >> ch;cin.get();
  
  while(ch!=0){
  d.push_back(ch);
  cin >> ch;
  cin.get();
}

  sort(d.begin(),d.end());
  cout << 0 << endl;
  
  for(int i = 0; i < d.size();++i)
  cout << d[i] << endl;
  return 0;
}