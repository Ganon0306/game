#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    printf("당신은 모험을 떠났다.\n");

    int myhp = 50;
    int enhp = 10;
    int adven = 0;

    while (1)
    {


        if (adven <= 5)
        {
            printf("어디로 갈지 고민중이다... \n\n");
            _getch();

            srand(time(NULL));
            int way = 0;                    //어디를 갈지
            const int where = 10;
            way = (rand() % where) + 1;

            int incount = 0;                //몬스터 조우 확률
            const int mons = 10;
            incount = (rand() % mons) + 1;

            if (1 <= way && way <= 3)
            {
                printf("당신은 길을 따라 걷기로 했다.\n");          //길 스택 1
                adven = adven + 1;
                printf("목적지에 조금 가까워 진듯하다. %d/6 \n", adven);
                printf("아무키나 눌러서 진행\n\n");
                _getch();
            }

            else if (4 <= way && way <= 5)
            {
                printf("당신은 숲으로 들어가기로 했다.\n");          //아무 일도 없었다

                printf("숲에서 길을 잃어 원래 자리로 되돌아 왔다.\n");
                printf("아무키나 눌러서 진행\n\n");
                _getch();
            }

            else
            {
                printf("당신은 멀리서 흥미를 끄는 불빛을 따라가기로 했다.\n");


                if (incount <= 4)                       //40%
                {
                    printf("불빛은 몬스터가 피운 불이었다!!\n전투가 시작된다!!\n\n");
                    _getch();

                    printf("눈이 10개인 주사위를 굴려 6 이하가 나오면 크리티컬!\n");
                    printf("나의 능력치 hp %d, atk 2, 회피율 10%\n", myhp);
                    printf("적의 능력치 hp 10, atk 4, 회피율 10%\n");

                    while (myhp > 0 || enhp > 0)
                    {
                        srand(time(NULL));
                        int randomnum = 0;              //공격의 크리티컬
                        const int dmg = 10;
                        randomnum = (rand() % dmg) + 1; //크리티컬 확률



                        int myatk = 0;
                        myatk = (rand() % 10) + 1;          //나의 공격 명중률

                        int enatk = 0;
                        enatk = (rand() % 10) + 1;          //적의 공격 명중률

                        printf("나의 hp : %d\n적의 hp : %d\n----------\n", myhp, enhp);
                        printf("아무키나 눌러서 룰렛 돌리기\n\n");
                        _getch();

                        if (myatk <= 9)                     //내 공격 성공시
                        {
                            printf("주사위는 %d가 나왔다!\n", randomnum);   //크리티컬 진행
                            if (randomnum <= 6)
                            {
                                printf("크리티컬 성공! 적에게 3의 대미지!\n\n");
                                enhp = enhp - 3;
                            }
                            else
                            {
                                printf("크리티컬 실패! 적에게 2의 대미지!\n\n");
                                enhp = enhp - 2;
                            }
                        }
                        else
                        {
                            //내 공격 실패시
                        }
                        {
                            printf("공격이 빗나갔다!\n");
                        }

                        if (enatk <= 9)                     //적의 공격 성공시
                        {
                            printf("적의 공격! 4 데미지를 입었다!\n\n");
                            myhp = myhp - 4;
                        }
                        else                                //적의 공격 실패시
                        {
                            printf("적의 공격이 빗나갔다!\n\n");
                        }
                        if (myhp <= 0)                      //죽으면 게임 끝
                        {
                            printf("패배했다....");
                            return 0;
                        }
                        if (enhp <= 0)                      //승리시 계속 진행
                        {
                            printf("승리했다!\n");
                            printf("당신은 다시 길을 나선다.\n\n");
                            enhp = 10;
                            _getch();
                            break;
                        }
                    }

                }
                else
                {
                    printf("불빛은 요정의 샘에서 뿜어져 나오고 있었다! \n당신의 hp가 5 회복된다!\n\n");
                    if (myhp + 5 > 50)          //회복시 50 넘지 않게
                    {
                        myhp = 50;
                    }
                    else
                    {
                        myhp = myhp + 5;
                    }
                    printf("%d/50\n\n", myhp);
                }
            }


        }
        else
        {
            printf("당신은 목적지에 도착했다!!\n");
            return 0;
        }
    }

}
//최종수정 230603 15:57