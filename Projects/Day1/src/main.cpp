/**
 *
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


// TODO: support multiple chromosome
class FReference 
{
public:
    // Default constructor
    FReference() {};

    // Constructor with fasta filename
    FReference(const std::string& InFilename) {
        LoadFromFasta(InFilename);
    }

    void LoadFromString(const std::string& InSequence)
    {
        Sequence = InSequence;
        if (Sequence.back() != '$') {
            Sequence.push_back('$');
        }
    }
    
    void LoadFromFasta(const std::string& InFilename)
    {
        std::ifstream fs(InFilename);
        if (!fs) {
            std::cerr << "Can't open file: " << InFilename << std::endl;
            return;
        }

        std::string buf;

        Sequence.clear();

        while(getline(fs, buf)) {
            if (buf.length() == 0) {
                // skip empty line
                continue;
            }

            if (buf[0] == '>') {
                // header line
                // TODO: save chromosome name
                continue;
            }

            Sequence.append(buf);
        }

        // append '$' as End of Sequence mark
        Sequence.append("$");
    }

public:
    std::string Sequence;

};


/* 
 * Return filename from full path of file.
 *
 * InFilename   [In] Full path of file
 *
 * Return
 *   base filename
 *
 */
static std::string GetFilename(const std::string& InFilename)
{
    const size_t pos = InFilename.find_last_of("/\\");
    if (pos == std::string::npos) {
        return InFilename;
    }

    return InFilename.substr(pos + 1);
}

void PrintUsage(const std::string& InProgramName)
{
    std::cerr << "Invalid Parameters" << std::endl;
    std::cerr << "  " << InProgramName << " Reference_Fasta_File SuffixArray_File" << std::endl;
}

/**
 * 
 *
 */
int main(int argc, char* argv[])
{
    // sa InReferenceFastaFile OutSuffixArrayFile
    if (argc < 3) {
        PrintUsage(GetFilename(argv[0]));
        return 1;
    }


    // Load reference from fasta file
    {
        FReference ref(argv[1]); // load fasta file

        std::cout << "Reference sequence length: " << ref.Sequence.length() << std::endl;
        // print first 100bp
        std::cout << ref.Sequence.substr(0, 100) << std::endl;
    }

    // Load reference from string
    {
        FReference ref2;
        ref2.LoadFromString("AACCGTA");

        std::cout << "Reference2 sequence length: " << ref2.Sequence.length() << std::endl;

        // print first 100bp
        std::cout << ref2.Sequence.substr(0, 100) << std::endl;
    }

    return 0;
}
