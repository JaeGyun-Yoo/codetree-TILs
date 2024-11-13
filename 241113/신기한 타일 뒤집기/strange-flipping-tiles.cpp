#include <iostream>
using namespace std;

int arr[200002]; // 타일의 색상을 저장하는 배열 (0: 초기 상태(아직 설정되지 않음), 1: 검은색, 2: 흰색)

int main() {
    int cur = 100001; // 중앙 위치
    int n; cin >> n;
    int white = 0, black = 0;

    for(int i = 0; i < 200002; i++) {
        arr[i] = 0; // 모든 타일을 초기 상태로 설정
    }

    for(int i = 0; i < n; i++) {
        int a; char dir;
        cin >> a >> dir;
        int step = (dir == 'R' ? 1 : -1);

        for(int j = 0; j < a; j++) {
            if (dir == 'R') {
                // 오른쪽으로 뒤집기 (검은색)
                if (arr[cur] != 1) { // 현재 타일이 검은색이 아니라면
                    if (arr[cur] == 2) white--; // 흰색이었다면 흰색 카운트 감소
                    black++; // 검은색 카운트 증가
                }
                arr[cur] = 1; // 검은색으로 설정
            } else {
                // 왼쪽으로 뒤집기 (흰색)
                if (arr[cur] != 2) { // 현재 타일이 흰색이 아니라면
                    if (arr[cur] == 1) black--; // 검은색이었다면 검은색 카운트 감소
                    white++; // 흰색 카운트 증가
                }
                arr[cur] = 2; // 흰색으로 설정
            }
            cur += step; // 위치 이동
        }
        cur -= step; // 마지막으로 뒤집은 타일 위치로 돌아가기
    }
    cout << white << ' ' << black << endl; // 최종 흰색, 검은색 타일 수 출력
}
