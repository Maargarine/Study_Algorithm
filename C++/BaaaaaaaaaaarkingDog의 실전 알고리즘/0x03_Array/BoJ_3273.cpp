// BoJ 3273 - 두 수의 합
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, pair = 0;    // 수열의 길이 n, 찾으려는 수의 합 x, 만족하는 쌍의 갯수 pair
    int mem[1000001];    // 특정 숫자가 수열에 있는지 여부를 체크할 배열
    vector<int> input_nums;    // 입력받은 수열을 저장할 벡터
    
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        input_nums.push_back(temp);
    }
    
    cin >> x;

    for(int i : input_nums){    
        if (x-i > 0 && mem[x-i] == 1){    // 찾는값 x에서 현재수 i만큼 뺀 값이 이전에 존재했다면
            pair++;    // 쌍이 있는것이므로 쌍의 갯수를 한개 추가
        }
        mem[i] = 1;    // 수열에 i가 존재함을 체크
    }

    cout << pair;

}
