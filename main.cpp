#include <iostream>
#include <map>
#include <vector>
#include <tuple>
using namespace std;

void addVillager(map<string, tuple<int, string, string>>&);
void deleteVillager(map<string, tuple<int, string, string>>&);
void increaseFriendship(map<string, tuple<int, string, string>>&);
void decreaseFriendship(map<string, tuple<int, string, string>>&);
void searchVillager(map<string, tuple<int, string, string>>&);

int main() {
    // declarations
    map<string, tuple<int, string, string>> villagers;
    int choice;

    // insert elements into the map
    // note how the right-hand side of the assignment are the vector elements
    villagers["Drago"] = {5, "Alligator", "Snap to It!"};
    villagers["Raymond"] = {8, "Cat", "Nice fit"};
    villagers.insert({"Kyle", {10, "Wolf", "Hubba hubba!"}});
    
    while (choice != 6)
    {
        cout << "Villager details:" << endl;
        for (auto villager : villagers)
        {
            cout << villager.first << " ";
            for (auto it)
            {
                /* code */
            }
            
        }
        

        do
        {
            cout << "1. Add Villager" << endl;
            cout << "2. Delete Villager" << endl;
            cout << "3. Increase Friendship" << endl;
            cout << "4. Decrease Friendship" << endl;
            cout << "5. Search for Villager" << endl;
            cout << "6. Exit" << endl;
            cin >> choice;
        } while (choice < 1 || choice > 6);

        switch (choice)
        {
        case 1:
            addVillager(villagers);
            break;
        case 2:
            deleteVillager(villagers);
            break;
        case 3:
            increaseFriendship(villagers);
            break;
        case 4:
            decreaseFriendship(villagers);
            break;
        case 5:
            searchVillager(villagers);
            break;
        case 6:
            break;
        default:
            break;
        }
    }

    return 0;
}

void addVillager(map<string, tuple<int, string, string>>& villagerMap)
{

}