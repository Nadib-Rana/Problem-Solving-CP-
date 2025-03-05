#include<iostream>
#include<string>

int main (){
    int samevalu =  0;
   std::string s;
    std::cin >> s;
    for (int i = 0; i < s.size(); i++){
        for (int j = i+1; j < s.size(); j++){
            if (s[i] == s[j]){
                samevalu++;
                break;
            }
        }
    }
    std::cout << ((s.size()-samevalu)%2 == 0 ? 
    "CHAT WITH HER!" : "IGNORE HIM!") 
    << std::endl;
}
