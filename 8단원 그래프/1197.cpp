#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// 간선 정보를 저장할 벡터 선언
vector<pair<int, pair<int, int>>> tree;

int main() {
    ios_base::sync_with_stdio(false); // 입출력 성능 향상
    cout.tie(NULL);
    cin.tie(NULL);

    int v, e; // v: 정점의 수, e: 간선의 수
    cin >> v >> e;

    // 간선 정보 입력
    for (int i = 0; i < e; i++) {
        int first, second, weight;
        cin >> first >> second >> weight;
        tree.push_back({ weight, { first, second } });
    }
    sort(tree.begin(), tree.end());
    // 확인을 위해 입력된 간선 정보를 출력 (디버깅용)
    for (const auto& edge : tree) {
        cout << "Weight: " << edge.first << ", Edge: (" << edge.second.first << ", " << edge.second.second << ")\n";
    }

    return 0;
}
