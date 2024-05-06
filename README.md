# Software Engineering Workshop 2024
# Week #1: C++ programming
 
Instructor: Daehwan Kim (Daehwan.Kim@UTSouthwestern.edu)

Teaching assistant: Chanhee Park (Chanhee.Park@UTSouthwestern.edu)

The class meets at 9am from May 6th (Day 1) through May 10th (Day 5) in the following rooms.

| Day | Classroom |
| ----------- | ---------- | 
| May 6th (Day 1) | ND5.218 | 
| May 7th (Day 2) | NL3.120 | 
| May 8th (Day 3) | To be determined | 
| May 9th (Day 4) | NL3.120 | 
| May 10th (Day 5) | ND5.218 | 

Office hours will be 2 - 4pm on each of Days 1-5 in J9.120A.


This course provides hands-on practice with C++ programming for implementing DNA sequence alignment. You will design and implement memory-efficient data structures and rapid algorithms for suffix arrays, Burrows-Wheeler transforms (BWT), and Ferragina-Manzini (FM) indexes. It is important for you to write code in a modular and easy-to-maintain fashion. You are encouraged to provide documentation in the form of comments along with your code so that other future developers can understand and extend it further. You will be expected to write code so that your code will live forever.


Prerequisites: 
- Familiarity with C++ features such as array, pointer, and class
- Understanding of concepts in Object-oriented programming
- Knowledge of basic algorithm techniques such as binary search and sorting

We will provide relevant articles and slides that you can read on your own in order to carry out programming assignments as described in the daily course schedule below:

## Day 1
From 9 to 10am, we will provide a brief introduction to sequence alignment, suffix arrays, and a C++ coding environment. For the rest of the day, you will implement suffix arrays (SA) for two genomic sequences: a small 100-bp sequence and a large 51 million-bp long sequence (human chromosome 22). As this session marks the commencement of the programming course, there
will also be a concise introduction to the practice of code commenting.
Optional: you can implement suffix trees
 
## Day 2
From 9 to 10am, we will provide a brief introduction to sequence alignment and have a Q&A session. For the rest of the day, you will implement an alignment algorithm using the suffix array. We will provide input sequencing reads and true output alignment, which you can use to test your alignment algorithm in terms of alignment accuracy and speed. You can also implement test cases and use assertions so that you can effectively identify and fix bugs in your code.
Optional: you can implement a suffix array and an alignment algorithm for the human reference genome (about 3 billion bases) that can be used on your computer.
 
## Day 3
From 9 to 10am, we will introduce Burrows-Wheeler transforms (BWT) and have a Q&A session. For the rest of the day, you will implement BWT for two genomic sequences: a small 100-bp sequence and a large 51 million-bp long sequence (human chromosome 22).
Optional: you can implement a BWT for the human reference genome.
 
## Day 4
From 9 to 10am, we will cover sequence alignment and have a Q&A session. For the rest of the day, you will implement an alignment algorithm using BWTs for two genomic sequences: a small 100-bp sequence and a large 51 million-bp long sequence (human chromosome 22).
Optional: you can implement an alignment algorithm using a BWT for the human reference genome.
 
## Day 5
From 9 to 10am, we will provide a brief introduction to Ferragina-Manzini (FM) indexing and have a Q&A session. For the rest of the day, you will implement FM indexes and an alignment algorithm using FM indexes for two genomic sequences: a small 100-bp sequence and a large 51 million-bp long sequence (human chromosome 22).
Optional: you can make this FM index and alignment work for the human reference genome.
 
## Days 1 through 5
The performance standards for you to achieve in producing your algorithms include lean memory usage and high speed. Please document your memory usage and runtime information. The output formats for your programs are described [below](#output-formats). You will be asked to review one of your classmates’ code implementations, with the code to review assigned by the course instructors. Your review summary should not be more than 300 words.

All assignments are to be done individually, but discussion with classmates regarding general solution strategies is allowed.

## Grade
This C++ course will constitute 20% of the final grade or 20 points as follows:
 
|  | Day 1: SA implementation | Day 2: SA-based alignment implementation | Day 3: BWT implementation | Day 4: BWT-based alignment implementation | Day 5: FM index implementation |
| ----------- | ----------- | ----------- | ----------- | ----------- | ----------- |
| Correctness | 2 | 2 | 2 | 2 | 3 |
| Memory efficiency and runtime | 1 | 1 | 1 | 1 | 1 |
| Code Review | 0 | 1 | 1 | 1 | 1 |


The deadline for submitting the programming assignment, except for the Day5 assignment, is the next day at 9 a.m. The submission deadline for the Day 5 assignment is 10 p.m. on Day 5.  
There is no code review assignment for Day1.


## Output Formats
The output file formats are described as follows.

For each day we will assess the correctness of the output of the code.  Please produce codes which write 
the results of the computation to a file on disk according to each of the following: 

| | Input Format Description | Input Format Example | Output Format Description | Output Format Example | Command Example | 
| ----------- | ---------- | ----------- | ----------- | -------- | -------- | 
| Day 1: SA Impl. | Input .fa file, single sequence multi-line, > for header | [sample\_ref.fa](/Example_Files/sample_ref.fa) | A list of integers in txt format (label .sa) | [sample\_ref.sa](/Example_Files/sample_ref.sa) | _<your_program_name>_ sample\_ref.fa sample\_ref.sa |
| Day 2: SA Search | Input .fa reference file, input .sa from Day 1, and Multi-line query fasta file (labeled .fa) | [sample\_ref.fa](/Example_Files/sample_ref.fa), [sample\_ref.sa](/Example_Files/sample_ref.sa), and [sample\_reads.fa](/Example_Files/sample_reads.fa)| A tab-delimited file where each row contains query name and alignment location, multiple rows for the same query matching multiple locations. The order of the query names in the alignment file must be the same as the input. No entries for queries that don't align | [sample.aln](/Example_Files/sample.aln) | _<your_program_name>_ sample\_ref.sa sample\_ref.fa sample\_reads.fa > sample.aln |
| Day 3: BWT Impl. | Input .fa reference file, input suffix array .sa | [sample\_ref.fa](/Example_Files/sample_ref.fa) and [sample\_ref.sa](/Example_Files/sample_ref.sa) | text file containing burrows-wheeler transform text (with or without extra character) named .bwt | [sample.bwt](/Example_Files/sample.bwt) | _<your_program_name>_ sample\_ref.fa sample\_ref.sa > sample.bwt |
| Day 4: BWT Search | Input .bwt, input .sa, and queries file (.fa) | [sample.bwt](/Example_Files/sample.bwt) and [sample\_ref.sa](/Example_Files/sample_ref.sa) and [sample\_reads.fa](/Example_Files/sample_reads.fa) | A tab-delimited file where each row contains query name and alignment location, multiple rows for the same query matching multiple locations. |[sample.aln](/Example_Files/sample.aln)  | _<your_program_name>_ sample.bwt sample\_ref.sa sample\_reads.fa > sample.aln |
| Day 5 part 1: FM Index Impl. | Input .bwt, input .sa | [sample.bwt](/Example_Files/sample.bwt) and [sample\_ref.sa](/Example_Files/sample_ref.sa) and commandline options for (1) number of rows to skip in checkpointed tally matrix and (2) number of values to skip when subsampling suffix array | An FM Index file, with FM-Index components seperated by > and appropriate headers as shown in the example output. | [sample.fm](/Example_Files/sample.fm)| _<your_program_name>_ sample.bwt sample.sa -c 2 -ss 3  > sample.fm |
| Day 5 part 2: FM Index Search | input .fm, input .fa | [sample.fm](/Example_Files/sample.fm) and [sample\_reads.fa](Example_Files/sample_reads.fa) | a tab-delimited file where each row contains query name and alignment location, multiple rows for the same query matching multiple locations | [sample.aln](/Example_Files/sample.aln) | _<your_program_name>_ -s sample\_ref.fa -b sample.bwt -f sample.fm |


## Datasets
Each dataset contains a reference sequence, reads, and a position of read in the reference. Student may use the Human Reference Genome to do optional assignment. When you test your program with chr22_reads.fa and genome_reads.fa, you can use a subset of reads, for example, first 1000 reads. But when you test a peformance of your program, we recommend to use whole reads.  

- Small  
   - Reference: 100bp sequence [small.fa]
   - Reads: 10 10bp reads [small_reads.fa]
   - Read positions: [small.aln]
- Human Chromosome 22
   - Reference: [chr22.fa]
   - Reads: 1Million 100bp reads [chr22_reads.fa]
   - Read positions: [chr22.aln] 
- Human Reference Genome
   - Reference: [genome.fa]
   - Reads: 1Million 100bp reads [genome_reads.fa]
   - Read positions: [genome.aln]


[small.fa]:        /Example_Files/small.fa
[small_reads.fa]:  /Example_Files/small_reads.fa
[small.aln]:       /Example_Files/small.aln
[chr22.fa]:        https://lamella.biohpc.swmed.edu/index.php/s/WnSmGjHbq94cFqb/download/chr22.fa
[chr22_reads.fa]:  https://lamella.biohpc.swmed.edu/index.php/s/KQKGHxMQM4JJysR/download/chr22_reads.fa
[chr22.aln]:       https://lamella.biohpc.swmed.edu/index.php/s/KFCswFZKFB7nrWG/download/chr22.aln
[genome.fa]:       https://lamella.biohpc.swmed.edu/index.php/s/sP98sySjxbyKfq8/download/genome.fa
[genome_reads.fa]: https://lamella.biohpc.swmed.edu/index.php/s/pSXHYHZDHotkncz/download/genome_reads.fa
[genome.aln]:      https://lamella.biohpc.swmed.edu/index.php/s/dxHbT7TgaaggBMq/download/genome.aln

## Setting up environments
We recommend using a laptop/desktop rather than the biohpc client.

### Linux

1. Install gcc/g++ compiler
   - Ubuntu
   ```sh
   sudo apt install build-essential
   ```
   - CentOS
   ```sh
   sudo yum group install "Development Tools"
   ```
   
1. Download CLion package. This package includes an evaluation license key for a free 30-day trial.  
   CLion - [Download](https://download.jetbrains.com/cpp/CLion-2023.1.3.tar.gz)  
1. Unpack the package
   ```sh
   tar zxvf CLion-2023.1.3.tar.gz
   ```
1. Run CLion.sh from the bin subdirectory
1. Open your project directory (`Day1`, `Day2`, ...)


----
### Windows
Visual Studio 2022 Community - [Download](https://c2rsetup.officeapps.live.com/c2r/downloadVS.aspx?sku=community&channel=Release&version=VS2022&source=VSLandingPage&includeRecommended=true&cid=2030)
1. Open a solution file in the project directory(`Day1.sln`, `Day2.sln`, ...)


----
### MacOS
Xcode - [Download](https://apps.apple.com/us/app/xcode/id497799835?mt=12)
1. Open a xcode project in the project directory(`Day1.xcodeproj`, `Day2.xcodeproj`, ...)
