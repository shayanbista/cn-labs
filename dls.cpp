#include<stdio.h>
#include<conio.h>
int x,y,visited[5][5];
int d[5][5]={{0,1,1,0,0}, {1,0,0,1,0}, {1,0,0,0,1}, {0,0,1,0,0}, {0,0,1,0,0}};
int nodes[5]={1,2,3,4,5};
int top;
void dls(){
int flag;
int i,j;
int depth=0;
while(depth!=2){
 depth++;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
   	visited[i][j]=1;

  }
}
depth++;
}
for(i=0;i<5;i++){

   for(j=0;j<5;j++){
   	if(visited[i][j]&&d[i][j]==1)
   	flag=1;
}
}
if(flag==1){

   printf("the goal node 5 is found");
}
else
{
	printf("the goal node is not found");
}

}


int main(void){
	dls();
}
