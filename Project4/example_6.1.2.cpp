#include <iostream>

using namespace std;

void convert_temp(double *C)
{
    *C = (*C * 1,8) + 32;
}

int main()
{      
    while (1)
    {
        double temperature = 0;
        cout << "Enter (0 to exit) a temperature Celsius: ";
        cin >> temperature;
        if (temperature == 0)
            break;
        convert_temp(&temperature);
        cout << "Temperature Farenheit: " << temperature << endl;
    }
    return 0;
}
