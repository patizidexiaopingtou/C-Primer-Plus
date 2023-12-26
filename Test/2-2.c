#include<stdio.h>
int main(){
    int age;
    printf("请输入您的年龄：");
    scanf("%d",&age);
    printf("您的年龄%d换算成天是%d\n",age,age*365);
    return 0;
}