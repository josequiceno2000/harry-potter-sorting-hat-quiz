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

    // Questions
    std::cout << "\nQ1) When I'm dead, I want people to remember me as:\n\n";
    std::cout << "    1) The Good\n";
    std::cout << "    2) The Great\n";
    std::cout << "    3) The Wise\n";
    std::cout << "    4) The Bold\n";

    std::cin >> answer1;

    // House Point Flows
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
    
}