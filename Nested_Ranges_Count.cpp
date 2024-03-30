#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

struct Range
{
    int start;
    int end;
};

void count_range_relationships(const vector<Range> &ranges)
{
    map<int, set<int>> contains;
    map<int, set<int>> contained_by;

    for (int i = 0; i < ranges.size(); i++)
    {
        contains[i] = {};
        contained_by[i] = {};
    }

    sort(ranges.begin(), ranges.end(), [](const Range &a, const Range &b)
         { return a.start < b.start; });

    for (int i = 0; i < ranges.size(); i++)
    {
        for (int j = i + 1; j < ranges.size(); j++)
        {
            if (ranges[i].end >= ranges[j].end)
            {
                contains[i].insert(j);
                contained_by[j].insert(i);
            }
            else
            {
                break; 
            }
        }
    }

    for (int i = 0; i < ranges.size(); i++)
    {
        cout << "Range [" << ranges[i].start << ", " << ranges[i].end << "] contains "
             << contains[i].size() << " ranges and is contained by "
             << contained_by[i].size() << " ranges." << endl;
    }
}

int main()
{
    vector<Range> ranges = {{1, 5}, {2, 4}, {3, 6}, {7, 9}};
    count_range_relationships(ranges);

    return 0;
}
