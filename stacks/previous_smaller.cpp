// stack using linked list
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
using namespace std;
vector<int> prevSmallerElement(vector<int> arr)
{
    vector<int> ans(arr.size(), 0);
    stack<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        while (s.size() > 0 && s.top() >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}

int main()
{
    // stock prices
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = prevSmallerElement(arr);
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
    // next greater element

    return 0;
}