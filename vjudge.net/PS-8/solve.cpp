#include <iostream>
using namespace std;

int main(){
    int p, q, r , R1, R2, R3, R4, R5, R6, mt;
    cin >> p >> q >> r;
    
    R1 = p + q;
    R2 = r + q;
    R3 = p + r;
    R4 = q + r;
    R5 = r + p;
    R6 = q + p;

    mt = R1; 

    if (R2 < mt){
        mt = R2;
    }
    
    if (R3 < mt){
        mt = R3;
    }
    
    if (R4 < mt){ 
        mt = R4;
    }
    
    if (R5 < mt){
        mt = R5;
    }
    
    if (R6 < mt){
        mt = R6;
    }
    
    cout << mt << endl;

    return 0;
}

