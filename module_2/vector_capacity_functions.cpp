#include<bits/stdc++.h>
using namespace std;

int main(){
  vector <int> v;
  cout << v.size() << endl;
  // cout << v.capacity() << endl;
  // cout << v.max_size() << endl;

  v.push_back(20);
  // cout << v.capacity() << endl;
  v.push_back(30);
  // cout << v.capacity() << endl;
  v.push_back(40);
  // cout << v.capacity() << endl;
  v.push_back(40);
  // cout << v.capacity() << endl;
  v.push_back(40);
  // cout << v.capacity() << endl;
  v.push_back(40);
  // cout << v.capacity() << endl;
  v.push_back(40);
  // cout << v.capacity() << endl;
  cout << v.size() << endl;
  v.resize(4);
  v.resize(7,200);


  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  return 0;
}