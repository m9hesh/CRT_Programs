#include<stdio.h>
void main(){
printf("----------Welcome To Dominos----------\n");
int nb,np,nc,bp,pp,cp,total;
float gst,discount,total_bill,bill_with_gst;
printf("Enter Number Of Burger : ");
scanf("%d",&nb);
printf("Enter Number Of Pizzas : ");
scanf("%d",&np);
printf("Enter Number Of Cooldrinks : ");
scanf("%d",&nc);
bp = nb*80;
pp = np*100;
cp = nc*50;
total = bp+pp+cp;
gst = total*0.025;
bill_with_gst = total+gst;
discount = bill_with_gst*10/100;
total_bill= bill_with_gst-discount;
printf("-----Your Order is-----\n");
printf("Burger : %d\n",bp);
printf("Pizza : %d\n",pp);
printf("Cooldrink : %d\n",cp);
printf("Bill Without GST : %d\n",total);
printf("Bill With GST : %f\n",bill_with_gst);
printf("Total Bill : %f\n",total_bill);
printf("-----Thank You-----");
}
