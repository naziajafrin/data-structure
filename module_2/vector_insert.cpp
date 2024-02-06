#include<bits/stdc++.h>
using namespace std;

int main(){
  vector <int> x = {10, 20, 30, 40};
  x.insert(x.begin()+2, 300);
  
  vector <int> v = {9,6,7,9,5};
  x.insert(x.begin()+3, v.begin(), v.end());
  
  for(int v:x){
    cout << v << endl;
  }
  return 0;
}