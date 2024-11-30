#include <iostream>
using namespace std;

int main() {
    int S;
    cin >> S;

    int for_h = (S / 3600);
    int in_Second_H = for_h * 3600;

    int remain_S = S - in_Second_H;
    int for_m = (remain_S / 60);
    int in_Second_M = for_m * 60;

    int for_S = remain_S - in_Second_M;

    cout << for_h << ":" << for_m << ":" << for_S << endl;

    return 0;
}
