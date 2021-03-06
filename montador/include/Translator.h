#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <locale>

#include "Scanner.h"
#include "Parser.h"
#include "FileToMount.h"

class Translator 
{
    private:
        std::string programName;
        std::ifstream inputFile;
        std::ofstream outputFile;
        std::vector<std::string> orgLines;
        Scanner scanner;
        Parser parser;
        std::string commentMark = ";";
        std::string extensionMark = ".";
        std::string outputExt = ".obj";
        bool isModule = false;

    public:
        Translator(std::string programName);
        ~Translator();
        void mount_elements_array();
        void first_pass();
        void second_pass();
        void write_output(std::string outputFile);
        std::string get_programName();
        void set_programName(std::string fileName);
        void read_file(bool showLines=false);
        void read_file(std::string fileName, bool showLines=false);
        int get_n_linesRead();
        void classify_elements();
        void verify_syntactic_errors();
        void mount_output();
        std::string remove_mult_spaces(std::string line);
        std::string remove_comments(std::string line);
        std::string convert_to_uppercase(std::string line);
        std::string remove_ending_spaces(std::string line);
        std::string remove_starting_spaces(std::string line);
        std::string convert_tabs_to_spaces(std::string line);
        std::string remove_return_and_linefeed(std::string line);
        void set_is_module(bool _isModule);
        void reset_processing();
        FileToMount get_FileToMount();
        };