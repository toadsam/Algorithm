#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    int quarter = 25; 
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
    vector<int> answer(4, 0);
    for (int i = 0; T > i; i++)
    {
        int input;
        cin >> input;
        while (0 < input)
        {
            if (quarter <= input)
            {       
                answer[0] = input / quarter;            
                input -= answer[0] * quarter;
            }
            else if (dime <= input)
            {
                answer[1] = input / dime;
                input -= answer[1] * dime;
            }
            else if (nickel <= input)
            {
                answer[2] = input / nickel;
                input -= answer[2] * nickel;
            }
            else if (penny <= input)
            {
                answer[3] = input / penny;
                input -= answer[3] * penny;
            }
        }    
        for (auto a : answer)
            cout << a << " ";
        cout << "\n";
        
        answer.assign(4, 0);
    }
    
    return 0;
}
