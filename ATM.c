#include<stdio.h>
void main(){
    int balance=10000, atmpin = 1010,s,choice,amount,t,newpin;
    int temp = 0;

    while(temp!=1){
        printf("---Welcome To SBI---\n");
        printf("Please enter your ATM PIN : \n");
        scanf("%d", &s);
        if(atmpin==s){
            temp = 1;
        }
    }
    if(atmpin==s){
        printf("Please Select :\n");
        printf("1.Check Balance\n2.Withdraw\n3.Transfer\n4.change pin\n5.Exit");
        scanf("%d", &choice);
    }else{
        printf("You Entered Wrong PIN..Please Enter again :");
        
    }
    if (choice==1)
    {
        printf("Your Balance is :%d", balance);
    }else if(choice==2){
        printf("Enter amount to Withdraw :\n");
        scanf("%d", &amount);
        if(balance<amount){
            printf("Insufficient balance");
        }else{
            balance-=amount;
            printf("Your Remaining Balance is :%d\n", balance);
        }
    }else if(choice==3)
    {
        printf("Enter Account Number :\n");
        scanf("%d", &t);
        printf("Money Succecfully Transfered to %d\n", t);
        printf("Your Remaining Balance is %d", balance);
    }else if(choice==4){
        printf("Enter a New Pin :\n");
        scanf("%d", &newpin);
        atmpin=newpin;
        printf("New pin selected Succesfully...");
    }else if(choice==5){
        printf("Thank You for using our service GoodByeee");
    }else{
        printf("Please Choose a valid option");
    }
}
