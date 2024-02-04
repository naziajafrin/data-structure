#include<bits/stdc++.h>
using namespace std;

int main(){
  vector <int> x = {10, 20, 30, 40};
  // vector <int> v = {1, 2, 3};
  // v = x;

  x.pop_back();
  x.push_back(500);
  for(int i = 0; i < x.size(); i++){
    cout << x[i] << " ";
  }
  return 0;
}