// BoJ 13300 - 방배정
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int room[2][6] = {0};    // 성별, 학년별 인원수를 저장할 2차원 배열 생성

    int N, K, cnt = 0;    // 총 학생수 N, 방당 최대 학생 수 K, 방의 갯수 cnt
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        int S, Y;    // 해당 학생의 성별 S, 학년 Y
        cin >> S >> Y;
        room[S][Y-1]++;    // 해당하는 2차원 배열 위치에 학생 수 카운트해 저장
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 6; j++){
            if (room[i][j] % K == 0){    // 구분된 학생 수가 방 최대 인원의 배수일 경우
                cnt += room[i][j] / K;    // 학생 / 최대인원 => 필요한 방의 갯수
            }
            else {    // 배수가 아닐 경우
                cnt += room[i][j] / K + 1;    // 학생 / 최대인원(나머지 버림) 보다 1개의 방 더필요
            }
        }
    }

    cout << cnt;

    return 0;

}