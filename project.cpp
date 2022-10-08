#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;

    int Qrooms=0,Qpasta=0 , Qburger=0,Qnoodles= 0, Qshake=0, Qchicken=0; //Available room and dishes
    int Srooms=0, Spasta=0,Sburger=0, Snoodles, Sshake=0, Schicken=0; //  Sold rooms and dishes
    int Total_rooms = 0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0; //it holds price of items

       cout<<"\n\t  Welcome to ABC Hotel ";

    cout<<"\n\n\n\t Quantity of items we have";
    cout<<"\n\n\n Rooms available: ";
    cin>> Qrooms;
    cout<<"\n Quantity of pasta : ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger : ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake : ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll: ";
    cin>>Qchicken;
    
    m:

    cout<<"\n\t\t\t Please select from the given menu options ";
    cout<<"\n\n1) One Room at ₹1200 "; // we use n1,n2 numbering because customer press the number for that
    cout<<"\n2) Pasta at ₹200";
    cout<<"\n3) Burger at ₹150";
    cout<<"\n4) Noodles at ₹140";
    cout<<"\n5) Shake at ₹120";
    cout<<"\n6) Chicken-roll at ₹150";
    cout<<"\n7) Information regarding sales and collection "; // this is used by owner to check total collection of the day
    cout<<"\n8) Exit";

    cout<<"\n\n Please enter your choice! ";
    cin>> choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the numbers of rooms you want: ";
            cin>>quant;
            if(Qrooms-Srooms >= quant) // Do we actually have rooms and dishes available in our hotels
            {
                Srooms=Srooms+quant;
                Total_rooms= (Total_rooms + quant*1200);
                cout<<"\n\n\t\t"<<quant<<" Room/rooms have been alloted to you! ";
                  break;
            } 
            else
                cout<<"\n\tOnly "<<Qrooms-Srooms<<"Rooms remaining in hotel ";
                break;
            

                case 2:
            cout<<"\n\n Enter Pasta Quantity : ";
            cin>>quant;
            if(Qpasta-Spasta >= quant) // Do we actually have rooms and dishes available in our hotels
            {
                Srooms=Spasta+quant;
                Total_pasta= (Total_pasta + quant*200);
                cout<<"\n\n\t\t"<<quant<<" Pasta is the order! ";
                  break;
            } 
            else{
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel ";
                break;
            }

                case 3:
            cout<<"\n\n Enter Burger Quantity : ";
            cin>>quant;
            if(Qburger-Sburger >= quant) // Do we actually have rooms and dishes available in our hotels
            {
                Sburger=Sburger+quant;
                Total_burger= (Total_burger + quant*150);
                cout<<"\n\n\t\t"<<quant<<" Burger is the order! ";
                   break;
            } 
            else{
                cout<<"\n\tOnly"<<Qburger-Sburger<<"Burger remaining in hotel ";
                break;
            }

                case 4:
            cout<<"\n\n Enter Noodles Quantity : ";
            cin>>quant;
            if(Qnoodles-Snoodles >= quant) // Do we actually have rooms and dishes available in our hotels
            {
                Snoodles=Snoodles+quant;
                Total_noodles= (Total_noodles + quant*140);
                cout<<"\n\n\t\t"<<quant<<" Noodles is the order! ";
            } 
            else{
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Pasta remaining in hotel ";
                break;
            }
                case 5:
            cout<<"\n\n Enter Shake Quantity : ";
            cin>>quant;
            if(Qshake-Sshake >= quant) // Do we actually have rooms and dishes available in our hotels
            {
                Sshake=Sshake+quant;
                Total_shake= (Total_shake + quant*120);
                cout<<"\n\n\t\t"<<quant<<" Shake is the order! "; // check for break statement once
            } 
            else{
                cout<<"\n\t\nOnly"<<Qshake-Sshake<<"Shake remaining in hotel ";
                break;
            }

                case 6:
            cout<<"\n\n Enter Chicken Quantity : ";
            cin>>quant;
            if(Qchicken-Schicken >= quant) // Do we actually have rooms and dishes available in our hotels
            {
                Schicken=Schicken+quant;
                Total_chicken= (Total_chicken + quant*150);
                cout<<"\n\n\t\t"<<quant<<" Chicken is the order! ";
            } 
            else
                cout<<"\n\tOnly"<<Qchicken-Schicken<<"Chicken roll remaining in hotel ";
                break;
            


                case 7:
            cout<<" \n\t\tDetails of sales and collection ";
            cout<<"\n\n Number of rooms we had : "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
            cout<<"\n\n Remaining rooms: "<<Qrooms- Srooms;
            cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;


            cout<<"\n\n Number of Pastas we had : "<<Qpasta;
            cout<<"\n\n Number of rooms we sold: "<<Spasta;
            cout<<"\n\n Remaining Pastas: "<<Qpasta- Spasta;
            cout<<"\n\n Total Pastas collection for the day : "<<Total_pasta;


            cout<<"\n\n Number of burgers we had : "<<Qburger;
            cout<<"\n\n Number of burgers we sold : "<<Sburger;
            cout<<"\n\n Remaining burgers : "<<Qburger- Sburger;
            cout<<"\n\n Total burgers collection for the day : "<<Total_burger;


            cout<<"\n\n Number of noodles we had : "<<Qnoodles;
            cout<<"\n\n Number of noodles we sold: "<<Snoodles;
            cout<<"\n\n Remaining noodles: "<<Qnoodles- Snoodles;
            cout<<"\n\n Total noodles collection for the day : "<<Total_noodles;


            cout<<"\n\n Number of Shake we had : "<<Qshake;
            cout<<"\n\n Number of Shake we sold: "<<Sshake;
            cout<<"\n\n Remaining Shake: "<<Qshake- Sshake;
            cout<<"\n\n Total Shakes collection for the day : "<<Total_shake;


            cout<<"\n\n Number of Chicken-roll we had : "<<Qchicken;
            cout<<"\n\n Number of Chicken-roll we sold: "<<Schicken;
            cout<<"\n\n Remaining Chicken-roll: "<<Qchicken- Schicken;
            cout<<"\n\n Total Chicken-roll collection for the day : "<<Total_chicken;


            cout<<"\n\n\n\n Total Collection for the day: "<<Total_rooms+Total_pasta+Total_noodles+Total_burger+Total_noodles+Total_chicken;

                case 8:
                exit(0);

                default:
                   cout<<"\n Please select the number mentioned above! ";


        }
        goto m;  

}
    













        









