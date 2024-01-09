#include <stdio.h>

int main()
{
    int data_arr[50][2];
    int output_arr[50][2];
    int output_num = 0;
    for(int i=0;i<50;i++)
    {
        data_arr[i][0] = -999;
        data_arr[i][1] = 0;
    }
    int tmp;
    int is_new;
    while(1)
    {
        scanf("%d", &tmp);
        if(tmp == -999)
            break;
        is_new = 1;
        for(int i=0;i<50;i++)//check if the number has already existed
        {
            if(tmp == data_arr[i][0])
            {
                data_arr[i][1]+=1;
                is_new = 0;
                break;
            }
        }
        if(is_new)
        {
            data_arr[output_num][0] = tmp;
            data_arr[output_num][1] +=1;
            output_num +=1;
        }
    }
    //bubble sort
    int num_tmp;
    int cnt_tmp;
    for(int i=0;i<output_num-1;i++)
    {
        for(int j=0;j<output_num-i-1;j++)
        {
            if(data_arr[j][0]<data_arr[j+1][0])//swap
            {
                num_tmp = data_arr[j][0];
                cnt_tmp = data_arr[j][1];
                data_arr[j][0] = data_arr[j+1][0];
                data_arr[j][1] = data_arr[j+1][1];
                data_arr[j+1][0] = num_tmp;
                data_arr[j+1][1] = cnt_tmp;

            }
        }
    }
    for(int i=0;i<output_num;i++)
    {
        printf("%d %d\n", data_arr[i][0], data_arr[i][1]);
    }
}
