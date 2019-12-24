#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
  int findSpecialInteger(vector<int>& arr) {
    int goal = arr.size() / 4;
    int counting = arr[0];
    int count = 0;
    for (int i = 0; i < arr.size(); ++i) {
      if (counting == arr[i]) {
        if (++count > goal)
          return counting;
      } else {
        counting = arr[i];
        count = 1;
      }
    }
    return -1;
  }
};

void test1() {
    vector<int> v1{1,2,2,6,6,6,6,7,10};


    cout << "6 ? " << Solution().findSpecialInteger(v1) << endl;
}

void test2() {

}

void test3() {

}