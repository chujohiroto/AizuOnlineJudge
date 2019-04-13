/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1153&lang=jp
*/

#include <stdio.h>

int GetTotal(int *cards, int len)
{
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        total += cards[i];
    }
    return total;
}

int main()
{
    for (;;)
    {
        int N, M;
        //Nが太郎の枚数
        //Mが花子の枚数
        scanf("%d %d", &N, &M);

        if (N == 0 && M == 0)
        {
            break;
        }

        int NCards[N];
        int MCards[M];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &NCards[i]);
        }

        for (int i = 0; i < M; i++)
        {
            scanf("%d", &MCards[i]);
        }

        if (GetTotal(NCards, N) == GetTotal(MCards, M))
        {
            printf("-1\n");
        }

        int tNCards[N];
        int tMCards[M];
        for (int i = 0; i < N; i++)
        {
            tNCards[i] = NCards[i];
        }

        for (int i = 0; i < M; i++)
        {
            tMCards[i] = MCards[i];
        }

        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                int tn = tNCards[i];
                int tm = tMCards[i];
                tMCards[j] = tn;
                tNCards[j] = tm;

                if (GetTotal(tNCards, N) == GetTotal(tMCards, M))
                {
                    printf("%d %d\n", tn, tm);
                }
            }
        }

        return 0;
    }
}