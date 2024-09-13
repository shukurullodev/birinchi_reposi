#include<stdio.h>
#include<string.h>

 struct tekshir
 {
    char ism[50];
    int yosh;
    char das[50];
    char kask[50];
    int taj;
 };
 
int main(){
 struct tekshir talab[5];
 for(int i=0;i<2;i++){
    printf("ism kiriting: ");
    scanf("%s",talab->ism);
     printf("yosh kiriting: ");
    scanf("%d",&talab->yosh);
      printf("dasturlash tili kiriting: ");
    scanf("%s",talab->das);
     printf("mutaxasislik kiriting: ");
    scanf("%s",talab->kask);
     printf("tajribani  kiriting: ");
    scanf("%d",&talab->taj);
    if( talab->taj>1 || talab->kask == "Backend"){
     printf("%s\n",talab->ism);
     printf("%d\n",talab->yosh);
     printf("%s\n",talab->das);
     printf("%s\n",talab->kask);
     printf("%d\n",talab->taj);
    }else if(talab->das == "C" || talab->yosh<20){
     printf("%s\n",talab->ism);
     printf("%d\n",talab->yosh);
     printf("%s\n",talab->das);
     printf("%s\n",talab->kask);
     printf("%d\n",talab->taj+1);
    }
 }
 printf("Shukurillooh q alesan");
}