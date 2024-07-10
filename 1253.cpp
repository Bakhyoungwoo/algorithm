#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;
int connect;
int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<int> A(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        long result = A[i];
        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            if (A[start] + A[end] == result) {
                if (start != i && end != i) {
                    count++;
                    break;
                }

                else if (start == i)
                {
                    start++;
                }
                else if (end == i)
                {
                    end--;
                }
            }
            else if (A[start] + A[end]<result)
            {
                start++;
            }
            else
                end--;
        }
    }
    cout << count;
}