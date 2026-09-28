#include <iostream>

void even_copy(int *& A, int &n);

int main(){
    int n = 5;
    int *A = new int[n]{-2, -3, -4, 5, 6};

    even_copy(A,n);
    for (int i = 0; i < n; i++)
        std::cout << A[i] << " ";
    return 0;
}

void even_copy(int *&A, int &n){
    if (n<=0){
        return;
    }
    int count = n;
    for (int i = 0; i < n; i++){
        if (A[i] %2 == 0){
            count++;
        } 
    }
    int *B = new int[count];
    for (int j = 0; j < n; j++)
    {
        B[j] = A[j];
    }

    int tmp = n;

    for (int k = 0; k< n; k++)
    {
        if (A[k] % 2 == 0)
        {
            B[tmp] = A[k];
            tmp++;
        }
    }
    delete[] A;
    n = count;
    A = B;
}
