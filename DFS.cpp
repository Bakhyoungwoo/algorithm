//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// 전역 변수 선언
//vector<vector<int>> graph;  // 그래프를 저장할 2차원 벡터
//vector<bool> isVisited;     // 방문 여부를 저장할 벡터
//int v, e;                   // 정점의 수와 간선의 수
//
//// 그래프 입력 함수
//void input() {
//    cin >> v >> e;
//    // 메모리 공간 할당 및 초기화
//    graph.assign(v + 1, vector<int>(0));//0값으로 v+1 만큼 할당
//    isVisited.assign(v + 1, false);
//
//    for (int i = 0; i < e; i++) {
//        int s, e;
//        cin >> s >> e;
//        // 양방향 간선을 연결시킨다.
//        graph[s].emplace_back(e);
//        graph[e].emplace_back(s);
//    }
//}
//
//// DFS 함수
//void DFS(int cur) {
//    isVisited[cur] = true; // 현재 노드를 방문 처리
//    cout << "방문한 노드 : " << cur << '\n';
//
//    // 현재 정점과 간선으로 연결되어 있는 모든 정점들을 둘러본다.
//    for (int i = 0; i < graph[cur].size(); i++) {
//        int next = graph[cur][i];
//        // 만일 방문하지 않았다면 매개변수로 전달하여 DFS를 재귀적으로 호출한다.
//        if (!isVisited[next]) {
//            DFS(next);
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cout.tie(NULL);
//    cin.tie(NULL);
//    // 그래프 입력
//    input();
//
//    // DFS 시작 (보통 1번 노드부터 시작한다고 가정)
//    DFS(1);
//
//    return 0;
//}
