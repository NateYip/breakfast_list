//
//  login_up.c
//  breakfast_list
//
//  Created by nate yip on 2019/12/16.
//  Copyright © 2019 nate yip. All rights reserved.
//


#include<stdio.h>
#include<string.h>
#define lenofyh 12
#define lenofpw 15
#include "main.c"

int jiancehefa(char a,int x)
{
    int q=1,l=strlen(a);
    if(l>x||l==0)   q=0;
    return q;
}


int chuangjian()
{
    struct yonghu *xs1,*xs2,*head=NULL;
    xs1=(struct yonghu*) malloc(sizeof(struct yonghu));
   
    while(1)
    {
        printf("请输入少于12个字符的用户名：\n");
        
        scanf("%s",xs1->name);
        if(!jiancehefa(xs1->name,lenofyh))
            printf("用户名非法，请重新输入少于12（且不为空）个字符的用户名：\n");
        else break;
    }
   
    while(1)
    {
        printf("请输入少于15个字符的用户密码：\n");
        
        scanf("%s",xs1->pw);
        if(!jiancehefa(xs1->name,lenofpw))
            printf("用户名非法，请重新输入少于15（且不为空）个字符的密码：\n");
        else break;
    }
    
    
    return 0;
    
}
