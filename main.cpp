#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>

using namespace std;

class Dogs
{
public:
    int dogcount;
    string country;
};

int main()
{
    int totaldogs = 0;
    int option;
    string country_name;
    Dogs obj;
    unordered_map<string,int> ump;
    ifstream infile;
    infile.open("dogs.txt");

    if (!infile)
    {
        cout << endl << "Error opening file" <<endl;
        return 1;
    }

    while (infile>>obj.country>>obj.dogcount)
    {
        //cout << obj.country << '\t' << obj.dogcount << '\n';
        ump.insert({obj.country,obj.dogcount});
        totaldogs += obj.dogcount;
    }

    cout << "\t Welcome to our Menu \n"
         << "\t select an option: \n \n" << endl;
    cout << "1. See number of total dogs around the world. \n"
         << "2. See the number of dogs in a specific country. \n \n";
    cout << "Option: ";
    cin  >> option;

    if (option == 1)
    {
        cout << "The total number of dogs is: " << totaldogs;
    }
    else if (option == 2)
    {
        cout << "Enter the country name: ";
        cin >> country_name;

        auto it = ump.find(country_name);
        if (it != ump.end())
        {
            cout << it-> obj.country << " " << it -> obj.dogcount << endl;
        }
        else
            cout << country_name << " is not present." << endl;
    }

    return 0;
}
