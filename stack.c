/*building stack for operations 
and then using it for push and pop
writing pop and push functions for stack 
We are trying to impelment stack using array 
and let's see who everything works*/
#include<stdio.h>
#include<stdlib.h>
int pop(int top);
int push(int val);
void dis();
int top=-1;
int a[5];
int main(){
    int val;
    int t=4;
    while(t--){
    char opt;
    printf("Enter the options: \n");
    printf("Enter 1) for push opretion \n");
    printf("Enter 2) for pop opretion \n");
    printf("Enter 3) for print opretion \n");

    scanf("%d",&opt);
    switch (opt)
    {
    case 1:{
        top+=1;
        scanf("%d",&val);
        push(val);
        
        break;
    }
    case 2:{
        top-=1;
        pop(top);
        
        break;
    }
    case 3:{
        if(top==-1)
            printf("The stack is empty!\n");
        else
           dis();
    }
    default:
        break;
    }
    }
   return 0;
}
int pop(int top){
    if(top==-1){
        printf("The stack is empty can't, underflow!");
    }
    else{
        top-=1;
        printf("%d",a[top]);
    }
}
int push(int val){
    if (top==4)            
    {
        printf("Stackoverflow!");
    }
    else{
        a[top]=val;
        printf("element is succefully pushed onto the stack!");
    }
}
void dis(){
    for (int i = top; i >=0; --i)
    {
        printf("%d ",a[i]);
    }
    
}
