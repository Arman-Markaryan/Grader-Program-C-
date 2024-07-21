#include <iostream>
#include <string>
#include <vector>
#include <limits>

void displayGradeWithColor(int grade);

int main() {
    std::string userAnswer;
    int userAttempts = 0;

    std::cout << "\n";

    // Gives the user an option to check out grading scale

    while (userAttempts < 3) {
        std::cout << "Welcome to Grader. Do you want to see our Grading Scale? (Y/N): ";
        std::cin >> userAnswer;

        if (userAnswer != "Y" && userAnswer != "N" && userAnswer != "y" && userAnswer != "n") {
            std::cout << "Error: please choose 'Y' or 'N'\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            userAttempts++;
            continue;
        }

        if (userAnswer == "Y" || userAnswer == "y") {
            std::cout << "\n";
            std::cout << "\033[1;36m------------------------------\033[0m" << std::endl;
            std::cout << "\033[1;36m|\033[0m The current grade scale is \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m------------------------------\033[0m" << std::endl;
            std::cout << "\033[1;36m|\033[0m       90% - 100% = A       \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m|\033[0m       80% - 89% = B        \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m|\033[0m       70% - 79% = C        \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m|\033[0m       60% - 69% = D        \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m|\033[0m       0% - 59% = F         \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m------------------------------\033[0m" << std::endl;
            std::cout << "\n";
            break;
        }
        else if (userAnswer == "N" || userAnswer == "n") {
            std::cout << "You have chosen to skip looking at the grade scale\n";
            break;
        }

        userAttempts++;
    }

    if (userAttempts == 3) {
        std::cout << "\033[31mError: You have exceeded the maximum number of attempts!\033[0m\n\n";
        return 1;
    }

    userAttempts = 0;

    // Gives user an option to look at their current classes

    while (userAttempts < 3) {
        std::cout << "Would you like to check your current classes? (Y/N): ";
        std::cin >> userAnswer;

        if (userAnswer != "Y" && userAnswer != "y" && userAnswer != "N" && userAnswer != "n") {
            std::cout << "Error: please pick Y or N\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            userAttempts++;
            continue;
        }

        if (userAnswer == "Y" || userAnswer == "y") {
            std::cout << "\n";
            std::cout << "\033[1;36m-------------------\033[0m" << std::endl;
            std::cout << "\033[1;36m|\033[0m Current Classes \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m-------------------\033[0m" << std::endl;
            std::cout << "\033[1;36m|\033[0m   1) English    \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m|\033[0m   2) Math       \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m|\033[0m   3) Science    \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m|\033[0m   4) P.E.       \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m|\033[0m   5) History    \033[1;36m|\033[0m\n";
            std::cout << "\033[1;36m-------------------\033[0m" << std::endl;
            std::cout << "\n";
            break;
        }
        else if (userAnswer == "N" || userAnswer == "n") {
            std::cout << "You have chosen to skip looking at the classes\n";
            break;
        }

        userAttempts++;
    }

    if (userAttempts == 3) {
        std::cout << "\033[31mError: You have exceeded the maximum number of attempts!\033[0m\n\n";
        return 1;
    }

    userAttempts = 0;

    /* Asks user to check their current grades.
    if the user says "Y = YES" the program continues.
    if the user says "N = NO" the program stops, there isn't a point in progressing. It's a grade checker.*/

    while (userAttempts < 3) {
        std::cout << "Would you like to check your current grades? (Y/N): ";
        std::cin >> userAnswer;

        if (userAnswer != "Y" && userAnswer != "y" && userAnswer != "N" && userAnswer != "n") {
            std::cout << "Error: please choose 'Y' or 'N'\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            userAttempts++;
            continue;
        }

        if (userAnswer == "Y" || userAnswer == "y") {
            userAttempts = 0;
            int classChoice;
            std::cout << "\n";
            while (userAttempts < 3) {
                std::cout << "Pick the number beside the subject\n";
                std::cout << "Class Choice: ";

                if (!(std::cin >> classChoice)) {
                    std::cout << "Error: Choose a number that corresponds to the class you prefer.\n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    userAttempts++;
                    continue;
                }

                std::cout << "\n";

                switch (classChoice) {
                case 1:
                    std::cout << "Class Subject: English\n";
                    std::cout << "Current Grade: 100%\n";
                    break;

                case 2:
                    std::cout << "Class Subject: Math\n";
                    std::cout << "Current Grade: 95%\n";
                    break;

                case 3:
                    std::cout << "Class Subject: Science\n";
                    std::cout << "Current Grade: 98%\n";
                    break;

                case 4:
                    std::cout << "Class Subject: P.E.\n";
                    std::cout << "Current Grade: 85%\n";
                    break;

                case 5:
                    std::cout << "Class Subject: History\n";
                    std::cout << "Current Grade: 40%\n";
                    break;

                default:
                    std::cout << "Error: Invalid choice. Please choose from 1 to 5.\n";
                    continue;
                }

                displayGradeWithColor(classChoice);

                break;
            }


            if (userAttempts == 3) {
                std::cout << "\033[31mError: You have exceeded the maximum number of attempts!\033[0m\n";
                return 1;
            }
            break;
        }
        else if (userAnswer == "N" || userAnswer == "n") {
            std::cout << "Error: Cannot proceed without checking grades.\n";
            return 1;
        }

        userAttempts++;
    }

    if (userAttempts == 3) {
        std::cout << "\033[31mError: You have exceeded the maximum number of attempts!\033[0m\n\n";
        return 1;
    }

    std::cout << "\n";
    return 0;
}

void displayGradeWithColor(int grade) {
    if (grade >= 90 && grade <= 100) {
        std::cout << "\033[1;32mA\033[0m" << std::endl; // Color for grade letter A
        displayGradeWithColor(100);
    }
    else if (grade >= 80 && grade <= 89) {
        std::cout << "\033[1;33mB\033[0m" << std::endl; // Color for grade letter B

    }
    else if (grade >= 70 && grade <= 79) {
        std::cout << "\033[1;35mC\033[0m" << std::endl; // Color for grade letter C
    }
    else if (grade >= 60 && grade <= 69) {
        std::cout << "\033[1;31mD\033[0m" << std::endl; // color for grade letter D
    }
    else {
        std::cout << "\033[1;41mF\033[0m" << std::endl; // color for grade letter C
    }
}
