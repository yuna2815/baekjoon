#include <stdio.h>

int main() {
    int submitted[31] = {0};  // 0~30까지 인덱스 (0은 무시)

    int num;
    for (int i = 0; i < 28; i++) {
        scanf("%d", &num);
        submitted[num] = 1;  // 제출한 번호 체크
    }

    for (int i = 1; i <= 30; i++) {
        if (submitted[i] == 0) {
            printf("%d\n", i);  // 안 낸 사람 출력
        }
    }

    return 0;
}
