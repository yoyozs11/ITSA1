#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    while(case_num--)
    {
        int input;
        scanf("%d", &input);
        int I_cnt=0, V_cnt=0, X_cnt=0, L_cnt=0, C_cnt=0, D_cnt=0, M_cnt=0;
        M_cnt = input/1000;
        input -= M_cnt*1000;
        D_cnt = input/500;
        input -= D_cnt*500;
        C_cnt = input/100;
        input -= C_cnt*100;
        L_cnt = input/50;
        input -= L_cnt*50;
        X_cnt = input/10;
        input -= X_cnt*10;
        V_cnt = input/5;
        input -= V_cnt*5;
        I_cnt = input/1;
        input -= I_cnt*1;
        if(M_cnt)//1000
        {
            M_cnt-=1;
            printf("M");
        }
        if(D_cnt==1 && C_cnt==4)//900~1000
        {
            D_cnt-=1;
            C_cnt-=4;
            printf("CM");
        }
        else if(D_cnt==1 && C_cnt!=4)//500~899
        {
            D_cnt-=1;
            printf("D");
        }
        if(C_cnt==4)//400~499
        {
            C_cnt-=4;
            printf("CD");
        }
        if(C_cnt)//100~399
        {
            for(int i=C_cnt;i>0;i--)
                printf("C");
        }
        if(L_cnt==1 && X_cnt==4)//90~99
        {
            L_cnt-=1;
            X_cnt-=4;
            printf("XC");
        }
        if(L_cnt)//50~89
        {
            L_cnt-=1;
            printf("L");
        }
        if(X_cnt==4)//40~49
        {
            X_cnt-=4;
            printf("XL");
        }
        if(X_cnt)//10~39
        {
            for(int i=X_cnt;i>0;i--)
                printf("X");
        }
        if(I_cnt==4 && V_cnt==1)//9
        {
            V_cnt-=1;
            I_cnt-=4;
            printf("IX");
        }
        if(V_cnt)//5~8
        {
            printf("V");
        }
        if(I_cnt==4)//4
        {
            I_cnt-=4;
            printf("IV");
        }
        else//1~3
        {
            for(int i=I_cnt;i>0;i--)
                printf("I");
        }
        printf("\n");
    }
}
