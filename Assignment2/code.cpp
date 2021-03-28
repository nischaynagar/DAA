#include <bits/stdc++.h>
using namespace std;

int N = 0;

int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

bool inside(int x, int y)
{
    return (x >= 0 and x < N and y >= 0 and y < N);
}

double findProb(int start_x, int start_y, int steps)
{
    double dp1[N][N][steps + 1];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            dp1[i][j][0] = 1;

    for (int s = 1; s <= steps; ++s)
    {

        for (int x = 0; x < N; ++x)
        {
            for (int y = 0; y < N; ++y)
            {
                double prob = 0.0;

                for (int i = 0; i < 8; ++i)
                {
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if (inside(nx, ny))
                        prob += dp1[nx][ny][s - 1] / 8.0;
                }

                dp1[x][y][s] = prob;
            }
        }
    }

    return dp1[start_x][start_y][steps];
}

int main()
{
    int K;
    int x, y;
    cout << "Enter the size of chessboard ";
    cin >> N;
    cout << "Enter the number of steps ";
    cin >> K;
    cout << "Enter the space-separated position of knight ";
    cin >> x >> y;
    cout << findProb(x, y, K) << endl;

    return 0;
}
