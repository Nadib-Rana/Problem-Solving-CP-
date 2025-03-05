#include <iostream>
#include <string>
#include <vector>
using namespace std;

int minimum_length(string s) {
    vector<char> stack;
    for (char c : s) {
        if (!stack.empty() && stack.back() == c) {
            stack.pop_back();
        } else {
            stack.push_back(c);
        }
    }
    return stack.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minimum_length(s) << endl;
    }
    return 0;
}
