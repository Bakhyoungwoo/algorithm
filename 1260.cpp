//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//vector<vector<int>> A;
//vector <bool> visited;
//
//void DFS(int node) {
//    cout << node << " ";
//    visited[node] = true;
//
//    for (int i = 0; i < A[node].size(); i++) {
//        int nextNode = A[node][i];
//        if (!visited[nextNode]) {
//            DFS(nextNode);
//        }
//    }
//}
//void BFS(int node)
//{
//
//    queue<int> q;
//    q.push(node);
//    visited[node] = true;
//    while (!q.empty()) {
//        int now = q.front();
//        q.pop();
//        cout << now << " ";
//        for (int i : A[now])
//        {
//            if (!visited[i]) {
//                visited[i] = true;
//                q.push(i);
//            }
//        }
//    }
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cout.tie(NULL);
//    cin.tie(NULL);
//
//    int node, edge, start;
//    cin >> node >> edge >> start;
//
//    A.resize(node + 1);
//
//    for (int i = 0; i <edge; i++)
//    {
//        int start, end;
//        cin >> start >> end;
//        A[start].push_back(end);
//        A[end].push_back(start);
//    }
//    for (int i = 0; i < node; i++)
//    {
//        sort(A[i].begin(), A[i].end());
//    }
//    visited.resize(node + 1, false);
//    DFS(start);
//    fill(visited.begin(), visited.end(), false);
//    cout << endl;
//    BFS(start);
//}