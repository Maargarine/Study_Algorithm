// BoJ 2577 - 숫자의 개수
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C, mul_num = 0;    // 입력받을 세 수 A, B, C 와 곱한 값을 저장할 변수 선언
    int num_cnt[10] = {0};    // 곱한 숫자에서 0~9까지 숫자의 갯수를 저장할 배열

    cin >> A;
    cin >> B;
    cin >> C;

    mul_num = A * B * C;    // 세 수를 곱함

    while (mul_num > 0) {    // 곱한수가 0이 될 때 까지(각 자리 값 구하기)
        int temp = 0;    // 각 자릿수를 저장할 임시변수
        temp = mul_num % 10;   // 10의 나머지로 각 자리의 값 도출
        num_cnt[temp]++;    // 구한 값을 카운팅
        mul_num /= 10;
    }

    for(int n : num_cnt){
        cout << n << '\n'; 
    }

    return 0;
    
}

