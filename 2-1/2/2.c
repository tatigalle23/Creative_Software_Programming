#include<stdio.h>

typedef struct{
    int xpos;
    int ypos;
}Point;

Point getScale2xPoint(const Point* pi){
    
    Point pb;
    pb.xpos=pi->xpos*2;
    pb.ypos=pi->ypos*2;
    return pb;
    
}

void swapPoints(Point* p1, Point* p2){
    Point temp= *p1;
    *p1=*p2;
    *p2=temp;
}


int main(){
    Point p1;
    Point p2;

    scanf("%d %d", &p1.xpos, &p1.ypos);
    scanf("%d %d", &p2.xpos, &p2.ypos);
        
    
    printf("Calling getScale2xPoint() \n");

    Point pa=getScale2xPoint(&p1);
    printf("P1: %d %d \n", pa.xpos, pa.ypos);
    Point pb=getScale2xPoint(&p2);
    printf("P2: %d %d \n", pb.xpos, pb.ypos);
    printf("\n");

    printf("Calling swapPoint() \n");
    swapPoints(&pa, &pb);
    printf("P1: %d %d \n", pa.xpos, pa.ypos);
    printf("P2: %d %d \n", pb.xpos, pb.ypos);

}
