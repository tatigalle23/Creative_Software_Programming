#include<stdio.h>

typedef struct
{
    double x;
    double y;
} Point;

typedef struct
{
    char name[7];
    Point points[3];
} Person;

int main(void){
    Person p[3];
    Person names[3];
   for(int i=0;i<3;i++){
        scanf("%s",names[i].name);
        for(int j=0; j<3;j++){
            scanf("%lf %lf",&p[i].points[j].x,&p[i].points[j].y);        
        }
        
    } 
    for(int i=0;i<3;i++){
        printf("%s ",names[i].name);
        for(int j=0; j<3;j++){
            printf("(%.1f %.1f) ",p[i].points[j].x,p[i].points[j].y);        
        }
        printf("\n");
    } 
}
