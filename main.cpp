#include <iostream>
#include <map>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    // declarations
    map<string, tuple<int, string, string>> villagerColors;
    int choice;

    // insert elements into the map
    // note how the right-hand side of the assignment are the vector elements
    villagerColors["Drago"] = {5, "Alligator", "Snap to It!"};
    villagerColors["Raymond"] = {8, "Cat", "Nice fit"};
    villagerColors.insert({"Kyle", {10, "Wolf", "Hubba hubba!"}});

    cout << "1. Add Villager" << endl;
    cout << "2. Delete Villager" << endl;
    cout << "3. Increase Friendship" << endl;
    cout << "4. Decrease Friendship" << endl;
    cout << "5. Search for Villager" << endl;
    cout << "6. Exit" << endl;

    switch ()
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }

    return 0;
}