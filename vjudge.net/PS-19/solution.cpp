#include<iostream>
using namespace std;
int main (){
    int T;
    cin >> T;
  
    for (int i = 0; i < T ; i++){
        int N;
        cin >> N;
        
        int sum = 0;
        for (int j = N; j > 0; j/=10){
            sum = sum + (j%10);
        }
        cout << sum <<endl;
    }
}
