#include <iostream>
using namespace std;

int main() {
    int N = 2, K = 3, M = 2; // 첫 번째 행렬의 크기(N x K)와 두 번째 행렬의 크기(K x M)

    // 첫 번째 행렬 A
    int A[2][3] = { {1, 2, 3}, {4, 5, 6} };

    // 두 번째 행렬 B
    int B[3][2] = { {7, 8}, {9, 10}, {11, 12} };

    // 결과 행렬 C
    int C[2][2] = { 0 }; // 결과 행렬을 0으로 초기화

    // 행렬 곱셈 (C = A * B)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < K; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}