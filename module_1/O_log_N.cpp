#include<bits/stdc++.h>
using namespace std;

int main(){
  	int n;
    cin >> n;
    // while(n > 0){
    //   int digit = n % 10;
    //   cout << digit ;
    //   n /= 10;
    // }
    for (int i = 1; i < n; i*=2){
      cout << i << endl;
    }
    
}