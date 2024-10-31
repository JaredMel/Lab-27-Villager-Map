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
            cout << villager.first << " [";
            std::apply([](auto&&... args) {
                ((cout << args << "]"<< endl), ...);
            }, villager.second);
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

void addVillager(map<string, tuple<int, string, string>> &villagerMap)
{
    int friendshipLevel;
    string species;
    string catchphrase;
    string name;

    cout << "Villager name: ";
    getline(cin, name);
    cin.ignore();
    cout << "Friendship level: ";
    cin >> friendshipLevel;
    cout << "Species: ";
    getline(cin, species);
    cin.ignore();
    cout << "Catchphrase: ";
    getline(cin, catchphrase);
    cin.ignore();

    villagerMap.insert({name, {friendshipLevel, species, catchphrase}});
    cout << name << " added." << endl;
}

void deleteVillager(map<string, tuple<int, string, string>> &villagerMap)
{
    string name;

    cout << "Villager details:" << endl;
    for (auto villager : villagerMap)
    {
        cout << villager.first << " [";
        std::apply([](auto&&... args) {
            ((cout << args << "]"<< endl), ...);
        }, villager.second);
    }
    
    cout << "Name of Villager: ";
    getline(cin, name);
    cin.ignore();

    villagerMap.erase(name);
    cout << name << " deleted." << endl;
}

void increaseFriendship(map<string, tuple<int, string, string>> &villagerMap)
{
    string name;
    int incr;

    cout << "Villager details:" << endl;
    for (auto villager : villagerMap)
    {
        cout << villager.first << " [";
        std::apply([](auto&&... args) {
            ((cout << args << "]"<< endl), ...);
        }, villager.second);
    }

    cout << "Name of Villager: ";
    getline(cin, name);
    cin.ignore();

    for (auto villager : villagerMap)
    {
        if (villager.first.compare(name))
        {
            villager.second.get<0>(t);
        }
    }
}