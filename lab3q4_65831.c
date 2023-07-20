#include <stdio.h>
int main() {
	int sum,num,count;
        float avg;
	printf("enter number : \n");
	while(1){
	  scanf("%d",&num);
	  if(num>0){
          sum+=num;
          count++;
          }else{
          break;
          }
        } 
        avg = (float)sum/count;	
        printf("sum : %d\n",sum); 
        printf("avg : %.2f\n",avg); 
	return 0;

}
