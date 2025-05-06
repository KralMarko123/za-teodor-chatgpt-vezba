#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <ctime>
#include <fstream>

class Logger
{
	public:

        void LogToFile(std::string messageToLog) {

            time_t timestamp;
            time(&timestamp);

            std::string dateTime = ctime(&timestamp);
            // Erase newline character appended by ctime
            dateTime.erase(dateTime.length() - 1);

            std::string filePath = "Logfile.txt";
            std::ofstream openFileStream(filePath.c_str(), std::ios_base::out | std::ios_base::app);
            openFileStream << "[" + dateTime + "]" + '\t' << messageToLog << '\n';
            openFileStream.close();
        }
};

