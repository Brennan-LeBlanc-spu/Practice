#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> myDictionary;
    myDictionary.insert({"apple", "der Apfel"});
    myDictionary.insert({"Banana", "die Banane"});
    myDictionary.insert({"orange", "die Orange, di Apfelsine"});

    myDictionary["strawberry"] = "Die Erdbeere";
    
    myDictionary.erase("apple");
    myDictionary.clear();
    cout << myDictionary.size() << endl;

    for (auto pair : myDictionary)  
    {
        cout << pair.first << " - " << pair.second << endl;
    }

    return 0;
}
