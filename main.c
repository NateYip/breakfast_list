//
//  main.c
//  breakfast_list
//this porject is created to make a list of breakfast
//  Created by nate yip on 2019/12/12.
//  Copyright © 2019 nate yip. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jiegou.h"
#include "duru.h"
#include "login_in.h"
#include "login_up.h"
#include "printfall.h"
#include "getinput.h"
#include "delet.h"
#include "xiugai.h"

struct yonghu *head = NULL;
struct yonghu *now;
int n=0;
struct yonghu *p,*q;


int main(int argc, const char * argv[])
{
    
    
    xiejinqu();
    printf("欢迎使用记账本！\n请输入用户名：\n");
    char xsn[44],xsm[44];//学生姓名,密码；
    
    while(1)
    {
        now=head;
       scanf("%s",xsn);
       a: if(panduan_yh(xsn))
        {
             
            printf("请输入密码：\n");
            //printf("%s",now->pw);
            
            while(1)
            {
                scanf("%s",xsm);
                
                if(panduan_pw(xsn,xsm))
                    break;
                else printf("密码错误，请重新输入\n");
            }
            break;
        }
        else
        {
            
            printf("用户不存在,请重新输入用户名或创建用户（创建用户请输入yes）：\n");
            scanf("%s",xsn);
            
            if(!strcmp(xsn, "yes"))
            {
                chuangjian();
                printf("创建成功！\n请输入用户名：\n");
                now=head;
            }
            else
                goto a;
            
        }
        

    }
    printf("login in successed\n");

   char *houzhui=".txt";
   strcat(xsn, houzhui);
   char ben[100]={"/Users/nateyip/Desktop/breakfast_list/yonghushuju/"};
   strcat(ben,xsn);
    printf("1:写入数据;2:删除数据;3:打印数据;4:修改数据;5:退出程序;\n");
    int k=0;
    
    while (k==0)
    {
        
        printf("请输入操作选项：\n");
        int caozuo;
        scanf("%d",&caozuo);
    
        switch (caozuo)
        {
                case 1:
                    getinput(ben);
                    break;
                case 2:
                    delete_project(ben);
                    break;
                case 3:
                    printfitall(ben);
                    break;
            case 5:
                k=1;
                break;
                
            case 4:
                xiugai_project(ben);
                break;
            default:
                    printf("未知命令,请参考:\n1:写入数据;2:删除数据;3:打印数据;4:修改数据;5:退出程序;");
                    break;
        }
            
    }
    
    printf("欢迎使用！");
    return 0;
    
}
