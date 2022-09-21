/*
* Name: Maria Jimenez
* Course: CS 250
* Description:
* This program will give out the estimated
* population given the birth and
* death rate while avoiding negative numbers
* nor a population less than 2.
*/

#include <iostream>

using namespace std;

//initialization
void PopEstimate(float &,float &,float &, float &);
void GrowthRate(float &,float &, int &);

int main()
{

    float P;
    float B;
    float D;
    const int min_pop = 2;
    float pop_est;
    int rate;

    //repeat statement if user enters invalid input
    cout << "Insert the population of the first day of the year: ";
         cin >> P;

    if (P < min_pop)
    {
        do{
           cout << "ERROR. NEEDS GREATER VALUE." << endl;
           cout << "Insert the population of the first day of the year: ";
           cin >> P;
        } while (P < min_pop);
    }

    //repeat statement if user enters invalid input
    cout << "\n Insert the Birth Rate: ";
         cin >> B;
    if (B < 0)
        {
            do{
                cout << "ERROR. NEEDS GREATER VALUE.";
                cout << "\n Insert the Birth Rate: ";
                cin >> B;
            } while (B < 0);
        }


      //repeat statement if user enters invalid input
      cout << "\n Insert the Death Rate: ";
         cin >> D;
         if (D < 0)
         {
             do{
                 cout << "ERROR. NEEDS GREATER VALUE.";
                 cout << "\n Insert the Death Rate: ";
                 cin >> D;
             } while (D < 0);
         }


     PopEstimate(P,B,D,pop_est);
     cout << "The estimate of the population of the year would be: " << pop_est << endl;

     GrowthRate(B,D,rate);
     cout << "The growth rate it's predicted to be of: " << rate << "%" << endl;

    return 0;
}

void PopEstimate (float &P, float &B,float &D, float &pop_est)
{

    pop_est = P + ((B*P)/100) - ((D*P)/100);

}

void GrowthRate (float &B, float &D, int &rate)
{
    rate = B-D;

}
