#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#pragma pack(push, 1) // turn off padding of struc in c++
struct Person
{
    char name[50];
    int age;
    double height;
};
#pragma pack(pop)

class TextHandler
{
public:
    void TestOutputFile();
    void ReadingFile();
    void ParsingText();
    void WriteBinaryFile();
    void ReadBinaryFile();
private:
    ofstream OutFile;
    ifstream InFile;
    string line;
    string FileName = "Test.txt";
    string FileNameParsingText = "Text.txt";
    string BinaryFileName = "Binary.bin";
};