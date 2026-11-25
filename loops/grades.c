#include <stdio.h>
int main(){
int score;
// char grade[3];
printf("Enter the student's score (0-100): ");
scanf("%d", &score);
if (score >= 91 && score <= 100) {
    printf("Grade: AA\n");
} else if ( score >= 81 && score <= 90){
    printf("Grade: AB\n");
} else if ( score >= 71 && score <= 80){
    printf("Grade: BB\n");
} else if ( score >= 61 && score <= 70){
    printf("Grade: BC\n");
} else if ( score >= 51 && score <= 60){
    printf("Grade: CC\n");
} else if ( score >= 41 && score <= 50){
    printf("Grade: CD\n");
} else if ( score >= 34 && score <= 40){
    printf("Grade: DD\n");
} else if ( score >= 0 && score <= 33){
    printf("Grade: FF\n");    
} else {
    printf("Invaild score. please enter a score between 0 and 100.\n");
    return 1;
}
return 0;
}
