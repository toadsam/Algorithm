//규칙 -> return 의 곱은 brown 과 yellow의 합과 같다.
//규칙 -> (return의 합 -2) *2 = brown과 같아야 한다.
// 1. brown + yellow = w * h
// 2. (w + h -2) * 2 = brown ->
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int brown, int yellow) {
    for(int b = 1; b*b <= yellow; b++)
    {
        if(yellow%b != 0) continue;

        int a = yellow/b;

        int w = a + 2;
        int h = b + 2;

        if(w * h == brown + yellow)
        {
            if(w < h) swap(w,h);
            return{w,h};
        }
    }
    return {};
}
