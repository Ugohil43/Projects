#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

char *forms[2] = {"ball", "cube"};
char *colors[4] = {"red", "blue", "orange", "green"};
int items_drawn[8];
int items_remaining = 8;

int rand_0toN1(int n)
{
    return rand() % n;
}

int select_next_available(int n)
{
    int i = -1;
    n++;

    while (n-- > 0)
    {
        i++;
        while (items_drawn[i])
            i++;  
    }
    items_drawn[i] = true;
    return i;
}

void draw_item()
{
    if (items_remaining == 0)
    {
        cout << "Reshuffling." << endl;
        items_remaining = 8;
        for (int i = 0; i < 8; i++)
        {
            items_drawn[i] = false;
        }
    }
    int f, c, n, item;
    n = rand_0toN1(items_remaining--);
    item = select_next_available(n);
    c = item % 4;
    f = item / 4;
    cout << colors[c] << " " << forms[f] << endl;
}

int main()
{
    int n;
    srand(time(NULL));
    while (1)
    {
        cout << "Enter no. of items to draw (0 to exit): ";
        cin >> n;
        if (n == 0)
            break;
        for (int i = 1; i <= n; i++)
        {
            draw_item();
        }
    }
    return 0;
}

