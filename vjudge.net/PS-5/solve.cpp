#include <iostream>
using namespace std;

int main() {
    int n, Negative = 0, Positive = 0;
    int num;
    cin >> n;  

    for (int i = 0; i < n; i++) {
        cin >> num;  
        
        if (num < 0) {
            Negative++;  
        } 
        if (num > 0) {
            Positive++;  
        }
    }

    cout << "Positive: " << Positive <<endl;
    cout << "Negative: " << Negative <<endl;
    return 0;
}
