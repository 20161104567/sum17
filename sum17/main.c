//
//  main.c
//  sum17
//
//  Created by 20161104567 on 17/6/15.
//  Copyright © 2017年 20161104567. All rights reserved.
//

#include <stdio.h>

int main(int argc,const char * argv[]) {
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//a20161104567//Desktop//sum17//input.txt","r+");
    fw=fopen("//Users//a20161104567//Desktop//sum17//output.txt","w");
    int a,b,c;
    fscanf(fr,"%d%d",&a,&b);
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
    fprintf(fw,"%d+%d=%d\n",a,b,c);
    return 0;
}
