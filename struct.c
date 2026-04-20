#include <stdio.h>

typedef struct{
    char name[40];
    int age;
    float gpa;
}StuDetails;
void stu(StuDetails student);
int main(){
     StuDetails student1 = {"GuruK",18,8.52};
     StuDetails student2 = {"mog",18,8.52};
     StuDetails student3 = {"roh",18,8.52};

     stu(student1);


    
}

void stu(StuDetails student){
    printf("Name : %s\n",student.name);
    printf("age: %d\n",student.age);
    printf("gpa : %.2f\n",student.gpa);
}