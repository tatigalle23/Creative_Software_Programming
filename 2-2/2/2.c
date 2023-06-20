#include<stdio.h>
#include<math.h>

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
    
    double maxX[3], maxY[3];
    double minX[3], minY[3]; 


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if (maxX[i]< p[i].points[j].x || maxY[i]<p[i].points[j].y)
            {
                maxX[i]=p[i].points[j].x;
                maxY[i]=p[i].points[j].y;                
            }      
        }       
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if (minX[i]> p[i].points[j].x || minY[i]>p[i].points[j].y)
            {
                minX[i]=p[i].points[j].x;
                minY[i]=p[i].points[j].y;                
            }      
        }       
    }
    //COMPARING BETWEEN THE MAX POSITIVE NUMBER AND MAX NEGATIVE NUMBER
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if (fabs(minX[i])> maxX[i] || fabs(minY[i])> maxY[i])
            {
                maxX[i]=minX[i];
                maxY[i]=minY[i] ;            
            }      
        }       
    }

   for( int i=0;i<3;i++){
         printf("%s (%.1f, %.1f) \n",names[i].name, maxX[i], maxY[i]);
    }   
    
}
