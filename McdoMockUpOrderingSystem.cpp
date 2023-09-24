#include <iostream>
#include <string>
using namespace std;

// Burger Menu
int Burger = 39;
int CCS = 49; //Crispy Chicken Sandwich
int CBurger = 52; //Cheesy Burger
int QPounderCS = 158; //Quarter Pounder With Cheese Solo
int BigMac = 158; //Big Mac
//Meals
int Spaghetti = 50; //Spaghetti
int ChickFillet = 62; //Chicken Fillet
int RiceMeal = 80; // Chicken Mcdo RiceMeal
int McNuggets = 100; //6 Pcs Nuggets
int ChickSpag = 120; //1 Pc Chicken Mcdo w/ Spaghetti
//Drinks and Desserts

int ApplePie = 37; //Apple Pie
int HotFudgeSundae = 40; //Hot Fudge Sundae
int LargeFloat = 52; //Large Coke McFloat
int LargeMTeaFloat = 99; //Large Milktea McFloat
int LargeFlurry = 120; //Large Oreo McFlurry

//MenuCounters
// Burger Menu
int BurgerCnt;
int CCSCnt; //Crispy Chicken Sandwich
int CBurgerCnt; //Cheesy Burger
int QPounderCSCnt; //Quarter Pounder With Cheese Solo
int BigMacCnt; //Big Mac
//Meals
int SpaghettiCnt; //Spaghetti
int ChickFilletCnt; //Chicken Fillet
int RiceMealCnt; // Chicken Mcdo RiceMeal
int McNuggetsCnt; //6 Pcs Nuggets
int ChickSpagCnt; //1 Pc Chicken Mcdo w/ Spaghetti
//Drinks and Desserts
int ApplePieCnt; //Apple Pie
int HotFudgeSundaeCnt; //Hot Fudge Sundae
int LargeFloatCnt; //Large Coke McFloat
int LargeMTeaFloatCnt; //Large Milktea McFloat
int LargeFlurryCnt; //Large Oreo McFlurry

int Amount;
int TotalBudget;

void Receipt ()
{
    system("cls");
    int Total = 0;
    int Change = 0;
        cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n";
        cout << "= = = = = = = = = = = = = McDonalds = = = = = = = = = = = = = =\n";
        cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n";
    if (BurgerCnt >= 1)
    {
        cout << "       Burger McDo                39          Qty. " << BurgerCnt << endl;
        Total = Total + (Burger * BurgerCnt);
    }
    if (CCSCnt >= 1)
    {
        cout << "       Crispy Chicken Sandwich    49          Qty. " << CCSCnt << endl;
        Total = Total + (CCS * CCSCnt);
    }
    if (CBurgerCnt >= 1)
    {
        cout << "       Cheesy Burger McDo         52          Qty. " << CBurgerCnt << endl;
        Total = Total + (CBurger * CBurgerCnt);
    }
    if (QPounderCSCnt >= 1)
    {
        cout << "       Quarter Pounder w/ Cheese 158          Qty. " << QPounderCSCnt << endl;
        Total = Total + (QPounderCS * QPounderCSCnt);
    }
    if (BigMacCnt >= 1)
    {
        cout << "       Big Mac                   158          Qty. " << BigMacCnt << endl;
        Total = Total + (BigMac * BigMacCnt);
    }
    if (SpaghettiCnt >= 1)
    {
        cout << "       McSpaghetti                50          Qty. " << SpaghettiCnt << endl;
        Total = Total + (Spaghetti * SpaghettiCnt);
    }
    if (ChickFilletCnt >= 1)
    {
        cout << "       Chicken Fillet             62          Qty. " << ChickFilletCnt << endl;
        Total = Total + (ChickFillet * ChickFilletCnt);
    }
    if (RiceMealCnt >= 1)
    {
        cout << "       Chicken McDo RM            80          Qty. " << RiceMealCnt << endl;
        Total = Total + (RiceMeal * RiceMealCnt);
    }
    if (McNuggetsCnt >= 1)
    {
        cout << "       6pcs McNuggets            100          Qty. " << McNuggetsCnt << endl;
        Total = Total + (McNuggets * McNuggetsCnt);
    }
    if (ChickSpagCnt >= 1)
    {
        cout << "       Chicken and Spaghetti     120          Qty. " << ChickSpagCnt << endl;
        Total = Total + (ChickSpag * ChickSpagCnt);
    }
    if (ApplePieCnt >= 1)
    {
        cout << "       Apple Pie                  37          Qty. " << ApplePieCnt << endl;
        Total = Total + (ApplePie * ApplePieCnt);
    }
    if (HotFudgeSundaeCnt >= 1)
    {
        cout << "       Hot Fudge Sundae           40          Qty. " << HotFudgeSundaeCnt << endl;
        Total = Total + (HotFudgeSundae * HotFudgeSundaeCnt);
    }
    if (LargeFloatCnt >= 1)
    {
        cout << "       Large Coke McFloat         52          Qty. " << LargeFloatCnt << endl;
        Total = Total + (LargeFloat * LargeFloatCnt);
    }
    if (LargeMTeaFloatCnt >= 1)
    {
        cout << "       Large MilkTea Float        99          Qty. " << LargeMTeaFloatCnt << endl;
        Total = Total + (LargeMTeaFloat * LargeMTeaFloatCnt);
    }
    if (LargeFlurryCnt >= 1)
    {
        cout << "       Large McFlurry            120          Qty. " << LargeFlurryCnt << endl;
        Total = Total + (LargeFlurry * LargeFlurryCnt);
    }
    Change = TotalBudget - Total;
        cout << endl << "                                              Total: " << Total << endl;
    cout << "Change: " << Change;

}
void Usage()
{
    cout << "How to Use the Smart Mock-up Machine:\n";
    cout << "1. Select Option 3 - Budget to insert wanted amount for purchase\n";
    cout << "2. Type in Budget amount\n";
    cout << "3. Select Menu\n";
    cout << "4. Order-up\n";
    cout << "5. You Can add budget at the Main Menu\n";
    cout << "6. Proceed to Checkout or type N/n in new transaction decision\n";
    cout << "7. Wait for your order to come and enjoy!";
    cout << "Press Enter to go Back";
    cin.get();


}
int main()
{
    int Money;
    int Budget;
    int home;
    cout << "       *Welcome to Mcdo*  \n" << "     Press Enter to Continue";
    cin.get();
MainMenu:
system("cls");

cout << "\n       * Home *        "<<endl;
cout << "Budget: " << Budget << " Pesos" << endl;
cout << "         1. How to use        "<<endl;
cout << "         2. Menu              "<<endl;
cout << "         3. Add Budget            "<<endl ;
cout << "         4. Checkout             "  <<endl;
cout << "         5. Exit              "<<endl;
cin >> home;
system("cls");

switch (home)
{
    case 1:
        Usage();
        cin.get();
        goto MainMenu;
        break;
    case 2:
        if (Budget <= 40)
        {
        cout << "Budget cannot make a Single Purchase\n";
        cout << "Press Enter to go back\n";
        cin.get();
        cin.get();
        goto MainMenu;
        }
        else
        {
        Foods:
    int Selector;
cout << "Budget = " << Budget << endl;
cout << "From what menu do you wish to order from\n";
cout << "1. Burgers" << endl;
cout << "2. Meals" << endl;
cout << "3. Drinks and Desserts" << endl;
cout << "4. Back to Main Menu\n";
cin >> Selector;
switch (Selector)
{
case 1:
    if (Budget <= 150)
    {
        system("cls");
        int OrderSelect;
        cout << "Budget = " << Budget << endl;
        cout << "Available Food Items for designated Budget\n";
        cout << "1. Burger - 39\n";
        cout << "2. Crispy Chicken Sandwich - 49\n";
        cout << "3. Cheesy Burger - 52\n";
        cout << "4. Back\n";
        cout << "Enter Order\n";
        cin >> OrderSelect;
        switch (OrderSelect)
        {
        case 1:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (Burger*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (Burger*Amount);
                BurgerCnt = BurgerCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
                default:
                    Receipt();
                    break;
                }
            break;

            }
            case 2:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (CCS*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (Burger*Amount);
                CCSCnt = CCSCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
                default:
                    Receipt();
                    break;
                }
            break;
            }
            case 3:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (CBurger*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (CBurger*Amount);
                CBurgerCnt = CBurgerCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
default:
                    Receipt();
                    break;
                }
            break;
            }
            case 4:
                    system("cls");
                    goto Foods;
                    break;



        }
    }
    else if (Budget > 150)
    {
        int OrderSelect;
        system("cls");
        cout << "Budget = " << Budget << endl;
        cout << "Available Food Items for designated Budget\n";
        cout << "1. Burger - 39\n";
        cout << "2. Crispy Chicken Sandwich - 49\n";
        cout << "3. Cheesy Burger\n";
        cout << "4. Quarter Pounder With Cheese - 158\n";
        cout << "5. Big Mac - 158\n";
        cout << "6. Back\n";
         cout << "Enter Order\n";
        cin >> OrderSelect;
        switch (OrderSelect)
        {
        case 1:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (Burger*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (Burger*Amount);
                BurgerCnt = BurgerCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
default:
                    Receipt();
                    break;
                }
            break;

            }
            case 2:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (CCS*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (Burger*Amount);
                CCSCnt = CCSCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
default:
                    Receipt();
                    break;
                }
            break;
            }
            case 3:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (CBurger*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (CBurger*Amount);
                CBurgerCnt = CBurgerCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
default:
                    Receipt();
                    break;
                }
            break;
            }
                  case 4:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (QPounderCS*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (QPounderCS*Amount);
                QPounderCSCnt = QPounderCSCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
default:
                    Receipt();
                    break;
                }
            break;
            }
            case 5:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (BigMac*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (BigMac*Amount);
                BigMacCnt = BigMacCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
default:
                    Receipt();
                    break;
                }
            break;
            }
                case 6:
                    system("cls");
                    goto Foods;
                    break;

        }
    }


    break;
case 2:
    if (Budget <= 119)
    {
        system("cls");
        cout << "Budget = " << Budget << endl;
        cout << "Available Food Items for designated Budget\n";
        cout << "1. Spaghetti - 50\n";
        cout << "2. Chicken Fillet - 62\n";
        cout << "3. Chicken McDo Rice Meal - 80\n";
        cout << "4. McNuggets - 100\n";
        cout << "5. Back\n";
         int OrderSelect;
        cout << "Enter Order\n";
        cin >> OrderSelect;
        switch (OrderSelect)
        {
        case 1:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (Spaghetti*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (Spaghetti*Amount);
                SpaghettiCnt = SpaghettiCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
               default:
                    Receipt();
                    break;
                }
            break;
            }
            case 2:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (ChickFillet*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (ChickFillet*Amount);
                ChickFilletCnt = ChickFilletCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
                   default:
                    Receipt();
                    break;
                }
            break;
            }
            case 3:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (RiceMeal*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (RiceMeal*Amount);
                RiceMealCnt = RiceMealCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
default:
                    Receipt();
                    break;
                }
            break;
            }
                  case 4:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (McNuggets*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (McNuggets*Amount);
                McNuggetsCnt = McNuggetsCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
                default:
                    Receipt();
                    break;
                }
            break;
            }
            case 5:
                    system("cls");
                    goto Foods;
                    break;
    }
    }
    else if (Budget > 119)
    {
        system("cls");
        cout << "Budget = " << Budget << endl;
        cout << "Available Food Items for designated Budget\n";
        cout << "1. Spaghetti - 50\n";
        cout << "2. Chicken Fillet - 62\n";
        cout << "3. Chicken McDo Rice Meal - 80\n";
        cout << "4. McNuggets - 100\n";
        cout << "5. Chicken Spaghetti - 120\n";
        cout << "6. Back\n";
        int OrderSelect;
        cout << "Enter Order\n";
        cin >> OrderSelect;
        switch (OrderSelect)
        {
        case 1:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (Spaghetti*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (Spaghetti*Amount);
                SpaghettiCnt = SpaghettiCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
                default:
                    Receipt();
                    break;
                }
            break;

            }
            case 2:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (ChickFillet*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (ChickFillet*Amount);
                ChickFilletCnt = ChickFilletCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;

            }
            case 3:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (RiceMeal*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (RiceMeal*Amount);
                RiceMealCnt = RiceMealCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;
            }
                  case 4:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (McNuggets*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (McNuggets*Amount);
                McNuggetsCnt = McNuggetsCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;

            }
            case 5:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (ChickSpag*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (ChickSpag*Amount);
                ChickSpagCnt = ChickSpagCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;

            }
                case 6:
                    system("cls");
                    goto Foods;
                    break;

        }
    }
    break;
    case 3:
    if (Budget < 120)
    {
        system("cls");
        cout << "Budget = " << Budget << endl;
        cout << "Available Food Items for designated Budget\n";
        cout << "1. Apple Pie - 37\n";
        cout << "2. Hot Fudge Sundae - 40\n";
        cout << "3. Large McFloat - 52\n";
        cout << "4. Large Milk Tea McFloat - 99\n";
        cout << "5. Back\n";
        int OrderSelect;
        cout << "Enter Order\n";
        cin >> OrderSelect;
        switch (OrderSelect)
        {
        case 1:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (ApplePie*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (ApplePie*Amount);
                ApplePieCnt = ApplePieCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
                default:
                    Receipt();
                    break;
                }
            break;

            }
            case 2:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (HotFudgeSundae*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (HotFudgeSundae*Amount);
                HotFudgeSundaeCnt = HotFudgeSundaeCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

               default:
                    Receipt();
                    break;
                }
            break;
            }
            case 3:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (LargeFloat*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (LargeFloat*Amount);
                LargeFloatCnt = LargeFloatCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;

            }
                  case 4:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (LargeMTeaFloat*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (LargeMTeaFloat*Amount);
                LargeMTeaFloatCnt = LargeMTeaFloatCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;

            }
             case 5:
                    system("cls");
                    goto Foods;
                    break;
             default:
                    system("cls");
                    goto Foods;
                    break;

    }}
    else if (Budget > 100)
    {
        system("cls");
        cout << "Budget = " << Budget << endl;
        cout << "Available Food Items for designated Budget\n";
        cout << "1. Apple Pie - 37\n";
        cout << "2. Hot Fudge Sundae - 40\n";
        cout << "3. Large McFloat - 52\n";
        cout << "4. Large Milk Tea McFloat - 99\n";
        cout << "5. Large McFlurry - 120\n";
        cout << "6. Back\n";
        int OrderSelect;
        cout << "Enter Order\n";
        cin >> OrderSelect;
        switch (OrderSelect)
        {
        case 1:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (ApplePie*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (ApplePie*Amount);
                ApplePieCnt = ApplePieCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;
                default:
                    Receipt();
                    break;
                }
            break;

            }
            case 2:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (HotFudgeSundae*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (HotFudgeSundae*Amount);
                HotFudgeSundaeCnt = HotFudgeSundaeCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;
            }
            case 3:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (LargeFloat*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (LargeFloat*Amount);
                LargeFloatCnt = LargeFloatCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;
            }
                  case 4:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (LargeMTeaFloat*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (LargeMTeaFloat*Amount);
                LargeMTeaFloatCnt = LargeMTeaFloatCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;

            }
            case 5:
            cout << "Enter Amount\n";
            cin >> Amount;
            if (Budget < (LargeFlurry*Amount))
            {
                cout << "Not in scope of Budget enter a different order\n";
                Amount = 0;
                cout << "Press enter to  go back";
                cin.get();
                cin.get();
                system("cls");
                goto Foods;
            }
            else
            {
                Budget = Budget - (LargeFlurry*Amount);
                LargeFlurryCnt = LargeFlurryCnt + Amount;
                Amount = 0;
                char Decision;
                cout << "New Transaction? Y/N\n";
                cin >> Decision;
                switch (Decision)
                {
                case 'Y':
                    goto MainMenu;
                    break;
                case 'N':
                    Receipt();
                    break;
                case 'y':
                    goto MainMenu;
                    break;
                case 'n':
                    Receipt();
                    break;

                default:
                    Receipt();
                    break;
                }
            break;

            }
                case 6:
                    system("cls");
                    goto Foods;
                    break;


    }
    break;
}
case 4:
    system("cls");
    goto MainMenu;
    break;
        }

        break;
    case 3:
        cout << "Enter Budget Amount: ";
        cin >> Money;
        TotalBudget = TotalBudget+Money;
        Budget = Money + Budget;
        for (int i = 70; Budget < i;)
        {
        if (Budget <= 40)
        {
            system("cls");
            cout << "Budget cannot make a Single Purchase\n";
            cout << "Enter new Budget Amount: ";
            cin >> Budget;
        }

        }
        goto MainMenu;
        break;
    case 4:
        Receipt();
        break;
    case 5:
        exit(0);
        break;
    default:
        break;
}
}}
