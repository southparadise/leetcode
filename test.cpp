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

    string origin = s;
    sort(s.begin(), s.end());
    cout << origin << endl;
    cout << s << endl;

    return 0;
}