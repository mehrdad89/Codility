// constructing vectors
#include <iostream>
#include <vector>

vector<int> solution(vector<int> &A, int K) {
        int arrayLen = A.size();

        vector<int> tmpSol(A.begin(), A.end());

        for (size_t i = 0; i < A.size(); i++) {
            tmpSol[(i + K) % arrayLen] = A[i];
        }
        return tmpSol;
}