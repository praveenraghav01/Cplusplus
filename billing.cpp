#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
#include<dos.h>
#include<string.h>
#include<time.h>
#include<math.h>
struct additem
{
int item_id;
char item_name[50];
float price;
};
struct bill
{
int bill_id;
char cust_name[50];
char item_name[10][50];
float quant[10];
float total;
float price[10];
char date[15];
int n;
};
FILE *fp,*fp1,*bifp,*bifp1;
struct additem ad;
struct bill bi;
int add_item();
int generate_bill();
int delete_bill();
int display_bill();
int q=0;
int main()
{
int i=1;
textbackground(GREEN);
textcolor(BLUE);
clrscr();
textbackground(GREEN);
textcolor(BLUE);
printf("\n\n\n\n\n\n\t\t\t * * * * * * * * * * * * * *");
printf("\n\t\t\t * *");
printf("\n\t\t\t * SHOPPING *");
printf("\n\t\t\t * MALL *");
printf("\n\t\t\t * BILLING *");
printf("\n\t\t\t * SYSTEM *");
printf("\n\t\t\t * *");
printf("\n\t\t\t * * * * * * * * * * * * * *");
printf("\n\n\t\t\tPRESS 1 TO ENTER AND 0 TO EXIT.....");
scanf("%d",&i);
if(i==0)
{
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS YOU");
delay(1800);
exit(0);
}
else
{
int f=1,choice;
clrscr();
/*for(f=1;f<4;f++)
{
printf("\n\nPLEASE WAIT");
printf(" .");
delay(600);
printf(" .");
delay(600);
printf(" .");
delay(600);
clrscr();
}*/
XYZ:
printf("\t\t\t ********************************\n");
printf("\t\t\t SHOPPING MALL BILLING SYSTEM\n");
printf("\t\t\t ********************************");
printf("\n-------------------------------------------------------------------------------");
printf("\n\n\t1. ADD PRODUCT");
printf("\n\n\t2. GENERATE A BILL");
printf("\n\n\t3. DISPLAY A BILL");
printf("\n\n\t4. DELETE A BILL");
printf("\n\n\t5. EXIT");
printf("\n\nPRESS CORRESPONDING KEYS TO PERFORM OPERATION :- ");
ABC:
scanf("%d",&choice);
switch(choice)
{
case 1:
q=add_item();
if(q==0)
{
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
delay(1800);
exit(0);
}
else
{
clrscr();
goto XYZ;
}
break;
case 2:
q=generate_bill();
if(q==0)
{
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
delay(1800);
exit(0);
}
else
{
clrscr();
goto XYZ;
}
break;
case 3:
q=display_bill();
if(q==0)
{
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
delay(1800);
exit(0);}
else
{
clrscr();
goto XYZ;
}
break;
case 4:
q=delete_bill();
if(q==0)
{
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
delay(1800);
exit(0);
}
else
{
clrscr();
goto XYZ;
}
case 5:
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
delay(1800);
exit(0);
default:
printf("\n\nYOU ENTERED A WRONG VALUE.PLEASE TRY AGAIN : ");
goto ABC;
}
}
getch();
}
int add_item()
{
int f=1,id=0,p[10],i=0,h=0,t=0;
fp=fopen("product8.txt","a");
fclose(fp);
clrscr();
while(f==1)
{
clrscr();
fp=fopen("product8.txt","r");
while((fread(&ad,sizeof(ad),1,fp))==1)
{
id=ad.item_id;
}
fclose(fp);
printf("\nENTER PRODUCT NAME :-\t");
scanf("%s",ad.item_name);
gets(ad.item_name);
printf("\nENTER PRODUCT PRICE :-\t");
scanf("%f",&ad.price);
id++;
p[i]=id;
i++;
ad.item_id=id;
fp=fopen("product8.txt","a");
fwrite(&ad,sizeof(ad),1,fp);
printf("\nsize of ad:-%d",sizeof(ad));
fclose(fp);
printf("\n\n\n\nYOUR PRODUCT WITH ID %d IS ADDED SUCCESSFULLY....",ad.item_id);
printf("\n\nPRESS 1 TO ADD NEW PRODUCT OR ANY KEY TO EXIT...\t");
scanf("%d",&f);
if(f!=1)
{
break;
}
}
clrscr();
i=0;
fp=fopen("product8.txt","r");
while((fread(&ad,sizeof(ad),1,fp))==1)
{
if(p[i]==ad.item_id)
{
printf("\nPRODUCT ID :- %d",ad.item_id);
printf("\nPRODUCT NAME :- %s",ad.item_name);
printf("\nPRODUCT PRICE :- %f",ad.price);
printf("\n\n");
i++;
}
}
fclose(fp);
printf("PRESS 1 TO GO TO MENU PAGE AND 0 TO EXIT :-\t");
scanf("%d",&q);
return q;
}
int generate_bill()
{
time_t now;
struct tm *d;
int w=0;
int item_id,f=1,i=0,n=0,p=0,bill_id=0,k=1,j=0;
float total=0,quant=0;
bifp=fopen("bill6.txt","a");
fclose(bifp);
while(f==1)
{
int flag=0;
clrscr();
if(j==0)
{
bifp=fopen("bill6.txt","r");
while((fread(&bi,sizeof(bi),1,bifp))==1)
{
bill_id=bi.bill_id;
}
bill_id++;
bi.bill_id=bill_id;
fclose(bifp);
j++;
}
printf("\tNOTE :- JUST ENTER PRODUCT ID OF BUYING PRODUCTS TO CALCULATE BILL");
printf("\n\nPRODUCT ID :-\t");
scanf("%d",&item_id);
fp=fopen("product8.txt","r");
while((fread(&ad,sizeof(ad),1,fp))==1)
{
if(item_id==ad.item_id)
{
printf("\nPRODUCT ID :-\t%d",ad.item_id);
printf("\n\nPRODUCT NAME :- %s",ad.item_name);
strcpy(bi.item_name[i],ad.item_name);
printf("\tPRODUCT PRICE :- %f",ad.price);
bi.price[i]=ad.price;
printf("\n\n");
flag=1;
}
}
if(flag==0)
{
printf("\n\n\tYOUR PRODUCT ID IS NOT FOUND.");
}
else
{
printf("\n\nQUANTITY OF PRODUCT :-\t");
scanf("%f",&quant);
bi.quant[i]=quant;
total=total+quant*ad.price;
bi.total=total;
flag=0;
bi.n=i;
n=i;
i++;
}
fclose(fp);
printf("\n\n\nPRESS 1 TO ADD MORE PRODUCT OTHERWISE PRESS ANY KEY TO GO TO BILL PAGE : ");
scanf("%d",&f);
}
clrscr();
printf("\n\tPUT DOWN CUSTOMER INFORMATION .....");
printf("\n\nCUSTOMER NAME :-\t");
scanf("%s",&bi.cust_name);
time(&now);
d=localtime(&now);
strftime(bi.date, 15, "%d/%m/%Y", d);
printf("\n\n\nPRESS 1 TO GENERATE A BILL AND ANY KEY TO GO TO MAIN MENU : ");
scanf("%d",&p);
if(p!=1)
{
return p;
}
else
{
i=0;
bifp=fopen("bill6.txt","a");
fwrite(&bi,sizeof(bi),1,bifp);
fclose(bifp);
clrscr();
gotoxy(35,12);
for(p=0;p<3;p++)
{
printf("\n\nBILL IS GENERATING");
delay(500);
printf(" .");
delay(500);
printf(" .");
delay(500);
printf(" .");
delay(500);
clrscr();
}
printf("\t\t\t ********************************\n");
printf("\t\t\t SHOPPING MALL BILLING SYSTEM\n");
printf("\t\t\t ********************************");
printf("\n--------------------------------------------------------------------------------");
gotoxy(2,5);
printf("CUSTOMER NAME : %s",bi.cust_name);
gotoxy(36,5);
printf("BILL ID : %d",bi.bill_id);
gotoxy(62,5);
printf("DATE : %s",bi.date);
printf("\n--------------------------------------------------------------------------------");
gotoxy(4,7);
printf("SrNo.");
gotoxy(12,7);
printf("ITEM NAME");
gotoxy(32,7);
printf("PRICE");
gotoxy(53,7);
printf("QUANTITY");
gotoxy(70,7);
printf("TOTAL");
total=0;
for(i=0;i<=n;i++)
{
delay(200);
gotoxy(5,w+9);
printf("%d",i+1);
gotoxy(14,w+9);
printf("%s",bi.item_name[i]);
gotoxy(31,w+9);
printf("%f",bi.price[i]);
gotoxy(53,w+9);
printf("%f",bi.quant[i]);
gotoxy(68,w+9);
printf("%f",bi.price[i]*bi.quant[i]);
total=total+(bi.price[i]*bi.quant[i]);
w=w+2;
}
delay(200);
printf("\n--------------------------------------------------------------------------------");
gotoxy(14,w+9);
printf("TOTAL");
gotoxy(66,w+9);
printf("%f Rs",total);
printf("\n--------------------------------------------------------------------------------");
delay(200);
printf("\n\nPRESS 1 TO GO TO MAIN MENU AND 0 TO EXIT :- ");
scanf("%d",&q);
return q;
}
}
int display_bill()
{
int w=0,p=0;
int item_id,f=0,i=0,bill_id=0;
float total;
clrscr();
printf("\nPLEASE ENTER YOUR BILL-ID :- ");
scanf("%d",&bill_id);
bifp=fopen("bill6.txt","a");
fclose(bifp);
bifp=fopen("bill6.txt","r");
while((fread(&bi,sizeof(bi),1,bifp))==1)
{
if(bill_id==bi.bill_id)
{
f=1;
clrscr();
for(p=0;p<3;p++)
{
printf("\n\nSEARCHING");
delay(500);
printf(" .");
delay(500);
printf(" .");
delay(500);
printf(" .");
delay(500);
clrscr();
}
printf("\t\t\t ********************************\n");
printf("\t\t\t SHOPPING MALL BILLING SYSTEM\n");
printf("\t\t\t ********************************");
printf("\n--------------------------------------------------------------------------------");
gotoxy(2,5);
printf("CUSTOMER NAME : %s",bi.cust_name);
gotoxy(36,5);
printf("BILL ID : %d",bi.bill_id);
gotoxy(62,5);
printf("DATE : %s",bi.date);
printf("\n--------------------------------------------------------------------------------");
gotoxy(4,7);
printf("SrNo.");
gotoxy(12,7);
printf("ITEM NAME");
gotoxy(32,7);
printf("PRICE");
gotoxy(53,7);
printf("QUANTITY");
gotoxy(70,7);
printf("TOTAL");
total=0;
for(i=0;i<=bi.n;i++)
{
delay(200);
gotoxy(5,w+9);
printf("%d",i+1);
gotoxy(14,w+9);
printf("%s",bi.item_name[i]);
gotoxy(31,w+9);
printf("%f",bi.price[i]);
gotoxy(53,w+9);
printf("%f",bi.quant[i]);
gotoxy(68,w+9);
printf("%f",bi.price[i]*bi.quant[i]);
total=total+(bi.price[i]*bi.quant[i]);
w=w+2;
}
delay(200);
printf("\n--------------------------------------------------------------------------------");
gotoxy(14,w+9);
printf("TOTAL");
gotoxy(66,w+9);
printf("%f Rs",total);
printf("\n--------------------------------------------------------------------------------");
break;
}
}
if(f==0)
{
printf("\n\nSORRY, YOUR BILL-ID DOES NOT MATCH");
}
fclose(bifp);
delay(200);
printf("\n\nPRESS 1 TO GO TO MAIN MENU AND 0 TO EXIT :- ");
scanf("%d",&q);
return q;
}
int delete_bill()
{
int item_id,f=0,i=0,bill_id=0;
clrscr();
bifp=fopen("bill6.txt","w");
fclose(bifp);
printf("\nPLEASE ENTER YOUR BILL-ID :- ");
scanf("%d",&bill_id);
bifp=fopen("bill6.txt","r");
while(fread(&bi,sizeof(bi),1,bifp)==1)
{
if(bi.bill_id==bill_id)
{
f=1;
break;
}
}
fclose(bifp);
if(f==1)
{
bifp=fopen("bill6.txt","r");
bifp1=fopen("bill7.txt","w");
while((fread(&bi,sizeof(bi),1,bifp))==1)
{
fwrite(&bi,sizeof(bi),1,bifp1);
}
fflush(bifp);
fclose(bifp);
fclose(bifp1);
bifp=fopen("bill6.txt","w");
bifp1=fopen("bill7.txt","r");
while((fread(&bi,sizeof(bi),1,bifp1))==1)
{
if(bi.bill_id!=bill_id)
{
fwrite(&bi,sizeof(bi),1,bifp);
}
}
fflush(bifp1);
fclose(bifp1);
fclose(bifp);
printf("\n\nYOUR BILL HAS BEEN DELETED SUCCESSFULLY.");
}
else
{
printf("\n\nSORRY, YOUR BILL-ID DOES NOT MATCH.");
}
printf("\n\nPRESS 1 TO GO TO MAIN MENU AND 0 TO EXIT :- ");
scanf("%d",&q);
return q;
}

