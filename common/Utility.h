//
// Utility.h
//

#include "Common.h"

namespace Utility
{
    std::vector<std::string> GetFileLines(const std::string &filename, unsigned int minLineLength);
    
    std::vector<std::string> PartitionString(const std::string &s, const std::string &separator);
    
    int StringToInt(const std::string &s);
    float StringToFloat(const std::string &s);
    std::vector<int> StringToIntegerList(const std::string &s, const std::string &prefix);
    std::vector<float> StringToFloatList(const std::string &s, const std::string &prefix);

    void ExecuteCommand(const char *command);
    GLuint MakeOpenGLBitmap(const std::string &filename);
};