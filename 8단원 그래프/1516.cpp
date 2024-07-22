//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#define MAX 501
//
//using namespace std;
//
//int n; // �ǹ��� ��
//vector<int> edge[MAX]; // �� �ǹ��� ���� ���踦 �����ϴ� ���� �迭
//int inDegree[MAX]; // �� �ǹ��� ���� ������ �����ϴ� �迭
//int cost[MAX]; // �� �ǹ��� �Ǽ� ����� �����ϴ� �迭
//int dp[MAX]; // �� �ǹ��� ���� �� �ʿ��� �ּ� �ð��� �����ϴ� �迭
//
//void topologicalSort() {
//    queue<int> q;
//    // ���� ������ 0�� ��� �ǹ��� ť�� �߰��ϰ�, �ش� �ǹ��� �Ǽ� �ð��� dp�� ����
//    for (int i = 1; i <= n; i++) {
//        if (inDegree[i] == 0) {
//            q.push(i);
//            dp[i] = cost[i]; // �ʱ� �Ǽ� ��� ����
//        }
//    }
//
//    while (!q.empty()) {
//        int cur_node = q.front(); // ť���� ���� ��带 ����
//        q.pop();
//        // ���� ��忡 �����ϴ� ���� ������ ó��
//        for (int i = 0; i < edge[cur_node].size(); i++) {
//            int next = edge[cur_node][i];
//            if (--inDegree[next] == 0) { // ���� ����� ���� ������ ���ҽ�Ű��, 0�� �Ǹ� ť�� �߰�
//                q.push(next);
//            }
//            // dp �迭�� �ִ� �ð����� ������Ʈ
//            dp[next] = max(dp[next], cost[next] + dp[cur_node]);
//        }
//    }
//
//    // �� �ǹ��� �ּ� �Ǽ� �ð��� ���
//    for (int i = 1; i <= n; i++) {
//        cout << dp[i] << '\n';
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false); // ����� ������ ����Ű�� ���� ����
//    cin.tie(0); // ����� ����ȭ�� ��Ȱ��ȭ
//    cout.tie(0); // ����� ����ȭ�� ��Ȱ��ȭ
//
//    cin >> n; // �ǹ��� �� �Է�
//    for (int i = 1; i <= n; i++) {
//        cin >> cost[i]; // �� �ǹ��� �Ǽ� ��� �Է�
//        int input;
//        cin >> input;
//        // ���� �ǹ��� ��� �������� �Է� ����
//        while (input != -1) {
//            inDegree[i]++; // �������� �߰��ϸ� ���� ������ ������Ŵ
//            edge[input].push_back(i); // �Էµ� �ǹ��� ���� �ǹ��� ���������� �߰���
//            cin >> input; // ���� �Է� ����
//        }
//    }
//    // ���� ������ �����Ͽ� �� �ǹ��� �ּ� �Ǽ� �ð��� ����ϰ� ���
//    topologicalSort();
//    return 0;
//}
