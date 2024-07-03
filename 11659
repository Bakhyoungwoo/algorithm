#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define MAX_SIZE 1000

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int a, s;
    cin >> a >> s;
    int num;
    
    vector<int> sum(a + 1);
    sum[0] = 0;
    for (int i = 1; i <= a; i++)
    {
        cin >> num;
        sum[i] = sum[i - 1] + num;
    }

    int start, end;
    for (int i = 0; i < s; i++)
    {
        cin >> start >> end;
        cout << sum[end] - sum[start-1] << "\n";
    }
}