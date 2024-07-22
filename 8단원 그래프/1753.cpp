#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int INF = 98765432; // 무한대를 나타내는 큰 값
int dp[20003]; // 시작점으로부터 각 정점까지의 최단 거리를 저장할 배열
vector<pair<int, int>> v[20003]; // 그래프를 저장할 인접 리스트

void dj(int st) { // 다익스트라 알고리즘 함수
    fill(dp, dp + 20003, INF); // dp 배열을 INF로 초기화
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 최소 힙 우선순위 큐


    pq.push({ 0, st }); // 시작 정점의 거리 0을 큐에 삽입
    dp[st] = 0; // 시작 정점의 최단 거리는 0

    while (!pq.empty()) {
        int x = pq.top().second; // 현재 정점
        int cost = pq.top().first; // 현재 정점까지의 거리
        pq.pop();

        for (int i = 0; i < v[x].size(); i++) {
            int nx = v[x][i].first; // 다음 정점
            int ncost = cost + v[x][i].second; // 다음 정점까지의 거리

            if (dp[nx] > ncost) { // 다음 정점의 기존 최단 거리보다 새로운 거리가 더 짧으면
                pq.push({ ncost, nx }); // 우선순위 큐에 새로운 거리와 정점을 삽입
                dp[nx] = ncost; // 다음 정점의 최단 거리를 갱신
            }
        }
    }
}

int main() {
    int V, E, K;
    cin >> V >> E >> K; // 정점 수(V), 간선 수(E), 시작 정점(K)을 입력받음

    int a1, a2, a3;
    for (int i = 0; i < E; i++) {
        cin >> a1 >> a2 >> a3; // 각 간선의 시작점(a1), 끝점(a2), 가중치(a3)를 입력받음
        v[a1].push_back({ a2, a3 }); // 인접 리스트에 간선 정보를 추가
    }

    dj(K); // 시작 정점 K로부터 최단 거리 계산

    for (int i = 1; i <= V; i++) {
        if (dp[i] < INF)
            cout << dp[i] << '\n'; // 최단 거리를 출력
        else
            cout << "INF" << '\n'; // 도달할 수 없는 정점은 "INF" 출력
    }

    return 0;
}
