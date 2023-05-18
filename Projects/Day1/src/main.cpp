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

        // append '$' as end-of-sequence mark
        Sequence.append("$");
    }

public:
    std::string Name;
    std::string Sequence;
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


void test_1(const char* InFilename)
{
    FReference ref(InFilename);

    std::cout << "Reference sequence length: " << ref.Sequence.length() << std::endl;
    // print first 100bp
    std::cout << ref.Sequence.substr(0, 100) << std::endl;
}

void test_2()
{
    FReference ref2;
    ref2.LoadFromString("AACCGTA");

    std::cout << "Reference2 sequence length: " << ref2.Sequence.length() << std::endl;

    // print first 100bp
    std::cout << ref2.Sequence.substr(0, 100) << std::endl;
}

void test_3(const char* InRefFilename, const char* InSAFilename)
{
    FSuffixArray SA;

    SA.Reference.LoadFromFasta(InRefFilename);

    SA.BuildSuffixArray();

    SA.Save(InSAFilename);
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

    test_1(argv[1]);

    test_2();

    test_3(argv[1], argv[2]);

    return 0;
}
