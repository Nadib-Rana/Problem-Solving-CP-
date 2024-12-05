#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i = 0; i < N; i++){
    int a, b, c;
    cin >>a;
    cin >>b;
    cin >>c;
    
    if(a+b>=10 || b+c>=10 || c+a>=10){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    }
    
    return 0;
}
