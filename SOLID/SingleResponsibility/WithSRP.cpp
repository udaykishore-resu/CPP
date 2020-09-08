#include<iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;


class Journal {
    string          m_title;
    vector<string>  m_entries;

public:
    explicit Journal(const string &title) : m_title{title} {}
    void add_entries(const string &entry) {
        static uint32_t count = 1;
        m_entries.push_back(to_string(count++) + ": " + entry);
    }
    vector<string> get_entries() const { return m_entries; }
};

class SavingManager{
public:
static void save(const Journal &obj, const string &filename){
ofstream ofs(filename);
for(auto &s:obj.get_entries()){
ofs<<s<<endl;
}
}
};
int  main() {
    Journal journal{"Udaykishore"};
    journal.add_entries("I am learning Solid principles");
    journal.add_entries("started with Single Responsibility principle");
    SavingManager::save(journal,"WithSRP.txt");
    return 0;
}
