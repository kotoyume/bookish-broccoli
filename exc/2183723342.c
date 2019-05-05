#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int class;
    char name[30];
    double score[4];
}stu[20];

int indexes[20]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int length = 0;
int size = 0;

void print()
{
    printf("1.input\n");
    printf("2.delete\n");
    printf("3.select\n");
    printf("4.order\n");
    printf("5.output\n");
    printf("6.quit\n");
    printf("please input your option\n");
}

void input()
{
    int i;
    char con[10] = "yes";
    for ( i = length; strcmp(con,"yes") == 0; i++)
    {
        printf("id ");
        scanf("%d",&stu[i].id);
        printf("class ");
        scanf("%d",&stu[i].class);
        printf("name ");
        scanf("%s",stu[i].name);
        printf("score1 ");
        scanf("%lf",&stu[i].score[0]);
        printf("score2 ");
        scanf("%lf",&stu[i].score[1]);
        printf("score3 ");
        scanf("%lf",&stu[i].score[2]);
        stu[i].score[3] = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
        printf("continue?\n");
        scanf("%s",con);

        length++;
        size++;
    }
    if (strcmp(con,"no") == 0)
    {
        print();
    }
    
}

void delect()
{
    char ch[20], con[4];
    int n;

    while (1) {
        scanf("%s", ch);
        int res = sscanf(ch, "%d", &n);
        int i;

        /* 找到要删的元素的下标 */
        int index_to_delete = -1;
        if (res) {
            for (i = 0; i <= length; i++) {
                if (n == stu[i].id){
                    index_to_delete = i;
                }
            }
        } else {
            for (i = 0; i <= length; i++) {
                if (strcmp(ch, stu[i].name) == 0){
                    index_to_delete = i;
                }
            }
        }

        /* 删除 */
        if (index_to_delete >= 0) {
            indexes[index_to_delete] = 0;
            size--;
        }

        /* 输出学生信息 */
        for (i = 0; i < length; i++)
        {
            if (indexes[i] != 0)
            {
                printf("%d,%d,%s,",stu[i].id,stu[i].class,stu[i].name);
                printf("%.1f,%.1f,%.1f,%.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3]);
            }
        }

        /* 是否继续 */
        printf("continue?\n");
        scanf("%s",con);
        if (strcmp(con,"yes") != 0)
            break;
    }

    if (strcmp(con,"no") == 0)
    {
        print();
    }

    /*
    if (res)
    {
        for ( i = 0; i <= length; i++)
        {
            if(n == stu[i].id){
                indexes[i] = 0;
                size--;
            }
            for ( i = 0; i < length; i++)
            {
                if (indexes[i] != 0)
                {
                    printf("%d,%d,%s,",stu[i].id,stu[i].class,stu[i].name);
                    printf("%.1f,%.1f,%.1f,%.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3]);
                }

            } 
            printf("continue?\n");
            scanf("%s",con);
            if (strcmp(con,"yes") != 0)
                break;
        }
        if (strcmp(con,"no") == 0)
        {
            print();
        }
    }else
    {
        for ( i = 0; i <= length; i++)
        {
            if(strcmp(ch, stu[i].name) == 0){
                indexes[i] = 0;
                size--;
            }
            for ( i = 0; i < length; i++)
            {
                if (indexes[i] != 0)
                {
                    printf("%d,%d,%s,",stu[i].id,stu[i].class,stu[i].name);
                    printf("%.1f,%.1f,%.1f,%.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3]);
                }

            } 
            printf("continue?\n");
            scanf("%s",con);
            if (strcmp(con,"yes") != 0)
                break;
        }
        if (strcmp(con,"no") == 0)
        {
            print();
        }
    }   
    */
}

void select()
{
    int i, num, count = 0;
    char con[20];
    while (1) {
        scanf("%d",&num);
        for ( i = 0; i < length; i++)
        {
            if (indexes[i] == 0) continue;

            if (stu[i].id == num || stu[i].class == num)
            {
                printf("%d,%d,%s,",stu[i].id,stu[i].class,stu[i].name);
                printf("%.1f,%.1f,%.1f,%.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3]);
                count++;
            }
        }
        if (count == 0)
        {
            printf("there is no eligible student");
        }
        /* 是否继续 */
        printf("continue?\n");
        scanf("%s",con);
        if (strcmp(con,"yes") != 0)
            break;
    }
    if (strcmp(con,"no") == 0)
    {
        print();
    }
}

void order() {
    int i = 0, j = 0;
    struct Student temp;
    while (1)
    {
        while (indexes[i] == 0 && i <length)
        {
            i++;
        }
        if (i >= length)
            break;
        stu[j] = stu[i];
        i++;
        j++;
    }
    length = j;
    for ( i = 0; i < 20; i++)
    {
        indexes[i] = i + 1;
    }
    
    for ( i = 0; i < length; i++)
    {
        for(j = i + 1; j < length; j++)
        {
            int flag = 0;
            if (stu[i].class > stu[j].class) {
                flag = 1;
            } else if (stu[i].class < stu[j].class) {
                flag = -1;
            }
            if (flag == 0) {
                if (stu[i].score[3] > stu[j].score[3]) {
                    flag = 1;
                } else if (stu[i].score[3] < stu[j].score[3]) {
                    flag = -1;
                }
            }

            if (flag > 0)
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
            
        }
    }
    for (i = 0; i < length; i++)
    {
        printf("%d,%d,%s,",stu[i].id,stu[i].class,stu[i].name);
        printf("%.1f,%.1f,%.1f,%.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3]);
    }
    
    print();
}

void output()
{
    int i;
    for ( i = 0; i < length && indexes[i] != 0; i++)
    {
        printf("%d,%d,%s,",stu[i].id,stu[i].class,stu[i].name);
        printf("%.1f,%.1f,%.1f,%.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3]);
    }
    
    print();
}

int main(int argc, char* argv[])
{
    int sele, i;
    print();
    for ( i = 0; ; i++)
    {
        scanf("%d",&sele);
        if (sele == 1)
        {
            input(); 
        }
        if (sele == 2)
        {
            delect();
        }
        if (sele == 3)
        {
            select();
        }
        if (sele == 4)
        {
            order();
        }
        if (sele == 5)
        {
            output();
        }
        if (sele == 6)
        {
            break;
        }
        
    }
    
    
    return 0;
}
