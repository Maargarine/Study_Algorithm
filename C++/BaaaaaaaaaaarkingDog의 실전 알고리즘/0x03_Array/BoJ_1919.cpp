// BoJ 1919 - 애너그램 만들기
#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string istr1, istr2;    // 입력받을 두 문자열
    int cnt[26] = {0};    // 각 알파벳 갯수
    int deleted = 0;    // 삭제해야하는 문자의 갯수

    cin >> istr1;
    cin >> istr2;

    for(char c : istr1){    // 첫번째 문자열을 돌며
        cnt[int(c)-97]++;    // 해당 알파벳 갯수를 1씩 증가
    }

    for(char c : istr2){    // 두번째 문자열을 돌며
        cnt[int(c)-97]--;    // 해당 알파벳 갯수에서 1씩 감소(서로 다른 알파벳은 0이아닌 정수값을 가지게됨)
    }

    for(int i : cnt){    // 카운트 배열을 순회하며
        if (i < 0){    // 0보다 작은 경우(두번째 문자열에만 있거나 더 많은 경우)
            i *= -1;    // -1을 곱해 절대값으로 바꿔줌
        }
        deleted += i;    // 삭제된 갯수를 해당 알파벳 수만큼 추가
    }

    cout << deleted;
    
}