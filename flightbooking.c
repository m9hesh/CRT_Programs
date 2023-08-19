#include<stdio.h>
void main(){
	int nooftickets, ticketprice=5000, total;
	int discount;
	printf("---Welcome To Indigo---\n");
	printf("Enter Number of tickets to Book: \n");
	scanf("%d", &nooftickets);
	if(nooftickets==1){
		total=ticketprice*1;
	}else if(nooftickets>=2 && nooftickets<=5){
		total=(ticketprice*nooftickets);
		discount=total*0.05;
	}else if(nooftickets>=6 && nooftickets<=10){
		total=(ticketprice*nooftickets);
		discount=total*0.07;
	}else if(nooftickets>=11 && nooftickets<=15){
		total=(ticketprice*nooftickets);
		discount=total*01;
	}else{
		printf("Per person 15 tickets only\n");
	}
	
	if(nooftickets<=15){
		printf("Number of Tickets :%d\n", nooftickets);
		printf("Ticket Price :%d\n",ticketprice);
		("Before Discount :%d\n", total);
		printf("Discount only :%d\n", discount);
		printf("After Discount Total :%d", total-discount);
		printf("Thanks For Booking Tickets");
	}
}
