#include <iostream>

double getTowerHeight();
double calculateDistanceFallen(double time, double initialVelocity);
double calculateBallHeight(double height, double distanceFallen);
void printBallHeight(double ballHeight, double time);
void calculateAndPrintBallHeight(double height, double time);

int main()
{
    double towerHeight{getTowerHeight()};

    calculateAndPrintBallHeight(towerHeight, 0);
    calculateAndPrintBallHeight(towerHeight, 1);
    calculateAndPrintBallHeight(towerHeight, 2);
    calculateAndPrintBallHeight(towerHeight, 3);
    calculateAndPrintBallHeight(towerHeight, 4);
    calculateAndPrintBallHeight(towerHeight, 5);

    return 0;
}

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double input{};
    std::cin >> input;
    return input;
}

double calculateDistanceFallen(double time, double initialVelocity)
{
    double gravity{9.8};
    // S = Vi.t + (1/2).g.t2
    return initialVelocity * time + (1.0 / 2.0) * gravity * time * time;
}

double calculateBallHeight(double height, double distanceFallen)
{
    double ballHeight{height - distanceFallen};

    // Check if ball height is negative than return 0.
    if (ballHeight < 0.0)
        return 0.0;

    return ballHeight;
}

void printBallHeight(double ballHeight, double time)
{
    if (ballHeight > 0.0)
        std::cout << "At " << time << " seconds, the ball is at height: "
                  << ballHeight << " meters.\n";
    else
        std::cout << "At " << time << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintBallHeight(double height, double time)
{
    double ballHeight{calculateBallHeight(height,
                                          calculateDistanceFallen(time, 0))};
    printBallHeight(ballHeight, time);
}
