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

bool is_left(const char & c) {
    return c == '{' || c == '(' || c == '[';
};
char left_of(const char & c) {
    switch (c) {
        case ')':   
            return '(';
        case '}':   
            return '{';
        case ']':   
            return '[';
        default: 
            return ' ';
    }       
};

int main() {
    std::string s = "({[]})[";

    std::stack<char> st;
    for (char& c : s) {
        if (is_left(c)) {
            st.push(c);
        } else {
            if (st.empty() || st.top() != left_of(c)) {
                std::cout << "False" << std::endl;
            } else {
                st.pop();
            }
        }
    }
    std::string res = st.empty() ? "True" : "False";
    std::cout << res << std::endl;
    return 0;
}