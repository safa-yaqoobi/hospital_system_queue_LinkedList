#Research Problem

Hospitals need to manage patients fairly. Emergency patients must be treated before normal ones. This project uses a Priority Queue with LinkedList to handle this problem in C++.
Motivation
The goal was to use Queue and LinkedList together in a real scenario. A hospital system shows clearly why priority matters in data structures.

#Control Flow

1. Program starts and shows the menu
2. User adds a normal or emergency patient
3. Normal patient goes to END of queue
4. Emergency patient goes to FRONT of queue
5. Serve patient removes the first patient
6. Program runs until user exits
 
#Project Structure

The project has two main classes:
• HospitalQueue class — handles the queue. Has addNormal, addEmergency, servePatient, showQueue functions.
• Patient struct — stores patient name and pointer to next patient.
 
#Technologies Used

• C++ — main programming language
• LinkedList — used to build the queue
• Priority Queue — emergency patients go first
• OOP (classes) — HospitalQueue is a separate class
 
#How to Run
7. Open Code::Blocks or any C++ compiler
8. Add Hospital.h and main.cpp to the project
9. Press F9 to compile and run
10. Choose from menu: add patient, serve, show queue, or exit
