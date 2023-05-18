#include <iostream>
#include <fstream>
#include <string>
#include <vector>


class FReference
{
public:
    FReference() {};

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
    std::string Name;
    std::string Sequence;
};

struct FAlignResult {
    std::string ChrName;
    size_t Position;

    FAlignResult() : Position(0) {};
    FAlignResult(const std::string& InChrName, size_t InPosition)
            : ChrName(InChrName), Position(InPosition) {};
};

class FSuffixArray
{
public:

    void BuildSuffixArray()
    {
        // insert code here...
    }


    /**
     * Save a suffix array to file
     * @param InFilename Output filename.
     *
     * The format of .sa file is described in the homepage/README.md file.
     * Each line contains a single number that corresponds to an item in the SA.
     *
     */
    void Save(const char* InFilename)
    {
        // insert code here...
    }

    /**
     * Load a suffix array from file
     * @param InFilename Input filename
     *
     * TIP:
     * If the symbol '$' is used as an end-of-sequence mark,
     * the first line of SA file is the index of '$' within the sequence.
     * In that case, the index would be one less than the length of the array.
     */
    void Load(const char* InFilename)
    {
        // insert code here...
    }

public:
    FReference Reference;
    std::vector<uint32_t> SA;

public:

    void Align(const std::string& InName, const std::string& InQuery, std::vector<FAlignResult>& OutResult)
    {
        // insert code here...
    }

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
    std::cerr << "  " << InProgramName << " SuffixArray_File Reference_Fasta_File Read_File" << std::endl;
}

// salign <SAFileName> <RefFilename> <ReadFilename>
int main(int argc, char* argv[])
{
    if (argc < 4)
    {
        PrintUsage(GetFilename(argv[0]));
        return 1;
    }


    // insert code here...
    

    return 0;
}
