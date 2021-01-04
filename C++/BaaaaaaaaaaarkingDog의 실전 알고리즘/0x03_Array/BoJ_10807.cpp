// BoJ 10807 - 개수 세기
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_arr[201] = {0};    // 정수의 갯수를 저장할 배열(정수범위 -100 <= v <= 100)

    int n;    // 입력받을 정수의 갯수
    cin >> n;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        num_arr[t+100]++;    // 정수를 입력받아 갯수 카운팅
    }

    int v;    // 찾으려고 하는 정수
    cin >> v;
    cout << num_arr[v+100];    // 찾으려고 하는 정수의 갯수를 출력

    return 0;
    
}