#include "Hospital.h"

int main() {
    HospitalQueue hospital;
    int choice;
    string name;

    do {
        cout << "\n===== HOSPITAL SYSTEM =====\n";
        cout << "1. Add Normal Patient\n";
        cout << "2. Add Emergency Patient\n";
        cout << "3. Serve Patient\n";
        cout << "4. Show Queue\n";
        cout << "5. Exit\n";
        cout << "Choice: ";

        choice = getChoice();

        if (choice == 1) {
            cout << "Name: ";
            name = getName();
            if (!name.empty()) hospital.addNormal(name);
        }
        else if (choice == 2) {
            cout << "Name: ";
            name = getName();
            if (!name.empty()) hospital.addEmergency(name);
        }
        else if (choice == 3) hospital.servePatient();
        else if (choice == 4) hospital.showQueue();
        else if (choice == 5) cout << "Goodbye!\n";
        else cout << "You have to choose a number between 1 and 5!\n";

    } while (choice != 5);

    return 0;
}
