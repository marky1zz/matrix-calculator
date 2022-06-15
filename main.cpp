#include <iostream>

using namespace std;

void add_matrix(int arr1[10][10], int arr2[10][10], int rows, int columns)
{
    int arr3[10][10];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr3[i][j] += arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        cout << "\n";
        for (int j = 0; j < columns; j++)
        {
            cout << arr3[i][j] << " ";
        }
    }
}

void multiply_by_number(int arr[10][10], int num, int rows, int columns)
{
    int arr3[10][10];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr3[i][j] += arr[i][j] * num;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        cout << "\n";
        for (int j = 0; j < columns; j++)
        {
            cout << arr3[i][j] << " ";
        }
    }
}

multiply_matrix(int arr1[10][10], int arr2[10][10], int rows1, int columns1, int rows2, int columns2)
{
    int sum;
    int arr3[10][10];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < rows1; i++)
    {
        cout << "\n";
        for (int j = 0; j < columns2; j++)
        {
            for (int k = 0; k < columns1; k++)
            {
                sum += arr1[k][j] * arr2[i][k];
            }
            cout << sum << " ";
            sum = 0;
        }
    }
}

int main()
{
    int pick, start = 0;
    int rows1, rows2, columns1, columns2, number;
    int matrix1[10][10], matrix2[10][10];

    while(start == 0)
    {
        cout << "\nPick what you want to do?" << endl;
        cout << "1) Add two matrices" << endl;
        cout << "2) Multiply matrix by number" << endl;
        cout << "3) Multiply two matrices" << endl;
        cout << "4) Exit" << endl;
        cout << "Enter your choice : ", cin >> pick;

        switch (pick)
        {
        case 1:
            cout << "Enter the rows and columns of matrices" << endl;
            cout << "ROWS :", cin >> rows1;
            cout << "COLUMNS :", cin >> columns1;
            cout << "Enter elements of matrix A" << endl;

            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                {
                    cin >> matrix1[i][j];
                }
            }

            cout << "\nEnter elements of matrix B" << endl;

            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                {
                    cin >> matrix2[i][j];
                }
            }

            add_matrix(matrix1, matrix2, rows1, columns1);

            break;
        case 2:
            cout << "Enter the number you want to multiply by : ", cin >> number;
            cout << "Enter the rows and columns of a matrix" << endl;
            cout << "ROWS :", cin >> rows1;
            cout << "COLUMNS :", cin >> columns1;
            cout << "Enter elements of matrix " << endl;

            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                {
                    cin >> matrix1[i][j];
                }
            }

            multiply_by_number(matrix1, number, rows1, columns1);

            break;
        case 3:
            cout << "Enter the rows and columns of matrix A" << endl;
            cout << "ROWS :", cin >> rows1;
            cout << "COLUMNS :", cin >> columns1;
            cout << "Enter the rows and columns of matrix B" << endl;
            cout << "ROWS :", cin >> rows2;
            cout << "COLUMNS :", cin >> columns2;
            cout << "Enter elements of matrix A" << endl;

            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < columns1; j++)
                {
                    cin >> matrix1[i][j];
                }
            }

            cout << "Enter elements of matrix B" << endl;

            for (int i = 0; i < rows2; i++)
            {
                for (int j = 0; j < columns2; j++)
                {
                    cin >> matrix2[i][j];
                }
            }

            multiply_matrix(matrix1, matrix2, rows1, columns1, rows2, columns2);
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "\nWrong input. Try again!!!" << endl;
            break;
        }
    }
    return 0;
}
