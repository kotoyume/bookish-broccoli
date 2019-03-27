#include <stdio.h>
#include <string.h>
int main()
{
    // 倒序输出
    // int i,a[10],m;
    // for(i = 0;i < 10;i++)
    // a[i] = i;
    // for(i = 0;i <= 4;i++)
    // {
        // m = a[9 - i];
        // a[9 - i] = a[i];
        // a[i] = m;
    // }
    // for(i = 0;i < 10;i++)
    // printf("%d ",a[i]);
    
    // 斐波那契数列
    // int i,a[20];
    // a[0] = 1;
    // a[1] = 1;
    // for(i = 2;i < 20;i++)
    // {
        // a[i] = a[i-2] + a[i-1];
    // }
    // for(i = 0;i < 20;i++)
    // printf("%d ",a[i]);
    
    // 选择法排序
    // int i,j,m,a[10];
    // for(i = 0;i < 10;i++)
    // {
        // scanf("%d",&a[i]);
    // }
    // for(i = 0;i < 9;i++)
    // {
        // for(j = i + 1;j < 10;j++)
        // {
            // if(a[j] < a[i])
            // {
                // m = a[i];
                // a[i] = a[j];
                // a[j] = m;
            // }
        // }
    // }
    // for(i = 0;i < 10;i++)
    // {
        // printf("%d ",a[i]);
    // }

    // int a[3][4],i,j;
    // for(i = 0;i < 3;i++)
    // {
    //     for(j = 0;j < 4;j++)
    //     scanf("%d",&a[i][j]);
    // }
    // int max = a[0][0];
    // int m = 0;
    // int k = 0; 
    // for(i = 0;i < 3;i++)
    // {
    //     for(j = 0;j < 4;j++)
    //     {
    //         if(a[i][j] > max)
    //         {
    //             max = a[i][j];
    //             m = i;
    //             k = j;
    //         }
    //     }
    // }
    // printf("%d\n%d\n%d\n",max,m,k);

    // char str1[10],str2[5];
    // scanf("%s",str1);
    // scanf("%s",str2);
    // int i;
    // for (i = 0; ;i++)
    // {
        // if (str2[i] == '\0')
        // {
            // str1[i] = '\0';
            // break;
        // }
        // str1[i] = str2[i];
    // }
    // printf("%s",str1);
    char str[10] = {"hjbdvjkdv"};
    printf("%s",str);
    strcpy(str,"hllo");
    printf("%s",str);
    return 0;
}