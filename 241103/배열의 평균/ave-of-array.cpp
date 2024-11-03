#include <iostream>

using namespace std;

int main() {
    // 2차원 배열을 구현합니다.
	int arr_2d[2][4];
	int sum;
	
	// 각 줄마다 정수를 입력받습니다.
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 4; j++)
			cin >> arr_2d[i][j];
	
	cout << fixed;
	cout.precision(1);
	
	// 가로 평균을 출력합니다.
	for(int i = 0; i < 2; i++) {
		sum = 0;
		for(int j = 0; j < 4; j++)
			sum += arr_2d[i][j];
		cout << (double)sum / 4 << " ";
	}
	cout << endl;
	
	// 세로 평균을 출력합니다.
	for(int j = 0; j < 4; j++) {
		sum = 0;
		for(int i = 0; i < 2; i++)
			sum += arr_2d[i][j];
		cout << (double)sum / 2 << " ";
	}
	cout << endl;
	
	// 전체 평균을 출력합니다.
	sum = 0;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 4; j++)
			sum += arr_2d[i][j];
	}
	cout << (double)sum / 8 << " ";

    return 0;
}