#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

vector <vector<int>> A;
vector <bool> visited;
void DFS(int v)
{
    visited[v] = true;

    for (int i = 0; i < A[v].size(); i++)
    {
        int next = A[v][i];
        if (!visited[next]) {
            DFS(next);
        }
    }
}
int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int node, edge;
    cin >> node >> edge;

    A.resize(node + 1);
    visited.resize(node + 1, false);

    for (int i = 0; i < edge; i++)
    {
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }

    int count = 0;


    for (int i = 0; i < node+1; i++)
    {
        if (!visited[i])
        {
            count++;
            DFS(i);
        }
    }
    cout << count-1;


}

