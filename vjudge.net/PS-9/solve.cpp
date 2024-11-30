#include <iostream>
using namespace std;

int main(){
  
  int N, F_Pay, paid, paid_back = 0;
  cin >> N;
  
  F_Pay = N * 800; 
  paid_back = (N / 15) * 200; 
  
  paid = F_Pay - paid_back;
  
  cout << paid << endl; 
  return 0;
}

