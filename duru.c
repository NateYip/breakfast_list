//
//  duru.c
//  breakfast_list
//
//  Created by nate yip on 2019/12/16.
//  Copyright © 2019 nate yip. All rights reserved.
//

#include "duru.h"

struct yonghu
{
    char name[12];//学生姓名
    char pw[16];//此处为密码；
    struct yonghu *next;
};

void xiejinqu()
{
    struct yonghu *p,*q,*head=NULL;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char yh[22];
        char mima[22];
        scanf("%s",yh);
        scanf("%s",mima);
        q=(struct yonghu*)malloc(sizeof(struct yonghu));
        strcpy(q->name, yh);
        strcpy(q->pw, mima);
        q->next=NULL;
        if(head==NULL)
            head=q;
        else p->next=q;
        p=q;
    }
    
}
