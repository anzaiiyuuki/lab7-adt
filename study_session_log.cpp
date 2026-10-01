/*
 * Course: COEN 2220 - Programming 2
 * Name: [ Aida S. Mendoza Gonzalez]
 * Lab: Lab 7 - Abstract Data Types
 * Description: Guided example - ADT contract, implementation, and client code
 * Due date: [October 1, 2026]
 */

#include <iostream>
using namespace std;

/*
 * StudySessionLog ADT
 *
 * Data:
 * - Stores up to a fixed capacity of 4 study session durations in minutes.
 * Operations:
 * - addSession(minutes): Adds a session duration if capacity allows; returns true if successful, false if full.
 * - totalMinutes(): Returns the sum of all stored session durations.
 * - longestSession(): Returns the duration of the longest session stored (requires non-empty log).
 * - size(): Returns the current number of stored sessions.
 * - isEmpty(): Returns true if the log contains no sessions.
 */
class StudySessionLog
{
private:
    static const int CAPACITY = 4;
    int minutes[CAPACITY];
    int storedsessions;

public:
    // Constructor
    StudySessionLog()
    {
        storedsessions = 0;
    }

    // addSession: receives minutes and reports whether the session was stored
    bool addSession(int minuts)
    {
        if (storedsessions == CAPACITY)
        {
            cout << "Log full, cannot add session of " << minuts << " minutes." << endl;
            return false;  
        }

        minutes[storedsessions] = minuts;
        storedsessions++;
        return true;
    }

    void PrintSessions() const
    {
        for (int cc = 0; cc < storedsessions; cc++)
        {
            cout << minutes[cc] << " ";
        }
        cout << endl;
    }

    // totalMinutes as a const member function
    int totalMinutes() const
    {
        int total = 0;
        for (int c = 0; c < storedsessions; c++)
        {
            total += minutes[c];
        }
        return total;
    }

    // longestSession as a const member function
    int longestSession() const
    {
        if (storedsessions == 0) return 0; // Precondition check
        
        int lng = minutes[0];
        for (int c = 1; c < storedsessions; c++)
        {
            if (minutes[c] > lng)
            {
                lng = minutes[c];
            }
        }
        return lng;
    }

    // size as a const member function
    int Size() const
    {
        return storedsessions;
    }

    // isEmpty as a const member function
    bool isEmpty() const
    {
        return (storedsessions == 0);
    }
};


int main()
{
    // Create a StudySessionLog object and print whether it starts empty
    StudySessionLog s1;
    
    cout << boolalpha; // Prints true/false instead of 1/0
    cout << "Log starts empty: " << s1.isEmpty() << endl;

    // Add four dummy session durations and attempt to add a fifth
    bool added1 = s1.addSession(10);
    bool added2 = s1.addSession(30);
    bool added3 = s1.addSession(20);
    bool added4 = s1.addSession(5);
    bool added5 = s1.addSession(1); // Should fail (capacity is 4)

    cout << endl;

    // Print the number of stored sessions and whether the fifth session was accepted
    cout << "Stored sessions count: " << s1.Size() << endl;
    cout << "Was the 5th session accepted? " << added5 << endl;

    cout << endl;

    // Print descriptive English labels for all results
    cout << "Stored session durations: ";
    s1.PrintSessions();
    cout << "Total study minutes: " << s1.totalMinutes() << endl;
    cout << "Longest session: " << s1.longestSession() << endl;

    return 0;
}