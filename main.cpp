#include <iostream>
#include "solution.h"
int main() {
    Solution s;
    std::vector<Interval> v = {Interval(1,3), Interval(2,6), Interval(8,10), Interval(15,18)};
    std::vector<Interval> res;
    res = s.merge(v);

    return 0;
}