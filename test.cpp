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

void removeDuplicateStars(string &p)
{
    stringstream ss;
    string prev = "";
    for (auto c : p)
    {
        if (c != '*' || prev != "*")
        {
            ss << c;
        }
        prev = c;
    }
    ss >> p;
}
int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {2, 8, 8};
    int m = nums1.size();
    int n = nums2.size();
    int l1 = 0;
    int r1 = m - 1;
    int l2 = 0;
    int r2 = n - 1;
    while (r1 >= l1 && r2 >= l2)
    {
        int mid11 = l1 + (r1 - l1) / 2;
        int mid12 = l1 + (r1 + 1 - l1) / 2;
        int mid21 = l2 + (r2 - l2) / 2;
        int mid22 = l2 + (r2 + 1 - l2) / 2;
    cout << r1 << endl;
    cout << l1 << endl;
    cout << r2 << endl;
    cout << l2 << endl;
        if ((nums1[mid11] + nums1[mid12]) / 2.0 < (nums1[mid11] + nums1[mid12]) / 2.0)
        {
            l1 = mid11;
            r2 = mid22 - 1;
        }
        else if ((nums1[mid11] + nums1[mid12]) / 2.0 > (nums1[mid11] + nums1[mid12]) / 2.0)
        {
            r1 = mid11;
            l2 = mid21 + 1;
        }
        else
        {
            return (nums1[mid11] + nums1[mid12]) / 2.0;
        }
    }
    return r1 >= l1 ? (nums1[r1] - nums2[l1]) / 2.0 : (nums1[r2] - nums2[l2]) / 2.0;
}