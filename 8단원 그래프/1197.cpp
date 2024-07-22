#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ���� ������ ������ ���� ����
vector<pair<int, pair<int, int>>> tree;

int main() {
    ios_base::sync_with_stdio(false); // ����� ���� ���
    cout.tie(NULL);
    cin.tie(NULL);

    int v, e; // v: ������ ��, e: ������ ��
    cin >> v >> e;

    // ���� ���� �Է�
    for (int i = 0; i < e; i++) {
        int first, second, weight;
        cin >> first >> second >> weight;
        tree.push_back({ weight, { first, second } });
    }
    sort(tree.begin(), tree.end());
    // Ȯ���� ���� �Էµ� ���� ������ ��� (������)
    for (const auto& edge : tree) {
        cout << "Weight: " << edge.first << ", Edge: (" << edge.second.first << ", " << edge.second.second << ")\n";
    }

    return 0;
}
