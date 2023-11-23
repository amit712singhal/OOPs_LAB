#include <iostream>
#include <vector>

using namespace std;

class MATRIX
{
private:
    int row;
    int col;
    vector<vector<int>> inp_array;

public:
    MATRIX(int m, int n) : row(m), col(n), inp_array(m, vector<int>(n)) {}

    void input_MATRIX()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "Enter the Value at (" << i << "," << j << "): ";
                cin >> inp_array[i][j];
            }
        }
    }

    void print_MATRIX()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << inp_array[i][j] << " ";
            }
            cout << endl;
        }
    }

    void add(const MATRIX &II_Matrix)
    {
        if (row != II_Matrix.row || col != II_Matrix.col)
        {
            cout << "Matrix dimensions are not compatible for addition." << endl;
            return;
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                inp_array[i][j] += II_Matrix.inp_array[i][j];
            }
        }
    }

    void subtract(const MATRIX &II_Matrix)
    {
        if (row != II_Matrix.row || col != II_Matrix.col)
        {
            cout << "Matrix dimensions are not compatible for subtraction." << endl;
            return;
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                inp_array[i][j] = inp_array[i][j] - II_Matrix.inp_array[i][j];
            }
        }
    }

    void multiply(const MATRIX &II_Matrix)
    {
        if (col != II_Matrix.row)
        {
            cout << "Matrix dimensions are not compatible for multiplication." << endl;
            return;
        }

        vector<vector<int>> result(row, vector<int>(II_Matrix.col, 0));

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < II_Matrix.col; j++)
            {
                for (int k = 0; k < col; k++)
                {
                    result[i][j] += inp_array[i][k] * II_Matrix.inp_array[k][j];
                }
            }
        }

        inp_array = result;
    }
};

int main()
{
    int m, n;
    cout << "\nEnter the Row_Size (m) :: ";
    cin >> m;
    cout << "Enter the Column_Size (n) :: ";
    cin >> n;

    MATRIX m1(m, n);
    cout << "\nEnter values for Matrix_1 ->\n";
    m1.input_MATRIX();
    cout << "Matrix_1 is ->\n";
    m1.print_MATRIX();

    MATRIX m2(m, n);
    cout << "\nEnter values for Matrix_2 ->\n";
    m2.input_MATRIX();
    cout << "Matrix_2 is ->\n";
    m2.print_MATRIX();

    m1.add(m2);
    printf("\nAddition (Matrix_1 + Matrix_2) is ->\n");
    m1.print_MATRIX();

    m1.subtract(m2);
    printf("\nSubtraction (Matrix_1 - Matrix_2) is ->\n");
    m1.print_MATRIX();

    m1.multiply(m2);
    printf("\nMultiplication (Matrix_1 * Matrix_2) is ->\n");
    m1.print_MATRIX();

    return 0;
}
