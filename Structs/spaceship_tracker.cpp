// Task: Create table of spaceships, write a program that continuously updates their positions until they disappear from the screen. Assume that the screen is 1024 by 768 pixels.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random_number_in_range(int range_min, int range_max)
{
    return range_min + std::rand() % (range_max - range_min + 1);
}

struct spaceship
{
    int x, y;
    int dx, dy;
    bool is_Visible = true;
};

int main()
{
    srand(time(NULL));
    bool ships_on_screen = true;
    spaceship spaceships_on_screen[10];
    int turns = 0;
    // Generate table with spaceship data
    for (size_t i = 0; i < 10; i++)
    {
        spaceships_on_screen[i].x = random_number_in_range(0, 1024);
        spaceships_on_screen[i].y = random_number_in_range(0, 768);
        spaceships_on_screen[i].dx = random_number_in_range(-10, 10);
        spaceships_on_screen[i].dy = random_number_in_range(-10, 10);
    }

    // Do space ship movement
    do
    {
        turns++;
        // Assume that all ships are beyond screen
        ships_on_screen = false;

        for (size_t i = 0; i < 10; i++)
        {
            if (spaceships_on_screen[i].is_Visible)
            {
                spaceships_on_screen[i].x += spaceships_on_screen[i].dx;
                spaceships_on_screen[i].y += spaceships_on_screen[i].dy;

                if (spaceships_on_screen[i].x < 0 || spaceships_on_screen[i].x >= 1024 ||
                    spaceships_on_screen[i].y < 0 || spaceships_on_screen[i].y >= 768)
                {
                    spaceships_on_screen[i].is_Visible = false;
                }
                else
                {
                    ships_on_screen = true; // If at least one ships in for loop is on screen, keep running the loop.
                }
            }
        }

    } while (ships_on_screen);

    std::cout << "All ships left screen space in: " << turns << " turns." << endl;

    return 0;
}
