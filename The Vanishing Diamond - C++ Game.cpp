//Created by AUSAN / CPE 102 / CPE11S1
//CPE102 / 11-11-2024

#include <iostream>
using namespace std;

void investigateCrimeScene();
void interviewButler();
void talkToGardener();
void ownerOffice();
void interviewOwner();
void finalDeduction();

int main()
{
    int scenarioChoice;
    cout << "Welcome to 'The Vanishing Diamond', Detective Mystery Game!\n";
    cout << "\nYou are a detective tasked with solving the mystery of the missing diamond. Investigate, Ask Questions, and Gather Clues.\n";
    cout << "\nYou arrive at the crime scene. The diamond has vanished and the room is full of clues.\n";

    do
    {
        cout << "\nChoose your next action:\n";
        cout << "1. Investigate the Crime Scene\n";
        cout << "2. Interview the Butler\n";
        cout << "3. Talk to the Gardener\n";
        cout << "4. Investigate the Owner's Office\n";
        cout << "5. Interview the Owner\n";
        cout << "6. Make the Final Deduction\n";
        cout << "7. Exit the Game\n";
        cout << "Enter your Choice (1 to 7): ";
        cin >> scenarioChoice;

        switch (scenarioChoice)
        {
            case 1:
                investigateCrimeScene();
                break;
            case 2:
                interviewButler();
                break;
            case 3:
                talkToGardener();
                break;
            case 4:
                ownerOffice();
                break;
            case 5:
                interviewOwner();
                break;
            case 6:
                finalDeduction();
                break;
            case 7:
                cout << "\nThank you for playing! Goodbye.\n";
                break;
            default:
                cout << "\nINVALID CHOICE. Please select a number from 1 to 7.\n";
                break;
        }
    } while (scenarioChoice != 7);
return 0;
}

void investigateCrimeScene()
{
    int choice;
    cout << "\nYou see a set of footprints leading to the window, a broken vase on the floor, and a strange odor in the air.\n";
    cout << "1. Inspect the window.\n";
    cout << "2. Look at the broken vase.\n";
    cout << "3. Inspect the strange odor.\n";
    cout << "Enter your choice (1, 2, 3): ";
    cin >> choice;

    if (choice == 1)
        cout << "\nThe window is open, but there are no signs of forced entry. It seems strange.\n";
    else if (choice == 2)
        cout << "\nThe vase is broken, but there is a small piece of paper inside. It has a strange symbol on it.\n";
    else if (choice == 3)
        cout << "\nYou trace where the strange odor is coming from. It comes from the corner, where you found a small vial of perfume. It seems out of place.\n";
    else
        cout << "\nInvalid Choice. You stand there confused, unable to make any progress.\n";
}

void interviewButler()
{
    int choice;
    cout << "\nYou decide to interview the butler. He seems calm but nervous when you ask about the missing diamond.\n";
    cout << "1. Ask if he saw anyone enter the room.\n";
    cout << "2. Ask about the strange symbol on the paper.\n";
    cout << "3. Ask about the perfume you found at the crime scene.\n";
    cout << "Enter your choice (1, 2, 3): ";
    cin >> choice;

    if (choice == 1)
        cout << "\nThe butler claims he did not see anyone. But his hands are trembling, and his eyes is avoiding yours.\n";
    else if (choice == 2)
        cout << "\nThe butler denies knowing anything about the strange symbol. He seems to be hiding something.\n";
    else if (choice == 3)
        cout << "\nThe butler gets flustered when you mention the perfume. He says it belongs to the owner, but you're not convinced.\n";
    else
        cout << "\nInvalid Choice. The butler stares at you blankly.\n";
}

void talkToGardener()
{
    int choice;
    cout << "\nThe gardener is working in the garden. You approach him to ask about the night the diamond disappeared.\n";
    cout << "1. Ask if he noticed anything unusual around the house that night.\n";
    cout << "2. Ask about the Butler's Behavior.\n";
    cout << "3. Ask about the perfume you found at the crime scene.\n";
    cout << "Enter your choice (1, 2, 3): ";
    cin >> choice;

    if (choice == 1)
        cout << "\nThe gardener says he heard footsteps near the garden around midnight. Someone was definitely there.\n";
    else if (choice == 2)
        cout << "\nThe gardener mentions that the butler was acting strangely, but he didn't think too much of it at that time.\n";
    else if (choice == 3)
        cout << "\nThe gardener seems unfamiliar of the perfume and doesn't recognize it. He is more focused on his work.\n";
    else
        cout << "\nInvalid Choice. The gardener stares at you curiously.\n";
}

void ownerOffice()
{
    int choice;
    cout << "\nYou enter the owner's office. It is filled with expensive furnitures, but the desk seems messy.\n";
    cout << "You notice a torn envelope on the floor, a drawer that seems slightly open, and a security camera turned off.\n";
    cout << "1. Open the Drawer.\n";
    cout << "2. Investigate the Torn Envelope.\n";
    cout << "3. Investigate the Security Camera.\n";
    cout << "Enter your choice (1, 2, 3): ";
    cin >> choice;

    if (choice == 1)
        cout << "\nYou open the drawer and find a letter with an unaddressed note. It says, 'Meet me at midnight.'.\n";
    else if (choice == 2)
        cout << "\nThe envelope contains a letter with no name, but it's signed with the same strange symbol you saw earlier.\n";
    else if (choice == 3)
        cout << "\nThe security camera is intentionally disabled. Someone didn't want to be recorded.\n";
    else
        cout << "\nInvalid Choice. You stand frozen in the office, unsure of what to do.\n";
}

void interviewOwner()
{
    int choice;
    cout << "\nYou decide to interview the owner. He is calm and collected, but seems a bit too confident.\n";
    cout << "1. Ask about the camera being turned off.\n";
    cout << "2. Ask about the perfume, you found at the crime scene.\n";
    cout << "3. Ask about the strange symbol on the paper.\n";
    cout << "Enter your choice (5, 2, 3): ";
    cin >> choice;

    if (choice == 1)
        cout << "\nThe owner claims the camera malfunctioned and assures you that it was nothing important.\n";
    else if (choice == 2)
        cout << "\nThe owner claims that the perfume is his wife's, and she left it behind when she went out.\n";
    else if (choice == 3)
        cout << "\nThe owner denies knowing anything about the symbol, although he appears uncomfortable when you mention it.\n";
    else
        cout << "\nInvalid Choice. The owner remains composed and unbothered.\n";
}

void finalDeduction()
{
    int choice;
    cout << "\nYou gather all the evidence and return to the living room to make your final deduction about who took the diamond.\n";
    cout << "The clues seem to point in different directions, but you have to make a choice.\n";
    cout << "1. Accuse the butler of stealing the diamond.\n";
    cout << "2. Accuse the gardener of stealing the diamond.\n";
    cout << "3. Accuse the owner of orchestrating the disappearance.\n";
    cout << "4. Accuse the owner's wife of stealing the diamond.\n";
    cout << "Enter your Choice (1, 2, 3, or 4): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nYou accuse the butler. He breaks down and admits to stealing the diamond but claims he was forced to do it.\n";
        cout << "\nAfter the butler admits to the stealing, the gardener reveals he was involved, claiming he helped the butler hide the diamond.\n";
    }
    else if (choice == 2)
    {
        cout << "\nYou accuse the gardener. He looks shocked but eventually confesses, revealing he had hidden motives to steal the diamond.\n";
        cout << "\nBefore you can press him further, the butler stands up and admits he helped orchestrate the crime.\n";
    }
    else if (choice == 3)
    {
        cout << "\nYou accuse the owner. To your surprise, the owner laughs and reveals it was all part of a game they had been playing.\n";
        cout << "\nBut then, the owner's wife steps forward, revealing she had actually manipulated everyone-including the owner.\n";
    }
    else if (choice == 4)
    {
        cout << "\nYou accuse the owner's wife. She confesses that she was secretly in love with the gardener and orchestrated the whole thing.\n";
        cout << "\nBut as you turn to the gardener, he reveals he only went along with her plan to protect his real accomplice: The Butler.\n";
    }
    else
    {
        cout << "\nYou remain unsure of who the real culprit is. The suspects exchange glances, and you realize you may have missed something crucial.\n";
    }

    // The Twist
    cout << "\nJust as you're about to call the authorities, the owner walks to a nearby cabinet and opens it, revealing a hidden compartment. ";
    cout << "\nInside, you find multiple copies of the diamond, all perfectly cut and identical to the original. ";
    cout << "\nThe owner smirks and says, 'None of you actually took the diamond. It was a setup. This is a test to see how far you'd go in your pursuit of greed and deceit.' ";
    cout << "\nThe diamond was never stolen, but you all played into the game. ";
    cout << "It turns out the diamond was a decoy, part of a larger psychological experiment orchestrated by the owner. ";
    cout << "\nWith the truth revealed, the suspects are left questioning their own actions, and you realize that the case was never about solving a crime, but understanding human nature. ";
    cout << "\nThe case is closed, but the questions linger... Did any of you truly understand the game?\n";
}