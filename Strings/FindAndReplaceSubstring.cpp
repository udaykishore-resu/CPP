#include <iostream>
#include <string>
void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
    // Get the first occurrence
    size_t pos = data.find(toSearch);
    // Repeat till end is reached
    while( pos != std::string::npos)
    {
        // Replace this occurrence of Sub String
        data.replace(pos, toSearch.size(), replaceStr);
        // Get the next occurrence from the current position
        pos =data.find(toSearch, pos + replaceStr.size());
    }
}
int main()
{
    std::string data = "My Name is Uday";
    std::cout<<data<<std::endl;
    findAndReplaceAll(data, "Uday", "Nani");
    std::cout<<data<<std::endl;
    return 0;
}
