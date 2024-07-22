//#include <iostream>     // 표준 입출력 스트림 라이브러리 포함
//#include <queue>        // 큐 라이브러리 포함
//#include <vector>       // 벡터 라이브러리 포함
//#include <string>       // 문자열 라이브러리 포함 (사용되지 않지만 포함되어 있음)
//using namespace std;    // 표준 네임스페이스 사용
//
//int N;                  // 건물의 수를 나타내는 변수
//int indegree[501],      // 각 건물의 진입 차수를 저장하는 배열
//cost[501],          // 각 건물의 건설 시간을 저장하는 배열
//totalCost[501];     // 각 건물을 짓는 데 걸리는 총 시간을 저장하는 배열
//vector<int> edges[501]; // 각 건물의 연결 관계(간선)를 저장하는 인접 리스트
//
//// 위상 정렬을 수행하는 함수
//void topologySort() {
//    queue<int> q; // 진입 차수가 0인 건물을 처리하기 위한 큐
//
//    // 진입 차수가 0인 건물을 큐에 삽입하고, 초기 총 비용 설정
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) {
//            q.push(i);
//            totalCost[i] = cost[i]; // 초기 총 비용은 자기 자신을 짓는 비용
//        }
//    }
//
//    // 큐가 빌 때까지 반복
//    while (!q.empty()) {
//        int current = q.front(); q.pop(); // 큐의 앞에서 하나를 꺼냄
//
//        // 현재 건물에서 이어지는 간선을 처리
//        for (int i = 0; i < edges[current].size(); i++) {
//            int end = edges[current][i]; // 현재 건물에서 도착하는 건물
//
//            // 도착 건물의 총 비용 갱신: 기존 비용과 현재 건물을 거쳐 가는 비용 중 최대값 선택
//            totalCost[end] = max(totalCost[end], totalCost[current] + cost[end]);
//            indegree[end]--; // 도착 건물의 진입 차수 감소
//
//            // 진입 차수가 0이 되면 큐에 삽입
//            if (indegree[end] == 0) q.push(end);
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false); // C 스타일 입출력과의 동기화 비활성화 (입출력 속도 향상)
//    cin.tie(NULL); // cin의 묶음을 풀어줌 (입력 속도 향상)
//    cout.tie(NULL); // cout의 묶음을 풀어줌 (출력 속도 향상)
//
//    cin >> N; // 건물의 수를 입력받음
//
//    // 각 건물의 건설 시간과 선행 건물들을 입력받음
//    for (int i = 1; i <= N; i++) {
//        int c, prev;
//        cin >> c; // 건물의 건설 시간을 입력받음
//        cost[i] = c;
//
//        // 선행 건물들을 입력받아 인접 리스트와 진입 차수 배열을 갱신
//        while (true) {
//            cin >> prev;
//            if (prev == -1) break; // -1을 입력받으면 입력 종료
//
//            edges[prev].push_back(i); // 선행 건물에서 현재 건물로의 간선 추가
//            indegree[i]++; // 현재 건물의 진입 차수 증가
//        }
//    }
//
//    topologySort(); // 위상 정렬 수행
//
//    // 각 건물을 짓는 데 걸리는 총 시간을 출력
//    for (int i = 1; i <= N; i++) {
//        cout << totalCost[i] << "\n"; // 각 건물의 총 비용을 출력
//    }
//
//    return 0; // 프로그램 종료
//}
