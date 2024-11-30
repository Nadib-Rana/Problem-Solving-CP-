#include <iostream>
using namespace std;

int main() {
    int n, Factorial = 1;
    int num;
    cin >> n;  
    for (int i = 1; i <= n; i++) {
        Factorial = Factorial*i;
    }

    cout << "Factorial: " << Factorial <<endl;
    return 0;
}
