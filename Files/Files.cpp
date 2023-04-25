#include "Files.hpp"

/**
 * @brief Function to write .txt file
 * 
 */
void TextHandler::TestOutputFile() 
{
    OutFile.open(FileName);

    if (OutFile.is_open())
    {
        OutFile << "Hello Huyyuh" << endl;
        OutFile << 123 << endl;
        OutFile.close();
    }
    else
    {
        cout << "Cannot open file:" << FileName << endl;
    }
}

/**
 * @brief Function to read .txt file
 * 
 */
void TextHandler::ReadingFile()
{
    InFile.open(FileName);

    if (InFile.is_open())
    {
        while (InFile)
        {
            getline(InFile, line);
            cout << line << endl;
        }

        InFile.close();
    }
    else
    {
        cout << "Cannot open file: " << FileName << endl;
    }
}

/**
 * @brief Function to parsing text (in order)
 * 
 */
void TextHandler::ParsingText()
{
    InFile.open(FileNameParsingText);

    if (InFile.is_open())
    {
        string Line;

        while (InFile)
        {
            getline(InFile, Line, ',');
            
            if (!InFile)
            {
                break;
            }
            else
            {
                int age;
                int date;
                int month;
                int year;
                int number;
                char dummy;
                InFile >> age >> dummy >> date >> dummy >> month >> dummy >> year; // char dummy to pickup "/", ...
                cout << Line << "'"<< age << "'" << date << "'" << month << "'" << year << "'"  << endl;
                InFile.get(); // Place before reading newline to pickup "\n"
            }
        }

        InFile.close();
    }
    else
    {
        cout << "Cannot open file: " << FileNameParsingText <<endl;
    }
}

/**
 * @brief Function to write binary file.
 *        Using std::istream::write() - passing char *
 * @ref   https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
 */
void TextHandler::WriteBinaryFile()
{
    Person Huy = {"Nguyen Gia Huy", 23, 175};

    OutFile.open(BinaryFileName, ios::binary);

    if (OutFile.is_open())
    {
        OutFile.write(reinterpret_cast<char *>(&Huy), sizeof(Person));

        OutFile.close();
    }
    else
    {
        cout << "Cannot open file: " << BinaryFileName << endl;
    }
}

/**
 * @brief  Function to read binary file.
 *         Using std::istream::read() - passing char *
 * @ref    https://cplusplus.com/reference/istream/istream/read/
 */
void TextHandler::ReadBinaryFile()
{
    Person Someone = {};

    InFile.open(BinaryFileName, ios::binary);

    if (InFile.is_open())
    {
        InFile.read(reinterpret_cast<char *>(&Someone), sizeof(Person));

        InFile.close();
    }
    else
    {
        cout << "Cannot open file: " << BinaryFileName << endl;
    }

    cout << Someone.name << "'" << Someone.age << "'" << Someone.height << endl;
}