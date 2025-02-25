#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        int p, v, t;
        std::cin >> p >> v >> t;
        if (p + v + t >= 2) {
            count++;
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}
