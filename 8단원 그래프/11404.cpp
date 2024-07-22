#include <iostream>     // 입출력 스트림 라이브러리 포함
#include <algorithm>    
#include <vector>       
using namespace std;    


int n, m;               // 노드 개수(n)와 간선 개수(m)를 저장할 변수
int a[104][104];        // 그래프의 인접 행렬을 저장할 2차원 배열
const int INF = 1e9;    // 무한대를 나타내는 상수


int main(void) {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0); 

    cin >> n >> m;  // 노드와 간선의 개수를 입력받음

    // 인접 행렬 초기화
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == j) a[i][j] = 0;  // 자기 자신으로의 거리는 0
            else a[i][j] = INF;       // 다른 노드로의 초기 거리는 무한대
        }
    }

    // 간선 정보 입력
    for (int i = 0; i < m; i++) {
        int st, en, v;
        cin >> st >> en >> v;  // 시작 노드, 끝 노드, 가중치를 입력받음
        a[st][en] = min(a[st][en], v);  // 여러 간선 중 최소 가중치 간선 선택
    }

    // 플로이드-와샬 
    for (int k = 1; k <= n; k++) {         // 거쳐가는 노드 k
        for (int i = 1; i <= n; i++) {     // 출발 노드 i
            for (int j = 1; j <= n; j++) { // 도착 노드 j
                // i에서 j로 가는 기존 거리와 k를 거쳐가는 거리를 비교하여 최소 거리 선택
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }

    // 결과 출력
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == INF) cout << "0 ";  // 갈 수 없는 경우 0 출력
            else cout << a[i][j] << ' ';       // 갈 수 있는 경우 최소 거리 출력
        }
        cout << '\n';
    }

    return 0;
}
