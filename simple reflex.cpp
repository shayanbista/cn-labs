#include<stdio.h>
#include<conio.h>
void checking();
void clean();




void  checking()
{
	printf("the room is clean sir\n");
 	printf("moving to next room\n");
 	printf("\n");
 	printf("moving to room1\n");
 	printf("\n");
 	printf("room is dirty need cleaning\n");
	printf("cleaning successful\n");
	printf("goal achieved\n");
}
void clean(){
 
        printf("room is dirty need cleaning\n");
		printf("cleaning successful\n");
		printf("goal achieved\n");
		printf("moving to next room\n");
 	    printf("\n");
 	    	printf("the room is clean sir\n");
 		}
void simplereflex(){
	int i;
	int rooms[2]={0,1};
	printf("check the rooms");
	scanf("%d",&rooms);
	if(rooms[i]==0){
		checking();
}

 else if(rooms[i]==1){
 	clean();
 }
 

}


int main(void){
	do{
    simplereflex();
    printf("\n");
    
} while(1);
}
