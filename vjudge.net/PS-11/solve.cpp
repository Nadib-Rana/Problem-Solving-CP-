#include <iostream>
using namespace std;

int main() {
    int t, storage = 5; 
    cin >> t;

    for (int i = 1; i <= t; i++) {
        long long N; 
        cin >> N;

        int need_B = (N + storage - 1) / storage;

        
        cout << need_B << endl;
    }

    return 0;
}

