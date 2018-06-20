#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


struct node{
    int data;
    struct node *before;
};

//構造体のポインタを引数とし，内容を表示する関数
void print_stuck_func(struct node *p) {
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}

void push_k(char *command) {
    /*
    int i, j, base, n, sum = 0;
    int *k;
    /**k_tmp; //commandで入力された数を格納するポインタ変数*/
    k = (int *)malloc(sizeof(int));
    if (k == NULL) {
        free(num);
        free(command);
        return 0;
    }
    
    for (i = 5, j = 0; command[i] != '\0'; i++, j++) {
        k[j] = command[i];
    }
    for (n = j, base = 1; n != 0; n--, base++) {
        sum += k[n] * pow(10, base - 1);
    }
    
}

//先頭のノードを取り出し，データを表示．
void pop(char *command, struct node *num){
    if (num[0] != NULL) {
        printf("%d\n", num[0]);
        num[0].data = NULL;
    }else {
        printf("NULL\n");
    }
}

void print(){
    for (int i = 7; command[i] != '\0'; i++) {
        <#statements#>
    }
}

void search_k(){
    
}

void quit(){
    
}

int main(void) {
    struct node *head = NULL;
    struct node *num, *p;
    const char push_k[] = "push", pop[] = "pop", print[] = "print", search_k[] = "search", quit[] = "quit";
    char *ret;
    
    num = (int *)malloc(sizeof(int));
    if (num == NULL) {
        return 0;
    }
    char *command;
    command = (char *)malloc(sizeof(char));
    if (command == NULL) {
        free(num);
        return 0;
    }
    
    
    while (1) {
        
        printf("input command:");
        scanf("%s", command);
        
        
        if ((ret = strstr(command, push_k)) != NULL) {  //push kが入力された時
            push_k(&command);
        }else if((ret = strstr(command, pop)) != NULL) {  //popが入力された時
            pop(command, num);
        }else if ((ret = strstr(command, print)) != NULL) {    //printが入力された時
            print_stuck_func(num);
        }else if ((ret = strstr(command, search_k)) != NULL) {   //searchが入力された時
            search_k(command);
        }else if ((ret = strstr(command, quit)) != NULL) {      //quitが入力された時
            printf("quit\n");
            return 0;
        }
        //ここでcommandをreallocする．
        command = realloc(command, sizeof(<#expression-or-type#>))
            
    }
    /*
    //線形リストに1~10を代入
    head = &num[0];
    for (i = 0; i < 10; i++) {
        num[i].data = i + 1;
        if (i == 9) {
            num[i].next = NULL;
        }else {
            num[i].next = &num[i + 1];
        }
    }
    
    p = head;
    printfunc(p);
     */
    free(num);
    free(command);
    return 0;
}




//////////////////////////////
///////線形リスト2のコード////////
//////////////////////////////
/*
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};



int main(void) {
    struct node *head = NULL;
    struct node *num, *p;
    num = (int *)malloc(sizeof(int));
    if (num == NULL) {
        return 0;
    }
    int i = 0;
    
    //整数を繰り返し入力して線形リストをつくる．push
    head = &num[0];
    while (1) {
        printf("input node:");
        scanf("%d", &num[i].data);
        if (num[i].data < 0) { //負の値が入力されたら終了
            num[i - 1].next = NULL;
            break;
        }else {
            num[i].next = &num[i + 1];
        }
        i++;
    }
    
    p = head;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
    free(num);
    free(p);
    return 0;
}
*/


