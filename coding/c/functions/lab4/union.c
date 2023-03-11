#include<stdio.h>
#include<string.h>
 union students{
        char name[20];
        int age;
        int roll_no;
        char branch[5];
    } stu[3];
    int main(){
     for(int i=0;i<3;i++){
        scanf("%s",stu[i].name);
        scanf("%d",&stu[i].age);
        scanf("%d",&stu[i].roll_no);
        scanf("%s",stu[i].branch);
    }
    for(int i=0;i<3;i++){
        printf("NAME : %s\n",stu[i].name);
        printf("AGE :%d\n",stu[i].age);
        printf("ROLL_NO :%d\n",stu[i].roll_no); 
        printf("BRANCH :%s\n",stu[i].branch);
    }
    return 0;
}