//
//  xiugai.h
//  breakfast_list
//
//  Created by nate yip on 2020/1/2.
//  Copyright © 2020 nate yip. All rights reserved.
//

#ifndef xiugai_h
#define xiugai_h

#include <stdio.h>
void xiugai_project(char *name)
{
    /*
    char *houzhui=".txt";
    strcat(name, houzhui);
    char ben[100]="/Users/nateyip/Desktop/breakfast_list/yonghushuju/";
    strcat(ben,name);
    */
    
    FILE *xiugaishuju=fopen(name,"r");
    struct zhangben *xxsming,*reread,*xiuhead;
    xiuhead=NULL;
    
    char yhsj[30];
    float  yhq;
    while(fscanf(xiugaishuju,"%s", yhsj)!=EOF)
    {
        
        xxsming=(struct zhangben *)malloc(sizeof(struct zhangben));
        strcpy(xxsming->ch, yhsj);
        fscanf(xiugaishuju,"%f", &yhq);
        xxsming->income_expense = yhq;
        fscanf(xiugaishuju,"%f", &yhq);
        xxsming->day = yhq;
        fscanf(xiugaishuju,"%s", yhsj );
        strcpy(xxsming->source_or_aim, yhsj);
        
        xxsming->next= NULL;
        
        if(xiuhead==NULL)
            xiuhead = xxsming;
        else reread->next=xxsming;
        reread=xxsming;
        
    }
    fclose(xiugaishuju);
    struct zhangben *current;
    current=xiuhead;
    printf("输入修改的日期:\n");
    float day;
    scanf("%f",&day);
    while (current != NULL && current->day != day)
        current = current->next;
    
    if (current == NULL)
    {
        printf("找不到匹配的选项\n");
        return;
    }
    else
    {
        int xiuk=0;
        while (xiuk==0) {
            int xiud;
            char xiug[33];
            float xiu;
            printf("输入修改项目\n1:收支;2:钱款;3:日期;4:原因;5:退出修改\n");
            scanf("%d",&xiud);
            switch (xiud) {
                case 1:
                    printf("输入修改数据：\n");
                    scanf("%s",xiug);
                    strcpy(current->ch,xiug);
                    break;
                case 2:
                    printf("输入修改数据：\n");
                    scanf("%f",&xiu);
                    current->income_expense=xiu;
                    break;
                case 4:
                    printf("输入修改数据：\n");
                    scanf("%s",xiug);
                    strcpy(current->source_or_aim,xiug);
                    break;
                case 3:
                    printf("输入修改数据：\n");
                    scanf("%f",&xiu);
                    current->day=xiu;
                    break;
                case 5:
                    xiuk=1;
                    break;
                default:
                    printf("未知命令，请参考：\n1:收支;2:钱款;3:日期;4:原因;5:退出修改\n");
                    break;
            }
        }
        
    }
    
    remove(name);

    FILE *rewrite;
    
    rewrite=fopen(name, "a");
    current= xiuhead;
    while (current!=NULL)
    {
        fprintf(rewrite, "%s\n",current->ch);
        fprintf(rewrite, "%f\n",current->income_expense);
        fprintf(rewrite, "%f\n",current->day);
        fprintf(rewrite, "%s\n",current->source_or_aim);
        current=current->next;
        
    }
    fclose(rewrite);
}

#endif /* xiugai_h */
