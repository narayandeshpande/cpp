// 4.	Create a class Matrix and Write a C++ program to perform following functions:
// a.	To accept a Matrix
// b.	To display a Matrix
// c.	Overload unary minus ‘–‘ operator to calculate transpose of a Matrix
// d.	Overload binary multiplication '*’ operator to calculate multiplication of two matrices
//not complited
#include <iostream>
using namespace std;
class Matrix
{
    int **matrix;
    int rows, cols;

public:
    Matrix(int cols1, int rows1)
    {
        rows = rows1;
        cols = cols1;

        matrix = new int *[rows];
        for (int i = 0; i < rows; ++i)
        {
            matrix[i] = new int[cols];
        }
    }
    void setmatrix()
    {
        cout << "Enter matrix elemet" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }
    void display()
    {
        cout << "Matrix is:\n";
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
    void operator-()
    {
        cout << "Transpose of a Matrix is:\n";
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << matrix[j][i] << " ";
            }
            cout << "\n";
        }
    }
    void operator*(Matrix &obj)
    {
        int **result = new int *[rows];
        for (int i = 0; i < rows; ++i)
        {
            matrix[i] = new int[cols];
        }
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < obj.cols; ++j)
            {
                for (int k = 0; k < cols; ++k)
                {
                    result[i][j] += matrix[i][k] * obj.matrix[k][j];
                }
            }
        }
        cout << "Matrix maltipication is:\n";
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
int main()
{
    int row, clos;
    cout << "Enter rows for first matrix" << endl;
    cin >> row;
    cout << "Enter colums for first matrix" << endl;
    cin >> clos;
    Matrix m1(row, clos);
    m1.setmatrix();
    // -m1;
    // m1.display();
    cout << "Enter rows for second matrix" << endl;
    cin >> row;
    cout << "Enter colums for secon matrix" << endl;
    cin >> clos;
    Matrix m2(row, clos);
    m2.setmatrix();
    m1 *m2;
}