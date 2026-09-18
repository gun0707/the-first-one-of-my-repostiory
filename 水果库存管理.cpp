#include <iostream>
#include <string>
#include <map>
using namespace std;
class FruitInventorySystem {
private:map<string, int> Inventory;
public:void addFruit(string fruitName, int quantity) {
    Inventory[fruitName] += quantity;

}
      int queryFruit(string fruitname) {
          auto it = Inventory.find(fruitname);
          if (it != Inventory.end()) {
              return it->second;
          }
          return 0;
      }

      void listFruits() {
          for (auto& pair : Inventory) {
              cout << pair.first << " " << pair.second << endl;
          }
      }




};
int main() {
    FruitInventorySystem system;
    std::string operation;

    while (std::cin >> operation) {
        if (operation == "END") {
            break;
        }
        else if (operation == "ADD") {
            std::string fruitName;
            int quantity;
            std::cin >> fruitName >> quantity;
            system.addFruit(fruitName, quantity);
        }
        else if (operation == "QUERY") {
            std::string fruitName;
            std::cin >> fruitName;
            std::cout << system.queryFruit(fruitName) << std::endl;
        }
        else if (operation == "LIST") {
            system.listFruits();
        }
    }

    return 0;
}






