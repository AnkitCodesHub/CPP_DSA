// stack using linked list
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
using namespace std;

int main()
{
    // stock prices
    vector<int> arr = {6, 8, 0, 1, 3};

    // next greater element
    stack<int> s;
    vector<int> ans(arr.size(), 0);
    // run a reverse loop from the end of the arr
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (s.size() > 0 && s.top() <= arr[i])
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
    // print
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}