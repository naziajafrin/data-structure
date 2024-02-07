#include<bits/stdc++.h>
using namespace std;

vector <int> addition(vector<int> x, vector<int> y){
  vector <int> c;
  c = y;
  c.insert(c.end(), x.begin(), x.end());
  return c;
}

int main(){
  int n;
  cin >> n;
  vector <int> a;
  for(int i = 0; i < n; i++){
    int x; 
    cin >> x;
    a.push_back(x);
  }
  vector <int> b;
  for(int i = 0; i < n; i++){
     int x; 
    cin >> x;
    b.push_back(x);
  }
  vector <int> d = addition(a,b);
  for(int result : d){
    cout << result << " ";
  }

  return 0;
}