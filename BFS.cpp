//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//bool visited[9]; // �湮�� ��带 ����ϴ� �迭
//vector<int> graph[9]; // �׷����� ���� ����Ʈ�� �����ϴ� �迭
//
//// BFS �Լ� ����
//void bfs(int start) {
//    queue<int> q; // �湮�� ��带 �����ϴ� ť
//    q.push(start); // ���� ��带 ť�� ����
//    visited[start] = true; // ���� ��带 �湮 ó��
//
//    // ť�� �� ������ �ݺ�
//    while (!q.empty()) {
//        int x = q.front(); // ť�� �� �� ��带 ������
//        q.pop(); // ť�� �� �� ��带 ����
//        cout << x << ' '; // ��带 ���
//
//        // ���� ���� ����� ��� ��带 Ȯ��
//        for (int i = 0; i < graph[x].size(); i++) {
//            int y = graph[x][i]; // ����� ���
//            if (!visited[y]) { // ���� �湮���� ���� �����
//                q.push(y); // ť�� ����
//                visited[y] = true; // �湮 ó��
//            }
//        }
//    }
//}
//
//int main(void) {
//    // ��� 1�� ����� ��� ���� ����
//    graph[1].push_back(2);
//    graph[1].push_back(3);
//    graph[1].push_back(8);
//
//    // ��� 2�� ����� ��� ���� ����
//    graph[2].push_back(1);
//    graph[2].push_back(7);
//
//    // ��� 3�� ����� ��� ���� ����
//    graph[3].push_back(1);
//    graph[3].push_back(4);
//    graph[3].push_back(5);
//
//    // ��� 4�� ����� ��� ���� ����
//    graph[4].push_back(3);
//    graph[4].push_back(5);
//
//    // ��� 5�� ����� ��� ���� ����
//    graph[5].push_back(3);
//    graph[5].push_back(4);
//
//    // ��� 6�� ����� ��� ���� ����
//    graph[6].push_back(7);
//
//    // ��� 7�� ����� ��� ���� ����
//    graph[7].push_back(2);
//    graph[7].push_back(6);
//    graph[7].push_back(8);
//
//    //
