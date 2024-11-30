#include <iostream>
using namespace std;

int main() 
{  
    int n;
    cin >> n;

    string star  ;

    for (int i = 1; i <= n; i++) {
        star += "*"; 
    }
    cout << star <<endl;
    for (int j = 2; j <= n; j++)
    {
        cout << star  << endl;
    }

    return 0;
}
