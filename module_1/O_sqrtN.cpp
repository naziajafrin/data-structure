#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  // for(int i = 1; i * i <= n; i++)
  for(int i = 1; i <= sqrt(n); i++){
    if(n % i == 0){
      cout << i  << " ";
      cout << n/i << endl;
    }

  }
}