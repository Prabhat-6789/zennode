#include <bits/stdc++.h>
using namespace std;

int main()
{
    int product_A=20,product_B=40,product_C=50,pr_A,pr_B,pr_C,total_A,total_B,total_C;
    string discount_1="flat_10_discount",discount_2="bulk_5_discount",discount_3="bulk_10_discount",discount_4="tiered_50_discount";
    float dis1=0,dis2=0,dis3=0,dis4=0,total=0,giftWrapFee=0,shippingFee=0;
    int giftPack = 0;

    cout<<"product A: ";
    cin>>pr_A;
    cout<<"will product A will be wrapped in gift or not. if yes then please write 1 else write 0 ";
    cin>>giftPack;

    if(giftPack==1)
    giftWrapFee += (float)pr_A;

    giftPack = 0;

    cout<<"product B: ";
    cin>>pr_B;
    cout<<"will product B will be wrapped in gift or not. if yes then please write 1 else write 0 ";
    cin>>giftPack;
    if(giftPack == 1)
    giftWrapFee += (float)pr_B;

    giftPack = 0;

    cout<<"product C: ";
    cin>>pr_C;
    cout<<"will product C will be wrapped in gift or not. if yes then please write 1 else write 0 ";
    cin>>giftPack;

    if(giftPack==1)
    giftWrapFee += (float)pr_C;

    giftPack = 0;

    total_A = pr_A*product_A;
    total_B = pr_B*product_B;
    total_C = pr_C*product_C;
    total = (float)total_A+(float)total_B+(float)total_C;

    if(total>200)      //for discount1,flat_10_discount
    dis1 = 10;

    if(pr_A>10)
    dis2 += ((float)total_A/20.0);
    if(pr_B>10)
    dis2 += ((float)total_B/20.0);
    if(pr_C>10)
    dis2 += ((float)total_C/20.0);
    //dis2 is for discount2,bulk_5_discount. if quantity exceeds 10 units then 5% discount on total amount of that item.
    if(pr_A+pr_B+pr_C>20)
    dis3 = (float)(total)/10.0;      //dis3 is for discount3 bulk_10_discount. if total item >20 units.

    if(pr_A+pr_B+pr_C>30)
    {
        if(pr_A>15)
        {
            dis4 += (((pr_A-15)*product_A)/2);
        }

        if(pr_B>15)
        {
            dis4 += (((pr_B-15)*product_B)/2);
        }

        if(pr_C>15)
        {
            dis4 += (((pr_C-15)*product_C)/2);
        }
    }
    //dis4 is for discount4,tiered_50_discount. if total item >30 and item whose quantity > 15 then discount will be applied on more than 15 items.
    
    cout<<"product A-> "<<" quantity: "<<pr_A<<" price: $"<<total_A<<endl;
    cout<<"product B-> "<<" quantity: "<<pr_B<<" price: $"<<total_B<<endl;
    cout<<"product C-> "<<" quantity: "<<pr_C<<" price: $"<<total_C<<endl;
    cout<<"subTotal: $"<<total<<endl;

    if(dis1>=dis2 && dis1>=dis3 && dis1>=dis4)
    {
        cout<<discount_1<<" : $"<<dis1<<endl;
        total -= dis1;
    }

    else if(dis2>=dis1 && dis2>=dis3 && dis2>=dis4)
    {
        cout<<discount_2<<" : $"<<dis2<<endl;
        total -= dis2;
    }

    else if(dis3>=dis1 && dis3>=dis2 && dis3>=dis4)
    {
        cout<<discount_3<<" : $"<<dis3<<endl;
        total -= dis3;
    }

    else if(dis4>=dis1 && dis4>=dis2 && dis4>=dis3)
    {
        cout<<discount_4<<" : $"<<dis4<<endl;
        total -= dis4;
    }

    shippingFee = ((pr_A+pr_B+pr_C)/10)*5;

    if((pr_A+pr_B+pr_C)%10)
    shippingFee += 5;

    total += (giftWrapFee+shippingFee);

    cout<<"shippingFee: $"<<shippingFee<<" "<<"giftWrapFee: $"<<giftWrapFee<<endl;

    cout<<"Total: $"<<total<<endl;

    return 0;
}