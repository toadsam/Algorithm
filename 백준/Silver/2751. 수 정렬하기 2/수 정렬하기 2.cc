#include <iostream>
#include <vector>
#include <algorithm> // sort 함수를 사용하기 위한 헤더 파일

using namespace std;

int main() {
    ios::sync_with_stdio(false); // C++ 입출력 가속
    cin.tie(nullptr); // cin과 cout의 tie를 끊음

    int n;
    cin >> n; // 수의 개수를 입력받음
    vector<int> numbers(n); // 수를 저장할 벡터

    for (int i = 0; i < n; i++) {
        cin >> numbers[i]; // 수를 입력받아 벡터에 저장
    }

    sort(numbers.begin(), numbers.end()); // 벡터를 오름차순으로 정렬

    for (int number : numbers) {
        cout << number << '\n'; // 정렬된 수를 출력
    }

    return 0;
}