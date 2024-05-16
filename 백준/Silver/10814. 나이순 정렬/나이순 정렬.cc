#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Member {
    int age;
    string name;
    int order; 
};

int main() {
    int n;
    cin >> n;
    
    vector<Member> members(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> members[i].age >> members[i].name;
        members[i].order = i; 
    }
    
    stable_sort(members.begin(), members.end(), [](const Member &a, const Member &b) {
    if (a.age == b.age) {
        return a.order < b.order; 
    }
    return a.age < b.age; 
});
    
    for (int i = 0; i < members.size(); i++) {
        cout << members[i].age << " " << members[i].name << "\n";
    }
    
    return 0;
}