#include <iostream>
using namespace std;

int main() {
    int n ,i ,count = 0;
    cin >> n;
    for (i =100 ; i < 1000; i++){
        int sum = (i/100) + (i/10)%10 + (i%10);
        if (n == sum){
            count++;
        }
    }
     
    cout << count << endl;
    
   for (i = 100; i < 1000; i++){
        int sum = i/100 + (i/10)%10 + i%10;
        if (n == sum){
            cout << i << endl;
        }
    }
    
}


