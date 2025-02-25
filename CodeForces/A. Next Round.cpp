#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    int kth = scores[k-1];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= kth && scores[i] > 0)
        {
            count++;
        }
    }
    cout << count << endl; 
    return 0; 
}