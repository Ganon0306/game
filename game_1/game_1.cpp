#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    printf("����� ������ ������.\n");

    int myhp = 50;
    int enhp = 10;
    int adven = 0;

    while (1)
    {


        if (adven <= 5)
        {
            printf("���� ���� ������̴�... \n\n");
            _getch();

            srand(time(NULL));
            int way = 0;                    //��� ����
            const int where = 10;
            way = (rand() % where) + 1;

            int incount = 0;                //���� ���� Ȯ��
            const int mons = 10;
            incount = (rand() % mons) + 1;

            if (1 <= way && way <= 3)
            {
                printf("����� ���� ���� �ȱ�� �ߴ�.\n");          //�� ���� 1
                adven = adven + 1;
                printf("�������� ���� ����� �����ϴ�. %d/6 \n", adven);
                printf("�ƹ�Ű�� ������ ����\n\n");
                _getch();
            }

            else if (4 <= way && way <= 5)
            {
                printf("����� ������ ����� �ߴ�.\n");          //�ƹ� �ϵ� ������

                printf("������ ���� �Ҿ� ���� �ڸ��� �ǵ��� �Դ�.\n");
                printf("�ƹ�Ű�� ������ ����\n\n");
                _getch();
            }

            else
            {
                printf("����� �ָ��� ��̸� ���� �Һ��� ���󰡱�� �ߴ�.\n");


                if (incount <= 4)                       //40%
                {
                    printf("�Һ��� ���Ͱ� �ǿ� ���̾���!!\n������ ���۵ȴ�!!\n\n");
                    _getch();

                    printf("���� 10���� �ֻ����� ���� 6 ���ϰ� ������ ũ��Ƽ��!\n");
                    printf("���� �ɷ�ġ hp %d, atk 2, ȸ���� 10%\n", myhp);
                    printf("���� �ɷ�ġ hp 10, atk 4, ȸ���� 10%\n");

                    while (myhp > 0 || enhp > 0)
                    {
                        srand(time(NULL));
                        int randomnum = 0;              //������ ũ��Ƽ��
                        const int dmg = 10;
                        randomnum = (rand() % dmg) + 1; //ũ��Ƽ�� Ȯ��



                        int myatk = 0;
                        myatk = (rand() % 10) + 1;          //���� ���� ���߷�

                        int enatk = 0;
                        enatk = (rand() % 10) + 1;          //���� ���� ���߷�

                        printf("���� hp : %d\n���� hp : %d\n----------\n", myhp, enhp);
                        printf("�ƹ�Ű�� ������ �귿 ������\n\n");
                        _getch();

                        if (myatk <= 9)                     //�� ���� ������
                        {
                            printf("�ֻ����� %d�� ���Դ�!\n", randomnum);   //ũ��Ƽ�� ����
                            if (randomnum <= 6)
                            {
                                printf("ũ��Ƽ�� ����! ������ 3�� �����!\n\n");
                                enhp = enhp - 3;
                            }
                            else
                            {
                                printf("ũ��Ƽ�� ����! ������ 2�� �����!\n\n");
                                enhp = enhp - 2;
                            }
                        }
                        else
                        {
                            //�� ���� ���н�
                        }
                        {
                            printf("������ ��������!\n");
                        }

                        if (enatk <= 9)                     //���� ���� ������
                        {
                            printf("���� ����! 4 �������� �Ծ���!\n\n");
                            myhp = myhp - 4;
                        }
                        else                                //���� ���� ���н�
                        {
                            printf("���� ������ ��������!\n\n");
                        }
                        if (myhp <= 0)                      //������ ���� ��
                        {
                            printf("�й��ߴ�....");
                            return 0;
                        }
                        if (enhp <= 0)                      //�¸��� ��� ����
                        {
                            printf("�¸��ߴ�!\n");
                            printf("����� �ٽ� ���� ������.\n\n");
                            enhp = 10;
                            _getch();
                            break;
                        }
                    }

                }
                else
                {
                    printf("�Һ��� ������ ������ �վ��� ������ �־���! \n����� hp�� 5 ȸ���ȴ�!\n\n");
                    if (myhp + 5 > 50)          //ȸ���� 50 ���� �ʰ�
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
            printf("����� �������� �����ߴ�!!\n");
            return 0;
        }
    }

}
//�������� 230603 15:57