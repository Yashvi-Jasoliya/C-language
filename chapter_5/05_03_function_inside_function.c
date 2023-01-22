#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();
    
return 0;
}

void goodMorning(){
    printf("Good Morning yashvi\n");
    goodAfternoon();
}

 void goodAfternoon(){
    printf("Good Afternoon yashvi\n");
    goodNight();
}

 void goodNight(){
    printf("Good Night yashvi\n");   // which function accept value that's called parameters
                                     // which function return value that's called return value
}
