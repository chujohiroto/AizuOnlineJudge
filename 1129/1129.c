/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1129&lang=jp
*/

#include <stdio.h>

int main()
{

    for (;;)
    {
        int N, R;
        //Nが山札のカードの枚数
        //Rが動かす回数
        scanf("%d %d", &N, &R);

        if (N == 0 && R == 0)
        {
            //printf("終わり");
            break;
        }

        //indexが実際の場所　中身が元の位置とする
        int Cards[N];
        //Temp領域
        int Temp[N];

        for (int i = 0; i < N; i++)
        {
            Cards[i] = N - i;
        }

        //まず表示
        for (int i = 0; i < N; i++)
        {
            // printf("%d\n", Cards[i]);
        }

        for (int i = 0; i < R; i++)
        {
            int P, C;
            scanf("%d %d", &P, &C);
            //まずはキャッシュに置く
            for (int l = 0; l < C; l++)
            {
                Temp[l] = Cards[P + l - 1];
            }

            //移動処理
            for (int i = 0; i < N; i++)
            {
                if (i == P - C)
                {
                    break;
                }
                if (P - i - 2 < 0)
                {
                    break;
                }
                Cards[P - i - 1] = Cards[P - i - 2];
                //printf("Moved %dから%d\n", P - i - 2, P - i - 1);

                //printf("移動%d回目結果\n", i + 1);
                for (int i = 0; i < N; i++)
                {
                    //printf("%d\n", Cards[i]);
                }
            }

            //キャッシュから戻す
            for (int k = 0; k < C; k++)
            {
                Cards[k] = Temp[k];
            }

            //printf("%d回目結果\n", i + 1);
            for (int i = 0; i < N; i++)
            {
                //printf("%d\n", Cards[i]);
            }
        }

        printf("%d\n", Cards[0]);
        //printf("次の問題\n");
    }
    return 0;
}
