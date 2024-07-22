#include <vector>       // 벡터 라이브러리 포함
#include <algorithm>    // fill 함수 사용을 위한 알고리즘 라이브러리 포함
#include <iostream>     // 입출력 스트림 라이브러리 포함
using namespace std;    // 표준 네임스페이스 사용

#define INF 2100000000  // 무한대를 나타내는 상수 정의

int N, M, x, y, z;      // 노드 개수, 간선 개수, 간선 정보(x, y, z)를 위한 변수 선언
long long dist[501];    // 거리 배열 선언 및 초기화 (최대 크기 501)
bool cycle;             // 음수 사이클 존재 여부를 확인하기 위한 불린 변수

vector <pair<int, int>> edge[501];  // 간선과 가중치를 저장하는 인접 리스트

void bellman_ford() {
    // 모든 거리를 무한대로 초기화
    fill(dist, dist + N + 1, INF);  // dist 배열을 INF로 초기화 (dist[0]부터 dist[N]까지)
    dist[1] = 0;  // 시작 노드(1)의 거리를 0으로 설정

    // 최대 N-1번 간선 완화
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < edge[i].size(); j++) {
                int next = edge[i][j].first;  // 간선의 도착 노드
                int nextcost = edge[i][j].second;  // 간선의 가중치

                // 현재 노드의 거리가 무한대가 아니고 더 짧은 경로를 찾은 경우
                if (dist[i] != INF && dist[next] > dist[i] + nextcost) {
                    dist[next] = dist[i] + nextcost;  // 다음 노드의 거리 갱신
                    if (k == N) cycle = true;  // N번째 반복에서 갱신되면 사이클 존재
                }
            }
        }
    }

    // 음수 사이클이 발견되면 -1 출력
    if (cycle) cout << -1;
    else {
        for (int i = 2; i <= N; i++)
            // 해당 노드로 가는 경로가 없는 경우 -1을, 그렇지 않으면 거리를 출력
            cout << (dist[i] != INF ? dist[i] : -1) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);  // C 스타일 입출력과의 동기화 비활성화 (입출력 속도 향상)
    cin.tie(NULL); cout.tie(NULL);  // cin과 cout의 묶음을 풀어줌 (입출력 속도 향상)

    cin >> N >> M;  // 노드와 간선의 개수를 입력받음
    for (int i = 0; i < M; i++) {
        cin >> x >> y >> z;  // 각 간선과 가중치를 입력받음
        edge[x].push_back({ y, z });  // 인접 리스트에 간선 추가
    }

    bellman_ford();  // 벨만-포드 알고리즘 실행
}
