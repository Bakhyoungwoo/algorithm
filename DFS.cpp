//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// ���� ���� ����
//vector<vector<int>> graph;  // �׷����� ������ 2���� ����
//vector<bool> isVisited;     // �湮 ���θ� ������ ����
//int v, e;                   // ������ ���� ������ ��
//
//// �׷��� �Է� �Լ�
//void input() {
//    cin >> v >> e;
//    // �޸� ���� �Ҵ� �� �ʱ�ȭ
//    graph.assign(v + 1, vector<int>(0));//0������ v+1 ��ŭ �Ҵ�
//    isVisited.assign(v + 1, false);
//
//    for (int i = 0; i < e; i++) {
//        int s, e;
//        cin >> s >> e;
//        // ����� ������ �����Ų��.
//        graph[s].emplace_back(e);
//        graph[e].emplace_back(s);
//    }
//}
//
//// DFS �Լ�
//void DFS(int cur) {
//    isVisited[cur] = true; // ���� ��带 �湮 ó��
//    cout << "�湮�� ��� : " << cur << '\n';
//
//    // ���� ������ �������� ����Ǿ� �ִ� ��� �������� �ѷ�����.
//    for (int i = 0; i < graph[cur].size(); i++) {
//        int next = graph[cur][i];
//        // ���� �湮���� �ʾҴٸ� �Ű������� �����Ͽ� DFS�� ��������� ȣ���Ѵ�.
//        if (!isVisited[next]) {
//            DFS(next);
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cout.tie(NULL);
//    cin.tie(NULL);
//    // �׷��� �Է�
//    input();
//
//    // DFS ���� (���� 1�� ������ �����Ѵٰ� ����)
//    DFS(1);
//
//    return 0;
//}
