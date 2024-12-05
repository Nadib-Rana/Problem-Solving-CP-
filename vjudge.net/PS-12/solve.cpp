
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;

    cin >> a; 
    cin >> b; 

    double y = static_cast<double>(b) / a; 
    int Cy = ceil(y); 

    cout << Cy << endl; 

    return 0;
}
// *****************************************************************************
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; 
    int Cy = 0; 
    while (a <= b) {
        a = a*3; 
        b = b*2; 
        Cy++;   
    }
    cout << Cy << endl; 
    return 0;
}
