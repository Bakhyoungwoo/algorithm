//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	string sentence;             
//	bool Minus = false;// 부호판별 빼기이면 true 더하기이면 false
//	string number = "";          
//	int result = 0;          
//
//	cin >> sentence;
//
//	for (int i = 0; i <= sentence.size(); i++) {
//
//		if (sentence[i] == '-' || sentence[i] == '+' || i == sentence.size()) {  
//
//			// 앞서 '-'가 있었다면, 숫자를 빼줌
//			if (Minus == true) {    
//				// 문자열 형태의 숫자를 정수형으로 변환
//				result -= stoi(number);   //string to int 함수 
//				// 사용된 숫자는 공백으로 초기화
//				number = "";                    
//
//			}
//
//			// 앞서 '-'가 없었다면, 숫자를 더해줌
//			else if (Minus == false) {
//				result += stoi(number);
//				number = "";
//
//			}
//
//		}
//		// 2. 기호가 아닌 경우 (숫자인 경우)
//		else {
//			number += sentence[i];     // 문자열 형태로 숫자 저장
//		}
//
//		if (sentence[i] == '-') {      // - 발견 시, true로 변경
//			Minus = true;
//		}
//
//	}
//
//	cout << result;
//
//	return 0;
//}