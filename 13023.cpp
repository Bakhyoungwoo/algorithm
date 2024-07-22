//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//vector<vector<int>> A;
//vector<bool> visited;
//static bool arrive;
//
//void DFS(int now, int depth) {
//    if (depth == 5 || arrive) {
//        arrive = true; 
//        return;
//    }
//    visited[now] = true;
//    for (int i : A[now])
//    {
//        if (!visited[i])
//        {
//            DFS(i, depth + 1);
//        }
//    }
//
//    visited[now] = false;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0); 
//    cin.tie(0);
//    cout.tie(0); 
//
//    int node, edge;
//    cin >> node >> edge;
//    A.resize(node);
//    for (int i = 0; i < edge; i++)
//    {
//        int start, end;
//        cin >> start >> end;
//        A[start].push_back(end);
//        A[end].push_back(start);
//    }
//
//    visited.resize(node, false);
//    
//    for (int i = 0; i < node; i++) {
//        DFS(i, 1);
//        if (arrive) {
//            break;
//        }
//    }
//
//    if (arrive) {
//        cout << "1" << endl;
//    }
//    else {
//        cout << "0" << endl;
//    }
//
//}