#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#include "DirectTable.h"
#include "SymbTable.h"


class TokensTable
{
    private:
    public:
        static std::vector<std::string> elements;
        static std::vector<int> elementsLine;
        static std::vector<std::string> elementsClass;
        static std::map<std::string, int> dataSection;
        static std::map<std::string, int> textSection;
        static SymbTable symbTable;
        static void insert_token(std::string element, int elementLine, std::string elementClass);
        static void print_elements();
        static void classify_tokens();
        static bool is_label_sep(std::string element);
        static bool is_argument_sep(std::string element);
        static bool is_operation(std::string element);
        static bool is_argument(std::string element);
        static bool is_symbol(std::string element);
        static bool is_section_mark(std::string element);
        static bool is_in_text_section(int index);
        static void search_for_sections();
        static void fill_symb_table();
};