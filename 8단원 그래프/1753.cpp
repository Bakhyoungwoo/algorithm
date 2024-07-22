#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int INF = 98765432; // ���Ѵ븦 ��Ÿ���� ū ��
int dp[20003]; // ���������κ��� �� ���������� �ִ� �Ÿ��� ������ �迭
vector<pair<int, int>> v[20003]; // �׷����� ������ ���� ����Ʈ

void dj(int st) { // ���ͽ�Ʈ�� �˰��� �Լ�
    fill(dp, dp + 20003, INF); // dp �迭�� INF�� �ʱ�ȭ
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // �ּ� �� �켱���� ť


    pq.push({ 0, st }); // ���� ������ �Ÿ� 0�� ť�� ����
    dp[st] = 0; // ���� ������ �ִ� �Ÿ��� 0

    while (!pq.empty()) {
        int x = pq.top().second; // ���� ����
        int cost = pq.top().first; // ���� ���������� �Ÿ�
        pq.pop();

        for (int i = 0; i < v[x].size(); i++) {
            int nx = v[x][i].first; // ���� ����
            int ncost = cost + v[x][i].second; // ���� ���������� �Ÿ�

            if (dp[nx] > ncost) { // ���� ������ ���� �ִ� �Ÿ����� ���ο� �Ÿ��� �� ª����
                pq.push({ ncost, nx }); // �켱���� ť�� ���ο� �Ÿ��� ������ ����
                dp[nx] = ncost; // ���� ������ �ִ� �Ÿ��� ����
            }
        }
    }
}

int main() {
    int V, E, K;
    cin >> V >> E >> K; // ���� ��(V), ���� ��(E), ���� ����(K)�� �Է¹���

    int a1, a2, a3;
    for (int i = 0; i < E; i++) {
        cin >> a1 >> a2 >> a3; // �� ������ ������(a1), ����(a2), ����ġ(a3)�� �Է¹���
        v[a1].push_back({ a2, a3 }); // ���� ����Ʈ�� ���� ������ �߰�
    }

    dj(K); // ���� ���� K�κ��� �ִ� �Ÿ� ���

    for (int i = 1; i <= V; i++) {
        if (dp[i] < INF)
            cout << dp[i] << '\n'; // �ִ� �Ÿ��� ���
        else
            cout << "INF" << '\n'; // ������ �� ���� ������ "INF" ���
    }

    return 0;
}
