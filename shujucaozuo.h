//
//  shujucaozuo.h
//  breakfast_list
//
//  Created by nate yip on 2019/12/31.
//  Copyright © 2019 nate yip. All rights reserved.
//

#ifndef shujucaozuo_h
#define shujucaozuo_h
#include "jiegou.h"


void reread_information(char *name)
{
    char *houzhui=".txt";
    strcat(name, houzhui);
    char ben[100]={"/Users/nateyip/Desktop/breakfast_list/yonghushuju/"};
    strcat(ben,name);
    
    FILE *shuju=fopen(ben,"a");
    struct zhangben *xxsming,*reread,*head;
    head=NULL;
    
    char *yhsj;
    float  yhq;
    while(fscanf(shuju,"%s", yhsj)!=EOF)
    {
        
        xxsming=(struct zhangben *)malloc(sizeof(struct zhangben));
        strcpy(xxsming->ch, yhsj);
        fscanf(shuju,"%f", &yhq);
        xxsming->income_expense = yhq;
        fscanf(shuju,"%f", &yhq);
        xxsming->day = yhq;
        fscanf(shuju,"%s", yhsj );
        strcpy(xxsming->source_or_aim, yhsj);
        
        xxsming->next= NULL;
        
        if(head==NULL)
            head = xxsming;
        else reread->next=xxsming;
        xxsming=reread;
        free(reread);
    }
    fclose(shuju);
}
    




#endif /* shujucaozuo_h */


