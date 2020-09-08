#include<iostream>
#include<string>
#include<vector>
#include<fstream>
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
    void save(const string &filename) {
        ofstream ofs(filename); 
        for (auto &s : m_entries) ofs << s << endl;
    }
};

int  main() {
    Journal journal{"Udaykishore"};
    journal.add_entries("I am learning Solid Principles");
    journal.add_entries("started leaning Single Responsibility Principle");
    journal.save("Without.txt");
    return 0;
}
