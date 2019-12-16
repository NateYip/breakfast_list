//
//  main.c
//  breakfast_list
//this porject is created to make a list of breakfast
//  Created by nate yip on 2019/12/12.
//  Copyright © 2019 nate yip. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "login_in.h"
#include "login_up.h"

struct yonghu
{
    char name[12];//学生姓名
    char pw[16];//此处为密码；
    struct yonghu *next;
};

struct yonghu xs= {
    .name="jian_jerry",
    .pw="wssbwsz",
    .next=NULL

};

int main(int argc, const char * argv[])
{
   
    xiejinqu();
    
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
        else
        {
            char chongxin[5];
            printf("用户不存在,请重新输入用户名或创建用户（创建用户请输入yes）：\n");
            scanf("%s",chongxin);
            
            if(!strcmp(chongxin, "yes"))
                chuangjian();
        }
        

    }
    printf("login in successed\n");
    
    
    return 0;
    
}
