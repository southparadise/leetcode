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
    int n = 34;
    int div = n / 10;
    int mod = n % 10;

    cout << n / 10 << endl;
    cout << div << endl;
    cout << mod << endl;

    return 0;
}