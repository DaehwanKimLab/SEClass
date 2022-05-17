# Software Engineering Course
# Week #4: C++ programming
 
Instructor: Daehwan Kim (Daehwan.Kim@UTSouthwestern.edu)

Teaching assistants: Chanhee Park (Chanhee.Park@UTSouthwestern.edu) and Micah Thornton (Micah.Thornton@UTSouthwestern.edu).

The class meets at 9am from May 23rd (Day 1) through May 27th (Day 5) in ND11.218.

Office hours will be 2 - 4pm on each of Days 1-5 in E4.350.


This course provides hands-on practice with C++ programming for implementing DNA sequence alignment. You will design and implement memory-efficient data structures and rapid algorithms for suffix arrays, Burrows-Wheeler transforms (BWT), and Ferragina-Manzini (FM) indexes. As in the previous weeks, it is important for you to write code in a modular and easy-to-maintain fashion. You are encouraged to provide documentation in the form of comments along with your code so that other future developers can understand and extend it further. You will be expected to write code so that your code will live forever.


Prerequisites: 
- Familiarity with C++ features such as array, pointer, and class
- Understanding of concepts in Object-oriented programming
- Knowledge of basic algorithm techniques such as binary search and sorting

We will provide relevant articles and slides that you can read on your own in order to carry out programming assignments as described in the daily course schedule below:

## Day 1
From 9 to 10am, we will provide a brief introduction to sequence alignment, suffix arrays, and a C++ coding environment. For the rest of the day, you will implement suffix arrays (SA) for two genomic sequences: a small 100-bp sequence and a large 51 million-bp long sequence (human chromosome 22).
Optional: you can implement suffix trees.
 
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
The performance standards for you to achieve in producing your algorithms include lean memory usage and high speed. Please document your memory usage and runtime information. The output formats for your programs are described [below](#output-formats). You will be asked to review one of your classmates’ code implementations, with the code to review assigned by the course instructors. Your review summary should not be more than 200 words.

All assignments are to be done individually, but discussion with classmates regarding general solution strategies is allowed.

## Grade
This C++ course will constitute 20% of the final grade or 20 points as follows:
 
|  | Day 1: SA implementation | Day 2: SA-based alignment implementation | Day 3: BWT implementation | Day 4: BWT-based alignment implementation | Day 5: FM index implementation |
| ----------- | ----------- | ----------- | ----------- | ----------- | ----------- |
| Correctness | 2 | 2 | 2 | 2 | 3 |
| Memory efficiency and runtime | 1 | 1 | 1 | 1 | 1 |
| Code Review | 0 | 1 | 1 | 1 | 1 |

 
The deadline for submitting a programming assignment for Day 1 is Day 2 at 9am. As such, the deadlines for submitting programming assignments for Day 2, Day 3, Day 4, and Day 5 are Day 3 at 9am, Day 4 at 9am, Day 5 at 9am, and Day 5 at 10pm.

The deadlines for submitting code review assignments for Day 2, Day 3, Day 4, and Day 5 are Day 3 at 9am, Day 4 at 9am, Day 5 at 9am, and Day 5 at 10pm.

## Output Formats
The output file formats are described as follows (to be filled by Micah).

For each day we will assess the correctness of the output of the code.  Please produce codes which write 
the results of the computation to a file on disk according to each of the following: 

| | Input Format Description | Input Format Example | Output Format Description | Output Format Example | 
| ----------- | ---------- | ----------- | ----------- | -------- | 
| Day 1: SA Impl. | Input .fa file, single sequence multi-line, > for header | | A list of integers in txt format (label .sa) | |
| Day 2: SA Search | Input .fa reference file (or input .sa from Day 1), and query fasta file (labeled .qfa) | | A tab-delimited file where each row contains query name and alignment location, multiple rows for the same query matching multiple locations. | |
| Day 3: BWT Impl. | Input .fa reference file, input suffix array .sa | | text file containing burrows-wheeler transform text (with or without extra character) named *.bwt | |
| Day 4: BWT Search | Input .bwt, input .sa | | A tab-delimited file where each row contains query name and alignment location, multiple rows for the same query matching multiple locations. | | 
| Day 5: FM/Search Impl | | | | |
