#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    if (num < 2 ) return false;

    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num%i ==0)
        {
            return false;
        }
    }

    return true;
}

int solution(string numbers)
{
    set<int> nums;

    sort(numbers.begin(), numbers.end());

    do{
        string temp ="";

        for(int i = 0; i < numbers.size(); i++)
        {
            temp += numbers[i];

            nums.insert(stoi(temp));
        }
    } while (next_permutation(numbers.begin(), numbers.end()));

    int answer =0;

    for(int num : nums)
    {
        if(isPrime(num))
        {
            answer++;
        }
    }

    return answer;
}
