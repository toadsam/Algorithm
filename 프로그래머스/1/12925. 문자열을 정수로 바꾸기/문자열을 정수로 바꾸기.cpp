#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    bool isMimus = false;
    
    if(s[0] == '-')
    {
        answer = stoi(s.substr(1,sizeof(s)-1));
}
    answer = stoi(s);
    return answer;
}