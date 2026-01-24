//Lab 2 Task 1
#include <iostream>
int main() {
  std::cout << "         ____1____" << std::endl;
  std::cout << "     8__/         \\__2" << std::endl;
  std::cout << "   _/                \\_" << std::endl;
  std::cout << "  |                   |" << std::endl;
  std::cout << " 7|                   |3" << std::endl;
  std::cout << "  |                   |" << std::endl;
  std::cout << "   \\_               _/" << std::endl;
  std::cout << "     6\\__         __/4" << std::endl;
  std::cout << "        \\_______/" << std::endl;
  std::cout << "            5" << std::endl;
  std::cout 
  << "1 - Path of the Elves" << std::endl
  << "2 - Path of the Wizards" << std::endl
  << "3 - Path of the Dragons" << std::endl
  << "4 - Path of the Goblins" << std::endl
  << "5 - Path of the Unknown" << std::endl
  << "6 - Path of the Dwarves" << std::endl
  << "7 - Path of the Hobbits" << std::endl
  << "Enter the integer corresponding to which path you would like to take" << std::endl;
int input;
std::cin >> input;
if (input == 1) {
  std::cout << "The player encounters Legolas and a group of friendly elves who offer a magical bow and arrows. The player joins them on a quest to protect the forest." << std::endl;
}
else if (input == 2) {
  std::cout << "The player meets Gandalf the Grey, who teaches powerful spells. The player becomes a mighty wizard under Gandalf's guidance." << std::endl;
}
else if (input == 3) {
  std::cout << "The player finds Smaug's lair filled with treasure. The dragon challenges the player to a riddle. Upon solving it, Smaug grants a share of his treasure." << std::endl;
}
else if (input == 4) {
  std::cout << "The player falls into a trap set by goblins and is captured. The player manages to escape, but the adventure ends here." << std::endl;
}
else if (input == 5) {
  std::cout << "The player ventures into the unknown and discovers an ancient, hidden city. The city's secrets are theirs to explore." << std::endl;
}
else if (input == 6) {
  std::cout << "The player meets Gimli and a group of dwarves who invite them to their underground kingdom. The player helps them mine precious gems and becomes an honorary dwarf." << std::endl;
}
else if (input == 7) {
  std::cout << "The player finds the Shire and meets Frodo and Sam. They invite the player to a grand feast, enjoying a peaceful life among the hobbits." << std::endl;
}
else {std::cout << "Invalid path, please restart the game" << std::endl;}


return 0;
}
/*
        ____1_____
     8__/         \__2
   _/                \_
  |                   |
 7|                   |3
  |                   |
   \_               _/
     6\__         __/4
        \_______/
            5
*/
