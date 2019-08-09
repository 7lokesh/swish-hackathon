#include<stdio.h>
#include<math.h>
int main(){
    
    float x,p;
    int req=0;
    scanf("%f%f",&x,&p);
    while(x>0){
        req+=x;
        x=floor(x-(x*(p/100)));
    }
    printf("%d\n",(int)req);
    return 0;
    
}