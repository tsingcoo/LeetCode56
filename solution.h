//
// Created by 王青龙 on 22/02/2017.
//

#ifndef LEETCODE56_SOLUTION_H
#define LEETCODE56_SOLUTION_H

#include <vector>

struct Interval {
    int start;
    int end;

    Interval() : start(0), end(0) {}

    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    std::vector<Interval> merge(std::vector<Interval> &intervals);
};

#endif //LEETCODE56_SOLUTION_H
