//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//// 최소 합을 계산하는데 필요한 전역 변수 및 우선순위 큐 선언
//priority_queue<int, vector<int>, greater<int> > pq;
//
//int main() {
//    // 입출력의 성능을 향상시키기 위한 설정
//    ios_base::sync_with_stdio(false);
//    cout.tie(NULL);
//    cin.tie(NULL);
//
//    int N;  // 입력 받을 숫자의 개수
//    cin >> N;
//
//    int number;  // 입력 받을 숫자 변수
//    for (int i = 0; i < N; i++) {
//        cin >> number;
//        pq.push(number);  // 숫자를 우선순위 큐에 삽입
//    }
//
//    int result = 0;  // 최종 결과를 저장할 변수
//    while (pq.size() > 1) {  // 우선순위 큐에 하나 이상의 숫자가 남아 있을 때까지 반복
//        int first, second;
//
//        first = pq.top();  // 가장 작은 숫자
//        pq.pop();
//        second = pq.top();  // 그 다음으로 작은 숫자
//        pq.pop();
//
//        result += first + second;  // 두 숫자의 합을 결과에 더함
//        pq.push(first + second);  // 두 숫자의 합을 우선순위 큐에 다시 삽입
//    }
//
//    cout << result;  // 최종 결과 출력
//}
