#include <iostream>
#include <vector>

using namespace std;

bool condition(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first && a.second < b.second;
}

int main()
{
    vector<pair<int, int>> nums = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    bool exists = any_of(nums.begin(), nums.end(), [](pair<int, int> a)
                         { return condition(a, {9, 10}); });

    if (exists)
    {
        cout << "Two pairs exist" << endl;
    }
    else
    {
        cout << "Two pairs do not exist" << endl;
    }

    return 0;
}
