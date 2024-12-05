#include <iostream>
using namespace std;

int main() {
    int N, i, j;
    cin >> N;
    for (i = 1; i <= N; i++){
        for (j = 1; j <= N ; j++){
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
    
}



// *********************************************** have issues ***************************************************
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
