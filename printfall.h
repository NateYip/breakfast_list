//
//  printfall.h
//  breakfast_list
//
//  Created by nate yip on 2019/12/31.
//  Copyright © 2019 nate yip. All rights reserved.
//

#ifndef printfall_h
#define printfall_h
#include "jiegou.h"


void printfitall(char *name)
{
  
    FILE *shuju=fopen(name,"r");
    char yhsj[30];
    float  yhq;
    printf("以下是所有账单条目：\n");
    float sum=0;
    while(fscanf(shuju,"%s", yhsj)!=EOF)
    {
        if(!strcmp(yhsj,"+"))
        printf("收入：\n");
        else printf("支出：\n");
        fscanf(shuju,"%f", &yhq);
        printf("金额：%0.2f元\n",yhq);
        if(!strcmp(yhsj,"+"))
            sum+=yhq;
        else sum-=yhq;
        fscanf(shuju,"%f", &yhq);
        printf("日期：%0.f号\n",yhq);
        
        fscanf(shuju,"%s", yhsj );
        printf("原因：%s\n",yhsj);
        
    }
    printf("结余：%0.2f元\n",sum);
    fclose(shuju);
    
}

#endif /* printfall_h */
