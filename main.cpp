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
    do {
         cout << "Insert the population of the first day of the year: ";
         cin >> P;

            if (P < min_pop)
            {
                cout << "ERROR. NEEDS GREATER VALUE.";
            }
        } while (P < min_pop);
    
    //repeat statement if user enters invalid input  
    do {
         cout << "\n Insert the Birth Rate: ";
         cin >> B;

            if (B < 0)
            {
                cout << "ERROR. NEEDS GREATER VALUE.";
            }
        } while (B < 0);
        
      //repeat statement if user enters invalid input  
    do {
         cout << "\n Insert the Death Rate: ";
         cin >> D;

         if (D < 0)
            {
                cout << "ERROR. NEEDS GREATER VALUE.";
            }
        } while (D < 0);
    
    
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
