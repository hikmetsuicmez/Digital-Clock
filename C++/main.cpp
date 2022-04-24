#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{

    system("Color 4A");

    // Background color
    int hour, min, sec;
    string am_pm = "AM";
    cout << setw(90)
         << " --*Enter Current time*-- \n";

    // Use of manipulator for taking
    // input from the user

    cout << "HH- ";
    cin >> hour;
    cout << "MM- ";
    cin >> min;
    cout << "SS- ";
    cin >> sec;

    // Background color and the
    // Foreground for 2nd screen
    system("Color 4A");

    // Cases for the Wrong Time Input

    if (hour > 23)
        cout << "Wrong Time Input";
    else if (min > 60)
        cout << "Wrong Time Input";
    else if (sec > 60)
        cout << "Wrong Time Input";

    // Otherwise
    else
    {
        while (1)

        // Run Block infinitely
        {
            system("cls");

            // Clear the console
            // Code for Showing Time

            for (hour; hour < 24; hour++)
            {

                for (min; min < 60; min++)
                {

                    for (sec; sec < 60; sec++)
                    {
                        system("cls");

                        cout << "\n\n\n\n------------"
                                "-----------------------------"
                                "----------------------------";
                        cout << endl;
                        cout << "Current Time = "
                             << hour << ":" << min << ":" << sec << "Hrs--------------"
                                                                    "--------------"
                                                                    "--------------";
                        // HH:MM:SS columns in output
                        Sleep(1000);

                        // Pause for 1 sec
                    }
                    sec = 0;
                }
                min = 0;
            }
        }
    }
}