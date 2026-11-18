#include "Ball.h"

int main() {
    cout << "=== LATE BINDING (DYNAMIC OBJECT SELECTION) ===" << endl;
    cout << "Choose ball type (1 - Football, 2 - Basketball): ";
    int choice;
    cin >> choice;

    AbstractBall* dynamicBall = nullptr;

    if (choice == 1) {
        dynamicBall = new Football("Adidas", "Red", 11.5, 10, "UEFA");
    }
    else {
        dynamicBall = new Basketball("Wilson", "Brown", 12.2, 50, "Rubber");
    }

    cout << "\nCalling polymorphic methods for the selected object:" << endl;
    dynamicBall->showInfo();
    dynamicBall->play();

    delete dynamicBall;

    cout << "\n=== EARLY BINDING (FOR COMPARISON) ===" << endl;
    Football staticFootball("Demix", "White", 11.0, 5, "Local League");
    Basketball staticBasketball("Torres", "Orange", 12.0, 15, "Composite");

    cout << "\nCalling methods for Football:" << endl;
    staticFootball.showInfo();
    staticFootball.play();

    cout << "\nCalling methods for Basketball:" << endl;
    staticBasketball.showInfo();
    staticBasketball.play();

    cout << "\n=== END OF PROGRAM (STATIC DESTRUCTORS WILL BE CALLED) ===" << endl;
    return 0;
}
