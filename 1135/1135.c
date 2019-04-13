/*
    http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1135&lang=jp
*/

#include <stdio.h>

int main()
{

    for (;;)
    {
        //Mはデータセット数
        int M;
        scanf("%d", &M);

        for (int i = 0; i < M; i++)
        {
            int 初期運用資金量;
            scanf("%d", &初期運用資金量);
            int 合計資金 = 初期運用資金量;
            int 運用年数;
            scanf("%d", &運用年数);
            //運用方法の種類数
            int N;
            scanf("%d", &N);
            //運用方法
            for (int j = 0; j < N; j++)
            {
                int 単利or複利, 手数料;
                double 年利率;
                scanf("%d %lf %d", &単利or複利, &年利率, &手数料);

                //単利
                if (単利or複利 == 0)
                {
                    int plus = 初期運用資金量 * 年利率 * 運用年数;
                    printf("+%d\n", plus);
                    合計資金 += plus;
                }
                //複利
                else if (単利or複利 == 1)
                {
                                }
            }
            printf("合計:%d\n", 合計資金);
        }
        return 0;
    }
}
