//
//  main.c
//  breakfast_list
//this porject is created to make a list of breakfast
//  Created by nate yip on 2019/12/12.
//  Copyright © 2019 nate yip. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct xuesheng{
    char name[12];//学生姓名
    char pw[16];//此处为密码；
};
struct xuesheng xs = {
    .name="jian_jerry",
    .pw="wssbwsz"
};
int  panduan_yh(char *a)
{
    int q=0;
    if(!strcmp(xs.name,a))
        q=1;
    return q;
    
}

int  panduan_pw(char *a)
{
    int q=0;
    if(!strcmp(xs.pw,a))
        q=1;
    return q;
    
}
int main(int argc, const char * argv[])
{
    
    
    printf("欢迎使用记账本！\n请输入用户名：\n");
    char xsn[44],xsm[44];//学生姓名,密码；
    while(1)
    {
        scanf("%s",xsn);
        if(panduan_yh(xsn))
        {
             
            printf("请输入密码：\n");
            while(1)
            {
                scanf("%s",xsm);
                if(panduan_pw(xsm))
                    break;
                else printf("密码错误，请重新输入\n");
            }
            break;
        }
        else printf("用户不存在,请重新输入:\n");

    }
    printf("login in successed\n");
        
    return 0;
    
}
