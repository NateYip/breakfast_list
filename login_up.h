//
//  login_up.h
//  breakfast_list
//
//  Created by nate yip on 2019/12/16.
//  Copyright © 2019 nate yip. All rights reserved.
//

#ifndef login_up_h
#define login_up_h


#include "jiegou.h"
#include <stdlib.h>
#define lenofyh 12
#define lenofpw 15

extern struct yonghu *p;

int jiancehefa(char *a,int x)
{
    int q=1,l=strlen(a);
    if(l>x||l==0)   q=0;
    return q;
}


int chuangjian()
{
    struct yonghu *newyonghu;
    newyonghu=(struct yonghu*) malloc(sizeof(struct yonghu));
    p->next=newyonghu;
    
    while(1)
    {
        printf("请输入少于12个字符的用户名：\n");
        
        scanf("%s",newyonghu->name);
        if(!jiancehefa(newyonghu->name,lenofyh))
            printf("用户名非法，请重新输入少于12（且不为空）个字符的用户名：\n");
        else break;
    }
   
    while(1)
    {
        printf("请输入少于15个字符的用户密码：\n");
        
        scanf("%s",newyonghu->pw);
        if(!jiancehefa(newyonghu->name,lenofpw))
            printf("用户名非法，请重新输入少于15（且不为空）个字符的密码：\n");
        else break;
    }
    newyonghu->next=NULL;
    p=newyonghu;
    extern int n;n++;
    return 0;
    
}

#endif /* login_up_h */
