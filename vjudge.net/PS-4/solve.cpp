#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  
    long long num, max = -1e18, min = 1e18;  
    for (int i = 0; i < n; i++) {
        cin >> num;  
        if (num > max) 
          max = num;
        if (num < min)
          min = num;
    }
    cout << max << " " << min << endl;
    return 0;
}

