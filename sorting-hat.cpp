#include <iostream>

int main() {

    // Time to get sorted, punk.
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    // Answer variables
    int answer1;
    int answer2;
    int answer3;
    int answer4;

    // Welcome message
    std::cout << "The Sorting Hat Quiz\n";

    // Question 1
    std::cout << "\nQ1) When I'm dead, I want people to remember me as:\n\n";
    std::cout << "    1) The Good\n";
    std::cout << "    2) The Great\n";
    std::cout << "    3) The Wise\n";
    std::cout << "    4) The Bold\n";

    std::cin >> answer1;

    // Answer 1 Point Flow
    switch (answer1) {
        case 1:
            hufflepuff += 1;
            break;
        case 2:
            slytherin += 1;
            break;
        case 3:
            ravenclaw += 1;
            break;
        case 4:
            gryffindor += 1;
            break;
        default:
            std::cout << "Invalid input.\n";
    }

    // Question 2
    std::cout << "\nQ2) Dawn or Dusk?\n\n";
    std::cout << "    1) Dawn\n";
    std::cout << "    2) Dusk\n";
    

    std::cin >> answer2;

    // Answer 2 Point Flow
    switch (answer2) {
        case 1:
            ravenclaw += 1;
            gryffindor += 1;
            break;
        case 2:
            hufflepuff += 1;
            slytherin += 1;
            break;
        default:
            std::cout << "Invalid input.\n";
    }

    // Question 3
    std::cout << "\nQ3) What kind of instrument most pleases your ear?\n\n";
    std::cout << "    1) The violin\n";
    std::cout << "    2) The trumpet\n";
    std::cout << "    3) The piano\n";
    std::cout << "    4) The drum\n";

    std::cin >> answer3;

    // Answer 3 Point Flow
    switch (answer3) {
        case 1:
            slytherin += 1;
            break;
        case 2:
            hufflepuff += 1;
            break;
        case 3:
            ravenclaw += 1;
            break;
        case 4:
            gryffindor += 1;
            break;
        default:
            std::cout << "Invalid input.\n";
    }

    // Question 4
    std::cout << "\nQ4) Which road tempts you the most?\n\n";
    std::cout << "    1) The wide, sunny grassy lane\n";
    std::cout << "    2) The narrow, dark, lantern-lit alley\n";
    std::cout << "    3) The twisting, leaf-strewn path through woods\n";
    std::cout << "    4) The cobbled streed lined (ancient buildings)\n";

    std::cin >> answer3;

    // Answer 4 Point Flow
    switch (answer4) {
        case 1:
            hufflepuff += 1;
            break;
        case 2:
            slytherin += 1;
            break;
        case 3:
            gryffindor += 1;
            break;
        case 4:
            ravenclaw += 1;
            break;
        default:
            std::cout << "Invalid input.\n";
    }

    
    
}