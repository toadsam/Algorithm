#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin >> N;
    unordered_map<int,int> cardCount;
    for(int i = 0; i < N; i++)
    {
        int card;
        cin >> card;
        cardCount[card]++;
    }
    
    int M;
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        int query;
        cin >> query;
        cout << cardCount[query] << ' ';
        
    }
    cout << '\n';
    return 0;
    
}