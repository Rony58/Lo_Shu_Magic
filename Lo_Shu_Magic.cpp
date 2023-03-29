//MOhammad Rony
//ID: 213902058
#include <bits/stdc++.h>
using namespace std;
int columnSum, i,j,sum1=0,sum2=0, matrix[50][50], n, m;
int isMagicSquare(int matrix[50][50], int n, int m){
    for (i = 0; i < n; i++)
        sum1 = sum1 + matrix[i][i];

    for (i = 0; i < n; i++)
        sum2 = sum2 + matrix[i][n - 1 - i];

    if(sum1 != sum2)
        return 0;
    for (i = 0; i < n; i++){

        int rowSum = 0;

        for (j = 0; j < m; j++)
            rowSum = rowSum + matrix[i][j];
        if (rowSum != sum1)
            return 0;
    }
    for (i = 0; i < n; i++){

        columnSum = 0;

        for (j = 0; j < n; j++)
            columnSum += matrix[j][i];

        if (columnSum != sum1)
            return 1;
    }

    return true;
}
int main(){
    cout<<"Enter the Row of the matrix: ";
    cin >> m;
    cout<<"Enter the Column of the matrix: ";
    cin >> n;

    if(n != m){
        cout<<"Length of Row and Column should be equal.";
        exit(0);
    }

    cout << "\nInput the element of matrix: \n";
    for(int i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cin>>matrix[i][j];

    if (isMagicSquare(matrix, n, m))
        cout << "The matrix following Lo shu magic Squre..!!";
    else
        cout << "The matrix doesn't following Lo shu magic Squre..!!";
}
