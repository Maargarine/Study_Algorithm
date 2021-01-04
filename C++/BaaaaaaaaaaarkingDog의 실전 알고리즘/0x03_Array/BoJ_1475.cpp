// BoJ 2577 - 숫자의 개수
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int room_num, max_set = 0;    // 방번호와 최소로 필요한 숫자세트
    int plastic_nums[10] = {0};    // 각 숫자가 사용된 횟수
    cin >> room_num;
    
    if (room_num == 0){    // 방번호(0 <= N <= 1000000)가 0인 경우는 예외처리
        max_set = 1;
    }

    else{
        while (room_num > 0) {    // 방번호가 0이될때까지 나머지연산으로 각 자릿수 구함
            int temp = room_num % 10;
            room_num /= 10;
            if (temp == 6 || temp == 9) {    // 6과 9는 뒤집어 사용 가능하므로
                if (plastic_nums[6] > plastic_nums[9]){    // 6이 더 많이 사용되었으면
                    plastic_nums[9]++;    // 9를 사용
                }
                else if (plastic_nums[6] < plastic_nums[9]){    // 9가 더 많이 사용되었으면
                    plastic_nums[6]++;    // 6을 사용
                }
                else{    // 두 수의 사용횟수가 같은 경우
                    plastic_nums[temp]++;    // 그냥 해당번호 사용
                }
            }
            else{    // 6, 9를 제외한 숫자들은 해당 숫자에 카운팅
                plastic_nums[temp]++;
            }
        }
        for (int n : plastic_nums) {    // 각 숫자의 사용횟수를 보며 
            if (n > max_set){    // 최대 사용횟수를 찾음(가장 많이 사용된 숫자만큼은 최소한 필요)
                max_set = n;
            }
        }
    }

    cout << max_set;

    return 0;
    
}