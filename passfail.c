#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks>=70){
        printf("You have passed the exam.");
    }
    else{
        printf("You have failed the exam.");
    }
    return 0;
}