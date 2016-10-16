/* Koder pro zabezpeceni souboru */
/* Autor: Jindrich Dudek, xdudek04 */
/* Predmet: BMS, 2016 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void print_error(const string& error)
{
    cout << "ERROR: " << error << endl;
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        print_error("Wrong number of arguments. Expected one argument.");
        return EXIT_FAILURE;
    }

    ifstream file(argv[1], ios::binary);
    if (!file.is_open())
    {
        print_error("Unable to open input file.");
        return EXIT_FAILURE;
    }

    file.close();
    return EXIT_SUCCESS;
}