#include <iostream>
using namespace std;
class MatrixOperation;
class Matrix1
{
    int a[3][3];
public:
    void getData()
    {
        cout << "Enter elements of Matrix 1:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    friend class MatrixOperation;
};

class Matrix2
{
    int b[3][3];
public:
    void getData()
    {
        cout << "Enter elements of Matrix 2:\n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> b[i][j];
            }
        }
    }
    friend class MatrixOperation;
};

class MatrixOperation
{
public:
    void compare(Matrix1 m1, Matrix2 m2)
    {
        int flag = 1;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (m1.a[i][j] != m2.b[i][j])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 0)
                break;
        }
        if (flag == 1)
            cout << "Matrices are equal.";
        else
            cout << "Matrices are not equal.";
    }
};

int main()
{
    Matrix1 m1;
    Matrix2 m2;
    MatrixOperation obj;
    m1.getData();
    m2.getData();
    obj.compare(m1, m2);
    return 0;
}
