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

#include <sstream>

using namespace std;

void removeDuplicateStars (string& p) {
    stringstream ss;
    string prev = "";
    for (auto c : p) {
        if (c != '*' || prev != "*") {
            ss << c;
        }
        prev = c;
    }
    ss >> p;
}
int main() {
    string s = "a**b*c***";
    vector<vector<int>> res;
    vector<int> tmp;

    removeDuplicateStars(s);
    cout << s << endl;
    return 0;
}