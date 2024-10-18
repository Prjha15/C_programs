#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int age;
    char grade[100];
}student1,student2;
void print(struct student*ptr){
     printf("%s %d %s",ptr->name,ptr->age,ptr->grade);
}
int main(){
   strcpy(student1.name, "Priyanka Jha");
   student1.age=19;
   strcpy(student1.grade, "A1");
   strcpy(student2.name, "Priya Dhar");
   student2.age=21;
   strcpy(student2.grade, "A1");
   print(&student1);
   print(&student2);
return 0;
}