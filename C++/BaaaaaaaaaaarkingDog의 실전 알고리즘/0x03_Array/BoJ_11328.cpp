// BoJ 11328 - Strfry
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;    // 테스트케이스의 수
    cin >> n;
    int cnt[26] = {0};    // 알파벳 갯수 저장

    for(int i = 0; i < n; i++){
        fill(cnt, cnt+26, 0);    // 테스트 케이스마다 카운트 배열 초기화
        string origin, after_c;    // 입력받을 두 문자열
        cin >> origin;
        cin >> after_c;
        bool check = true;    // strfry 함수 적용 가능 여부
        if (origin.size() == after_c.size()){    // 두 글자의 길이가 같은 경우에만 확인
            for(char c : origin){    // 첫번째 문자열의 각 알파벳의 갯수를 카운트
            cnt[int(c) - 97]++;
        }
        
            for(char c : after_c){    // 두번째 문자열을 순회하며
                int cn = int(c) - 97;
                if (cnt[cn] > 0){    // 첫번쨰 문자열에도 해당 알파벳이 있었다면
                    cnt[cn]--;    // 카운팅을 1 감소시킴
                }
                else{    // 첫번째 문자열에 해당 문자가 없거나 더 적다면
                    check = false;    // strfry 불가능
                }
            }
        }
        else {    // 두 문자열 길이가 다르면 strfry 불가능 
            check = false;
        }

        string ans = "";
        ans = (check) ? "Possible" : "Impossible";    // check가 참이면 가능, 거짓이면 불가능

        cout << ans << '\n';
    }

    return 0;

}