//
// Created by 王青龙 on 22/02/2017.
//

#include "solution.h"

std::vector<Interval> Solution::merge(std::vector<Interval> &intervals) {
    if (intervals.empty()) {
        return {};
    }
    std::sort(intervals.begin(), intervals.end(), [](Interval a, Interval b) { return a.start < b.start; });
    std::vector<Interval> res;
    res.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); ++i) {
        if (res.back().end < intervals[i].start) {
            res.push_back(intervals[i]);
        } else {
            res.back().end = std::max(res.back().end, intervals[i].end);
        }
    }
    return res;
}
