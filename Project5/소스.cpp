#include <iostream>
using namespace std;

int main() {
    int N = 2, K = 3, M = 2; // ù ��° ����� ũ��(N x K)�� �� ��° ����� ũ��(K x M)

    // ù ��° ��� A
    int A[2][3] = { {1, 2, 3}, {4, 5, 6} };

    // �� ��° ��� B
    int B[3][2] = { {7, 8}, {9, 10}, {11, 12} };

    // ��� ��� C
    int C[2][2] = { 0 }; // ��� ����� 0���� �ʱ�ȭ

    // ��� ���� (C = A * B)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < K; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // ��� ���
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}