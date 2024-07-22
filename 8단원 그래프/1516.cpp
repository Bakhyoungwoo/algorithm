//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#define MAX 501
//
//using namespace std;
//
//int n; // 건물의 수
//vector<int> edge[MAX]; // 각 건물의 의존 관계를 저장하는 벡터 배열
//int inDegree[MAX]; // 각 건물의 진입 차수를 저장하는 배열
//int cost[MAX]; // 각 건물의 건설 비용을 저장하는 배열
//int dp[MAX]; // 각 건물을 짓는 데 필요한 최소 시간을 저장하는 배열
//
//void topologicalSort() {
//    queue<int> q;
//    // 진입 차수가 0인 모든 건물을 큐에 추가하고, 해당 건물의 건설 시간을 dp에 저장
//    for (int i = 1; i <= n; i++) {
//        if (inDegree[i] == 0) {
//            q.push(i);
//            dp[i] = cost[i]; // 초기 건설 비용 설정
//        }
//    }
//
//    while (!q.empty()) {
//        int cur_node = q.front(); // 큐에서 현재 노드를 꺼냄
//        q.pop();
//        // 현재 노드에 의존하는 다음 노드들을 처리
//        for (int i = 0; i < edge[cur_node].size(); i++) {
//            int next = edge[cur_node][i];
//            if (--inDegree[next] == 0) { // 다음 노드의 진입 차수를 감소시키고, 0이 되면 큐에 추가
//                q.push(next);
//            }
//            // dp 배열을 최대 시간으로 업데이트
//            dp[next] = max(dp[next], cost[next] + dp[cur_node]);
//        }
//    }
//
//    // 각 건물의 최소 건설 시간을 출력
//    for (int i = 1; i <= n; i++) {
//        cout << dp[i] << '\n';
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false); // 입출력 성능을 향상시키기 위한 설정
//    cin.tie(0); // 입출력 동기화를 비활성화
//    cout.tie(0); // 입출력 동기화를 비활성화
//
//    cin >> n; // 건물의 수 입력
//    for (int i = 1; i <= n; i++) {
//        cin >> cost[i]; // 각 건물의 건설 비용 입력
//        int input;
//        cin >> input;
//        // 현재 건물의 모든 의존성을 입력 받음
//        while (input != -1) {
//            inDegree[i]++; // 의존성을 추가하며 진입 차수를 증가시킴
//            edge[input].push_back(i); // 입력된 건물이 현재 건물의 의존성으로 추가됨
//            cin >> input; // 다음 입력 받음
//        }
//    }
//    // 위상 정렬을 수행하여 각 건물의 최소 건설 시간을 계산하고 출력
//    topologicalSort();
//    return 0;
//}
