#include <iostream>
#include <Windows.h>

std::string getActiveWindowTitle()
{
    // Retrieves the title of the currently active window.

    char title[256];
    HWND foregroundWindow = GetForegroundWindow();
    GetWindowText(foregroundWindow, title, sizeof(title));
    return std::string(title);
}

int main()
{
    // Main function that tracks the amount of time spent on active apps.

    std::string activeApp = "";
    DWORD startTime = GetTickCount();

    while (true)
    {
        Sleep(1000); // Adjust the interval as per your requirement

        std::string currentApp = getActiveWindowTitle();
        if (currentApp != activeApp)
        {
            if (!activeApp.empty())
            {
                DWORD endTime = GetTickCount();
                double elapsedTime = (endTime - startTime) / 1000.0; // Convert to seconds
                std::cout << "Application: " << activeApp << " - Time Spent: " << elapsedTime << " seconds" << std::endl;
                // Store the data in a suitable format
            }

            activeApp = currentApp;
            startTime = GetTickCount();
        }
    }

    return 0;
}
