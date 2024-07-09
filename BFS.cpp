//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//bool visited[9]; // 방문한 노드를 기록하는 배열
//vector<int> graph[9]; // 그래프를 인접 리스트로 저장하는 배열
//
//// BFS 함수 정의
//void bfs(int start) {
//    queue<int> q; // 방문할 노드를 관리하는 큐
//    q.push(start); // 시작 노드를 큐에 삽입
//    visited[start] = true; // 시작 노드를 방문 처리
//
//    // 큐가 빌 때까지 반복
//    while (!q.empty()) {
//        int x = q.front(); // 큐의 맨 앞 노드를 가져옴
//        q.pop(); // 큐의 맨 앞 노드를 제거
//        cout << x << ' '; // 노드를 출력
//
//        // 현재 노드와 연결된 모든 노드를 확인
//        for (int i = 0; i < graph[x].size(); i++) {
//            int y = graph[x][i]; // 연결된 노드
//            if (!visited[y]) { // 아직 방문하지 않은 노드라면
//                q.push(y); // 큐에 삽입
//                visited[y] = true; // 방문 처리
//            }
//        }
//    }
//}
//
//int main(void) {
//    // 노드 1에 연결된 노드 정보 저장
//    graph[1].push_back(2);
//    graph[1].push_back(3);
//    graph[1].push_back(8);
//
//    // 노드 2에 연결된 노드 정보 저장
//    graph[2].push_back(1);
//    graph[2].push_back(7);
//
//    // 노드 3에 연결된 노드 정보 저장
//    graph[3].push_back(1);
//    graph[3].push_back(4);
//    graph[3].push_back(5);
//
//    // 노드 4에 연결된 노드 정보 저장
//    graph[4].push_back(3);
//    graph[4].push_back(5);
//
//    // 노드 5에 연결된 노드 정보 저장
//    graph[5].push_back(3);
//    graph[5].push_back(4);
//
//    // 노드 6에 연결된 노드 정보 저장
//    graph[6].push_back(7);
//
//    // 노드 7에 연결된 노드 정보 저장
//    graph[7].push_back(2);
//    graph[7].push_back(6);
//    graph[7].push_back(8);
//
//    //
