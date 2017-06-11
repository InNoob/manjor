#include<stdio.h>  
#include<stdlib.h>  
#include<time.h>
 
int main()
{

    int a[60];
    int b[60];
    int w = 0;
    int wi,wj,wii;
    int i,j,index,x=0,m;
    for(i=0;i<54;i++)
        a[i]=i+1;
    srand((unsigned)time(0));
    for(i=0;i<54;)
    {
        index=rand()%54;
        if(a[index]!=0)
        {
            b[i]=a[index];
            //printf("%d ",b[i]);
            a[index]=0;
            ++i;
        }
    }
    printf("\n说明：\n");
    printf("*******************\n");
    printf("**    红桃 %c     ",3);
    printf("**\n")
    printf("**    方块 %c     ",4);
    printf("**\n");
    printf("**    梅花 %c     ",5);
    printf("**\n");
    printf("**    黑桃 %c     ",6);
    printf("**\n");
    printf("**    大王 A     **\n**    小王 a     **\n");
    printf("*******************\n");
    printf("\n请输入打牌人数：\n");
    scanf("%d",&w);
    wi = 54/w;
    wj = 54%w;
    //printf("%d,%d",wi,wj);
    for (j = 0;j < w;j++)
    {
        m = 0;
        printf("\n\n第%d个人的牌\n",j+1);
        wj --;
        if (wj>=0)
            wii = wi + 1;
        else
            wii = wi;
 
        //红桃
        printf("红桃 %c ",3);
        printf(":");
        for(i = j*wii;i<(j+1)*wii;i++)
        {
            if (b[i]<=13&&b[i]>0)
            {
                m++;
                if (b[i]==11)
                    printf("J ");
                else if (b[i]==12)
                    printf("Q ");
                else if (b[i]==13)
                    printf("K ");
                else
                printf("%d ",b[i]);
            }
        }
 
         
        //方块
        printf("\n方块 %c ",4);
        printf(":");
        for(i = j*wii;i<(j+1)*wii;i++)
        {
            if (b[i]<=26&&b[i]>13)
            {
                m++;
                b[i] = b[i]-13;
                if (b[i]==11)
                    printf("J ");
                else if (b[i]==12)
                    printf("Q ");
                else if (b[i]==13)
                    printf("K ");
                else
                printf("%d ",b[i]);
            }
        }
 
        //梅花
        printf("\n梅花 %c ",5);
        printf(":");
        for(i = j*wii;i<(j+1)*wii;i++)
        {
             
            if (b[i]<=39&&b[i]>26)
            {
                m++;
                b[i] = b[i]-26;
                if (b[i]==11)
                    printf("J ");
                else if (b[i]==12)
                    printf("Q ");
                else if (b[i]==13)
                    printf("K ");
                else
                printf("%d ",b[i]);
            }
        }
        //黑桃
        printf("\n黑桃 %c ",6);
        printf(":");
        for(i = j*wii;i<(j+1)*wii;i++)
        {
            if (b[i]<=52&&b[i]>39)
            {
                m++;
                b[i] = b[i]-39;
                if (b[i]==11)
                    printf("J ");
                else if (b[i]==12)
                    printf("Q ");
                else if (b[i]==13)
                    printf("K ");
                else
                printf("%d ",b[i]);
            }
        }
        //大小王
        printf("\n大小王 A or a :");
        for(i = j*wii;i<=(j+1)*wii;i++)
        {
            if (b[i]==53)
            {
                m++;
                printf("A ");
            }
            if (b[i]==54)
            {
                m++;
                printf("a ");
            }
        }
        printf("\n总共：%d张牌！！！",m);
    }
     
}