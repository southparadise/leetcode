#include <iostream>

#include <string>
#include <array>
#include <vector>

#include <utility> // pair
#include <tuple>

#include <list>
#include <stack>
#include <queue>
#include <deque>

#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>

#include <functional>
#include <algorithm>

using namespace std;

int main() {
    string s = "({[]})[]";
    vector<vector<int>> res;
    vector<int> tmp;
    for (auto i = 0; i < 5; ++i) {
        tmp.push_back(i); 
        res.push_back(tmp);
        tmp.clear();
    }
    for (auto v : res) {
        for (auto i : v) {
            cout << i << endl;
            cout << "___" << endl;
        }
    }

    return 0;
}