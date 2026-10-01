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
 * TODO (Part C): Describe the study session durations managed by this ADT.
 * regisra cuantas sesiones hay ( STATIC) y los minutos.
 * Operations:
 * TODO (Part C): Describe addSession(minutes), including its result when the log cannot accept another session.
 * se debe de sumar los minutos de cada sesion y limitarlo a la semana
 * TODO (Part C): Describe totalMinutes().
 * esta es la suma de los minutos en esta funcion
 * TODO (Part C): Describe longestSession() and its precondition.
 * compara las sesiones(antes de sumarlas) para decirte cual duró más
 * TODO (Part C): Describe size() and isEmpty().
 * nos dice el tamaño y la otra funcion la vacia
 */
class StudySessionLog
{
private:
    // ===== Resolve these TODOs later (Part D) =====

    // TODO (Part D): Add a fixed capacity constant of four study sessions.
    // TODO (Part D): Add an int array named sessionMinutes for the stored session durations.
    // TODO (Part D): Add an int that tracks how many study sessions are stored.

public:
    // TODO (Part D): Write a constructor that creates an empty log.
    // TODO (Part D): Write addSession. It receives minutes and reports whether the session was stored.
    // TODO (Part D): Write totalMinutes as a const member function.
    // TODO (Part D): Write longestSession as a const member function.
    // TODO (Part D): Write size as a const member function.
    // TODO (Part D): Write isEmpty as a const member function.
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    // TODO (Part E): Print the total minutes and the longest stored session.
    // TODO (Part E): Print descriptive English labels for all results.

    return 0;
}