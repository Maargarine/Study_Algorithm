// BoJ 10808 - 알파벳 개수
#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alphabet[26] = {0};    // 알파벳 갯수를 저장할 배열
    string istr;    // 입력받은 문자열을 저장할 스트링 변수

    cin >> istr;
    
    for(char c : istr){    // 문자열을 순회하면서
        alphabet[int(c) - 97]++;    // 알파벳 소문자 ASCII 코드를 기준으로 갯수 카운트
    }
    
    for(int i : alphabet){
        cout << i << ' ';    // a 부터 입력 문자열의 알파벳 갯수 출력
    }

    return 0;
}