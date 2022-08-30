#include<stdio.h>
#include<conio.h>


void simplereflex(){
	int i;
	int rooms[2]={0,1};
	printf("check the rooms");
	scanf("%d",&rooms);

	if(rooms[i]==0){
 	printf("the room is clean sir\n");
 	printf("moving to next room\n");
 	printf("\n");
 	printf("moving to room1\n");
 	printf("\n");
 	printf("room is dirty need cleaning\n");
	printf("cleaning successful\n");
	printf("goal achieved\n");

 }
 else if(rooms[i]==1){
        printf("room is dirty need cleaning\n");
		printf("cleaning successful\n");
		printf("goal achieved\n");
	}

}


int main(void){
	do{
    simplereflex();
    printf("\n");
    
} while(1);
}
