#include<stdio.h>
#include<conio.h>
void toh(int disk,char source,char dest,char mid){
	if(disk==1){
		printf("the disk 1 moves from %c to %c\n",source,dest);
	} 	
	else{
		toh(disk-1,source,mid,dest);
		printf("the disk %d moves from %c to %c\n",disk,source,dest);
		printf("\n");
		toh(disk-1,mid,dest,source);
		
	}
}
int main(void){
	int n=6;
	toh(n,'a','c','b');
}
