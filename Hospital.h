#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <string>
using namespace std;

struct Patient {
    string name;
    Patient* next;
};


class HospitalQueue {

private:
    Patient* front;
    Patient* rear;

public:

    HospitalQueue() {
        front = NULL;
        rear = NULL;
    }

    Patient* createPatient(string name) {
        Patient* newPatient = new Patient();
        newPatient->name = name;
        newPatient->next = NULL;
        return newPatient;
    }

    void addNormal(string name) {
        Patient* newPatient = createPatient(name);

        if (front == NULL)
            front = rear = newPatient;
        else {
            rear->next = newPatient;
            rear = newPatient;
        }

        cout << name << " added as normal patient.\n";
    }

    void addEmergency(string name) {
        Patient* newPatient = createPatient(name);
        newPatient->next = front;
        front = newPatient;

        if (rear == NULL)
            rear = newPatient;

        cout << name << " added as emergency patient.\n";
    }


    void servePatient() {
        if (front == NULL) {
            cout << "Queue is empty!\n";
            return;
        }

        cout << "Serving: " << front->name << endl;

        Patient* temp = front;
        front = front->next;
        delete temp;

        if (front == NULL)
            rear = NULL;
    }


    void showQueue() {
        if (front == NULL) {
            cout << "Queue is empty!\n";
            return;
        }

        Patient* temp = front;
        while (temp != NULL) {
            cout << temp->name << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};


int getChoice() {
    int choice;
    cin >> choice;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a number (1-5) not a name!\n";
        return -1;
    }

    cin.ignore(100, '\n');
    return choice;
}


string getName() {
    string name;
    getline(cin, name);

    if (name.empty()) {
        cout << "You have to add a name!\n";
        return "";
    }

    return name;
}

#endif
