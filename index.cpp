#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();



class Management{
    public:

    Management(){

        mainMenu();
    }

};

class Details{

    public:

    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information(){
        cout<<"\nEnter the coustomer id:";
        cin>>cId;
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\nEnter the age:";
        cin>>age;
        cout<<"\nEnter the adderss:";
        cin>>add;
        cout<<"\nEnter your Gender :";

        cin>>gender;
        cout<<"your details are saved with us\n"<<endl;
    }

    


};

int Details::cId;
string Details::name;
string Details::gender;

class registration{

    public:
    static int choice;
    int choice1;
    int back;
    static float charges;
    

    void flights(){

        string flightN[]={"dubai","canada","uk","usa","australia","europe"};

        for(int a=0; a<6; a++){
            cout<<(a+1)<<".flight to"<<flightN[a]<<endl;

        }

        cout<<"\nWelcome to the airlines! "<<endl;
        cout<<"press the number of the country of wich you want to book the flight: ";
        cin>>choice;

        switch(choice){
            case 1:
            {
                cout<<"___________welcome to dubai emirates__________\n"<<endl;
                cout<<"your comfort is our priority. enjoy the journey!"<<endl;
                cout<<"following are the flights \n"<<endl;
                cout<<"1. Dub - 498"<<endl;
                cout<<"\t08-01-2022 8:00 am 10hrs rs.14000"<<endl;
                cout<<"1. Dub - 658"<<endl;
                cout<<"\t09-01-2022 4:00 am 12hrs rs.10000"<<endl;
                cout<<"1. Dub - 508"<<endl;
                cout<<"\t11-01-2022 11:00 am 11hrs rs.9000"<<endl;


                cout<<"\nselect the flight you want to book: ";
                cin>>choice1;

                if(choice1==1){
                    charges = 14000;
                    cout<<"\nyou have sucessfully booked the flight dub - 498"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else if(choice1==2){
                    charges = 10000;
                    cout<<"\nyou have sucessfully booked the flight dub - 658"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }
                else if(choice1==3){
                    charges = 9000;
                    cout<<"\nyou have sucessfully booked the flight dub - 508"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else{
                    cout<<"invalid input , shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1){
                    mainMenu();

                }
                else{
                    mainMenu();
                }
                break;
                

            }
            case 2:
            {
                cout<<"___________welcome to canadian airlines__________\n"<<endl;

                cout<<"your comfort is our priority. enjoy the journey!"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. CA - 198"<<endl;
                cout<<"\t09-01-2022 2:00 pm 20hrs rs.34000"<<endl;
                cout<<"1. CA - 158"<<endl;
                cout<<"\t11-01-2022 6:00 am 23hrs rs.29000"<<endl;
                cout<<"1. Dub - 508"<<endl;
                cout<<"\t04-01-2022 12:00 am 21hrs rs.40000"<<endl;


                cout<<"\nselect the flight you want to book: ";
                cin>>choice1;

                if(choice1==1){
                    charges = 34000;
                    cout<<"\nyou have sucessfully booked the flight CA - 198"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else if(choice1==2){
                    charges = 29000;
                    cout<<"\nyou have sucessfully booked the flight CA - 508"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }
                else if(choice1==3){
                    charges = 40000;
                    cout<<"\nyou have sucessfully booked the flight CA - 208"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else{
                    cout<<"invalid input , shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1){
                    mainMenu();

                }
                else{
                    mainMenu();
                }
                break;

            }
            case 3:
            {
                cout<<"___________welcome to UK airways__________\n"<<endl;

                cout<<"your comfort is our priority. enjoy the journey!"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. uk - 798"<<endl;
                cout<<"\t12-01-2022 10:00 am 14hrs rs.44000"<<endl;
            


                cout<<"\nselect the flight you want to book: ";
                cin>>choice1;

                if(choice1==1){
                    charges = 44000;
                    cout<<"\nyou have sucessfully booked the flight dub - 498"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

              

                else{
                    cout<<"invalid input , shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1){
                    mainMenu();

                }
                else{
                    mainMenu();
                }
                break;
                
            }
            case 4:
            {
                cout<<"___________welcome to us airways__________\n"<<endl;

                cout<<"your comfort is our priority. enjoy the journey!"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. us - 567"<<endl;
                cout<<"\t10-01-2022 9:00 am 22hrs rs.37000"<<endl;
                cout<<"1. us - 658"<<endl;
                cout<<"\t09-01-2022 4:00 am 12hrs rs.39000"<<endl;
                cout<<"1. us - 508"<<endl;
                cout<<"\t12-01-2022 10:00 am 21hrs rs.42000"<<endl;


                cout<<"\nselect the flight you want to book: ";
                cin>>choice1;

                if(choice1==1){
                    charges = 37000;
                    cout<<"\nyou have sucessfully booked the flight us - 567"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else if(choice1==2){
                    charges = 39000;
                    cout<<"\nyou have sucessfully booked the flight us - 658"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }
                else if(choice1==3){
                    charges = 42000;
                    cout<<"\nyou have sucessfully booked the flight us - 508"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else{
                    cout<<"invalid input , shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1){
                    mainMenu();

                }
                else{
                    mainMenu();
                }
                break;
            }
            case 5:
            {
                cout<<"___________welcome to australian airlines__________\n"<<endl;

                cout<<"your comfort is our priority. enjoy the journey!"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. as - 698"<<endl;
                cout<<"\t18-01-2022 9:00 am 20hrs rs.44000"<<endl;
                cout<<"1. as - 158"<<endl;
                cout<<"\t19-01-2022 4:00 am 22hrs rs.34000"<<endl;
                cout<<"1. as - 708"<<endl;
                cout<<"\t17-01-2022 10:00 am 21hrs rs.42000"<<endl;


                cout<<"\nselect the flight you want to book: ";
                cin>>choice1;

                if(choice1==1){
                    charges = 44000;
                    cout<<"\nyou have sucessfully booked the flight as - 698"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else if(choice1==2){
                    charges = 34000;
                    cout<<"\nyou have sucessfully booked the flight as - 158"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }
                else if(choice1==3){
                    charges = 42000;
                    cout<<"\nyou have sucessfully booked the flight as - 708"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else{
                    cout<<"invalid input , shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1){
                    mainMenu();

                }
                else{
                    mainMenu();
                }
                break;
            }
            case 6:
            {
                cout<<"___________welcome to european airlines__________\n"<<endl;

                cout<<"your comfort is our priority. enjoy the journey!"<<endl;

                cout<<"following are the flights \n"<<endl;

                cout<<"1. eu - 898"<<endl;
                cout<<"\t02-01-2022 2:00 am 18hrs rs.36000"<<endl;
                cout<<"1. eu - 958"<<endl;
                cout<<"\t03-01-2022 6:00 am 19hrs rs.37000"<<endl;
                cout<<"1. eu - 608"<<endl;
                cout<<"\t12-01-2022 10:00 am 20hrs rs.31000"<<endl;


                cout<<"\nselect the flight you want to book: ";
                cin>>choice1;

                if(choice1==1){
                    charges = 36000;
                    cout<<"\nyou have sucessfully booked the flight eu - 898"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else if(choice1==2){
                    charges = 37000;
                    cout<<"\nyou have sucessfully booked the flight eu - 958"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }
                else if(choice1==3){
                    charges = 31000;
                    cout<<"\nyou have sucessfully booked the flight eu - 608"<<endl;
                    cout<<"you can go back to main menu and take the ticket"<<endl;

                }

                else{
                    cout<<"invalid input , shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1){
                    mainMenu();

                }
                else{
                    mainMenu();
                }
                break;
            }
            default:
            {
                cout<<"invalid input, shifting to the main menu !"<<endl;
                mainMenu();
                break;
            }
        }
    }

};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
    public:

    void Bill(){
        string destination = "";
        ofstream outf("records.txt");
        {
            outf<<"___________PRADEEP SOLANKI AIRLIES___________"<<endl;
            outf<<"__________________ticket_____________________"<<endl;
            outf<<"_____________________________________________"<<endl;

            outf<<"Coustomer ID: "<<Details::cId<<endl;
            outf<<"Coustomer name: "<<Details::name<<endl;
            outf<<"Coustomer gender: "<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(registration::choice==1){
                destination="dubai";

            }
            else if(registration::choice==2){
                destination = "canada";

            }
            else if(registration::choice==3){
                destination = "uk";
            }
            else if(registration::choice==4){
                destination = "usa";
            }
            else if(registration::choice==5){
                destination = "australia";
            }
            else if(registration::choice==6){
                destination="europe";
            }

            outf<<"destination\t\t"<<destination<<endl;
            outf<<"flight cost :\t\t"<<registration::charges<<endl;




        }
        outf.close();
    }

    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"file error!"<<endl;

            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }

};

void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                   PRADEEP SOLANKI AIRLINES  \n"<<endl;
    cout<<"\t_________________MAIN MENU_____________"<<endl;

    cout<<"\t_____________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"\t|\t PRESS 1 TO ADD THE CUSTOMER DETAILS    \t|"<<endl;
    cout<<"\t|\t PRESS 2 FOR FLIGHT REGISTRATION        \t|"<<endl;
    cout<<"\t|\t PRESS 3 FOR TICKET AND CHARGES         \t|"<<endl;
    cout<<"\t|\t PRESS 4 FOR EXIT                       \t|"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"\t______________________________________________"<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice){

        case 1:
        {
            cout<<"____________Coustomers____________\n"<<endl;
            d.information();
            cout<<"press any key to go back to the main menu  ";
            cin>>back;

            if(back ==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
        case 2:
        {
            cout<<"___________book a flight using this system_________\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"______________get your ticket____________\n"<<endl;
            t.Bill();
            cout<<"your ticket is printed, you can collect it \n"<<endl;
            cout<<"press 1 to display your ticket ";

            cin>>back;

            if(back ==1 ){
                t.dispBill();
                cout<<"press any key to go back to main menu : ";
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else{
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t__________thank-you_________"<<endl;
            break;
        }
        default :
        {
            cout<<"invalid input, please try again !\n"<<endl;
            mainMenu();
            break;
        }


    }


}



int main()
{
    Management Mobj;
    return 0;

}