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
    vector<vector<bool>> res(4, vector<bool>(5));
    for (auto v : res) {
        for (auto i : v) {
            bool ret = i == false;
            cout << ret << endl;
            cout << i << endl;
            cout << "___" << endl;
        }
    }

    return 0;
}