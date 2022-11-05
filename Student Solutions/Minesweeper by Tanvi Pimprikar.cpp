#include<simplecpp>

main_program
{
    int n, m, k, x, y;
    cin >> n >> m >> k;
    char matrix[n + 2][m + 2];
    repeat(k)
    {
        cin >> x >> y;
        matrix[x][y] = 'M';
    }
    for (int x = 1; x <= n; x++)

        for (int y = 1; y <= m; y++) {
            int num = 0;
            if (matrix[x][y] == 'M')
                continue;

            for (int i = -1; i < 2; i++)
                for (int j = -1; j < 2; j++)
                    if (matrix[x + i][y + j] == 'M')
                        num++;

            matrix[x][y] = num + '0';
        }


    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= m; y++)
            cout << matrix[x][y] << " ";

        cout << endl;
    }
}