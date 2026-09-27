#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    cout << "****************************************" << endl;
    cout << "Sports Events Score Analysis" << endl;
    cout << "****************************************" << endl;

    int i, N, total = 0;
    int S[20]; // allow up to 20 participants
    int highest, lowest;

    string name[20], id[20];

    // Input number of participants
    cout << "Enter number of participants: ";
    cin >> N;

    if (N <= 0 || N > 20)
    {
        cout << "Invalid number of participants" << endl;
    }
    else
    {
        // Input participant details and calculate total
        for (i = 0; i < N; i++)
        {
            cout << "Enter participant ID: ";
            cin >> id[i];
            cin.ignore();

            cout << "Enter participant Name: ";
            getline(cin, name[i]);

            cout << "Enter score: ";
            cin >> S[i];

            total += S[i]; // ✅ add each score to total
        }

        // Initialize highest and lowest with first score
        highest = S[0];
        lowest = S[0];

        // Find highest and lowest scores
        for (i = 1; i < N; i++)
        {
            if (S[i] > highest)
                highest = S[i];
            if (S[i] < lowest)
                lowest = S[i];
        }

        // Display participant performance
        cout << endl;
        cout << "------------------------------" << endl;
        cout << "Participant Performance" << endl;
        cout << "------------------------------" << endl;
        cout << left << setw(10) << "ID"
             << left << setw(15) << "NAME"
             << left << setw(10) << "SCORE" << endl;

        for (i = 0; i < N; i++)
        {
            cout << left << setw(10) << id[i]
                 << left << setw(15) << name[i]
                 << left << setw(10) << S[i] << endl;
        }

        // Display summary
        cout << endl;
        cout << "Total Marks : " << total << endl;   // ✅ correct total
        cout << "Highest Score : " << highest << endl;
        cout << "Lowest Score : " << lowest << endl;
    }

    return 0;
}
