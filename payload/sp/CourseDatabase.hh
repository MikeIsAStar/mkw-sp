#pragma once

#include <Common.hh>

namespace SP {

class CourseDatabase {
public:
    struct Filter {
        bool race;
        bool battle;
    };

    struct Entry {
        u32 databaseId;
        bool race;
        bool battle;
        u32 courseId;
        u32 timestamp;
    };

    u32 count(Filter filter);
    const Entry &entry(Filter filter, u32 index);

    static CourseDatabase &Instance();

private:
    CourseDatabase();

    void refresh(Filter filter);

    Entry m_entries[42]{
        {3409, false,  true, 33, 32},
        {3410, false,  true, 34, 35},
        {3412, false,  true, 38, 41},
        {3413, false,  true, 32, 33},
        {3415, false,  true, 35, 34},
        {3416, false,  true, 40, 38},
        {3417, false,  true, 37, 40},
        {3418, false,  true, 41, 39},
        {3419, false,  true, 39, 37},
        {3420, false,  true, 36, 36},
        {3422,  true, false, 12, 14},
        {3424,  true, false,  5,  5},
        {3426,  true, false,  6,  6},
        {3427,  true, false, 23, 22},
        {3428,  true, false, 21, 24},
        {3429,  true, false, 22, 29},
        {3430,  true, false, 20, 17},
        {3431,  true, false,  9,  8},
        {3433,  true, false, 14, 12},
        {3435,  true, false, 30, 25},
        {3436,  true, false, 31, 21},
        {3437,  true, false, 19, 30},
        {3438,  true, false, 17, 27},
        {3439,  true, false, 16, 16},
        {3440,  true, false, 18, 23},
        {3441,  true, false,  3, 11},
        {3443,  true, false, 15,  9},
        {3445,  true, false,  8,  0},
        {3447,  true, false, 11, 10},
        {3448,  true, false,  0,  4},
        {3450,  true, false,  1,  1},
        {3452,  true, false, 10, 13},
        {3454,  true, false,  2,  2},
        {3456,  true, false, 28, 31},
        {3457,  true, false, 29, 26},
        {3458,  true, false, 26, 19},
        {3459,  true, false, 27, 20},
        {3460,  true, false, 13, 15},
        {3462,  true, false, 25, 18},
        {3463,  true, false, 24, 28},
        {3464,  true, false,  4,  3},
        {3466,  true, false,  7,  7},
    };
    Filter m_filter{false, false};
    u32 m_count = 0;
    u32 m_internalIndices[42];
};


} // namespace SP
