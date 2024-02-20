/**********************************************************************
 *  readme template                                                   
 *  DNA Sequence Alignment
 **********************************************************************/

Name: Dev Patel
Login: dev_patel@student.uml.edu
Precept:

(Partnering is optional. See the guidelines on the assignments page.)
Partner's name: N/A
Partner's login: N/A
Partner's precept: N/A

Hours to complete assignment (optional):

Which partner is submitting the program files?


/**********************************************************************
 *  Explain what you did to find the alignment itself.
 **********************************************************************/
I used the dynamic programming method using a matrix. I filled in the
matrix using the algorith. I found the alignment itself by 
going top-left to bottom right, moving from  matrix index to next lowest.
Depending on which direction it went, I either added a gap, or both letters 
and incremented counters.


/**********************************************************************
 * You are required to create one additional test case by hand. 
 * It should be constructed in such a way that you know the correct 
 * output before running your program on it, and it should be a 
 * "corner case" that helps check if your program handles all special 
 * situations correctly. Please list:
 * - a copy of the test case input
 * - the expected test case output
 * - whether your program ran correctly on it or not
 * - optionally, any other remarks
 **********************************************************************/
Input:atattataa
atattat

Expected output: 
a a 0
t t 0
a a 0
t t 0
t t 0
a a 0
t t 0
a - 2
a - 2

What happened:
a a 0
t t 0
a a 0
t t 0
t t 0
a a 0
t t 0
a - 2
a - 2

/**********************************************************************
 *  How much main memory does your computer have? Typical answers
 *  are 2GB and 4GB. If your machine has 512MB or less, use a cluster
 *  machine for this readme (see the checklist for instructions).
 **********************************************************************/
16GB, because I am not running on a VM. I am on ubuntu on WSL using VS Code. On my 
actually machine. 


/**********************************************************************
 *  For this question assume M=N. Look at your code and determine
 *  approximately how much memory it uses in bytes, as a function of 
 *  N. Give an answer of the form a * N^b for some constants a 
 *  and b, where b is an integer. Note chars are 2 bytes long, and 
 *  ints are 4 bytes long.
 *
 *  Provide a brief explanation.
 *
 *  What is the largest N that your program can handle if it is
 *  limited to 1GB (billion bytes) of memory?
 **********************************************************************/
a = 4
b = 2
largest N = 15800
4 is the size of an integer in bytes.  
/**********************************************************************
 *  For each data file, fill in the edit distance computed by your
 *  program and the amount of time it takes to compute it.
 *  For help on how to do timing, see the checklist (e.g. -Xprof).
 *  If you get an OutOfMemoryError, see the checklist about -Xmx.
 *  If you get "Could not reserve enough space for object heap" or the timing
 *  of these tests takes too long for the last few test cases (N=20000 or higher), 
 *   note this, and skip filling out those rows of the table.
 **********************************************************************/

data file           distance       time (seconds)
-------------------------------------------------
ecoli2500.txt       118             1.262209
ecoli5000.txt       160                3.45006
ecoli10000.txt      223                7.60361
ecoli20000.txt      3135               31.599  
ecoli50000.txt                          205.615  
ecoli100000.txt     took too long       ~300(did it once earlier in the day when I had more time)


/*************************************************************************
 *  Here are sample outputs from a run on a different machine for 
 *  comparison.
 ************************************************************************/

data file           distance       time (seconds)
-------------------------------------------------
ecoli2500.txt          118             0.171
ecoli5000.txt          160             0.529
ecoli7000.txt          194             0.990
ecoli10000.txt         223             1.972
ecoli20000.txt         3135            7.730

/**********************************************************************
 *  For this question assume M=N (which is true for the sample files 
 *  above). By applying the doubling method to the data points that you
 *  obtained, estimate the running time of your program in seconds as a 
 *  polynomial function a * N^b of N, where b is an integer.
 *  (If your data seems not to work, describe what went wrong and use 
 *  the sample data instead.)
 *
 *  Provide a brief justification/explanation of how you applied the
 *  doubling method.
 * 
 *  What is the largest N your program can handle if it is limited to 1
 *  day of computation? Assume you have as much main memory as you need.
 **********************************************************************/
a = 
b = 
largest N = 

/**********************************************************************
 *  If you worked with a partner, do you have any remarks on the pair
 *  programming method? E.g., how many times did you switch, what are
 *  the tradeoffs of driving vs. navigating, etc.
 **********************************************************************/
N/A


/**********************************************************************
 *  List whatever help (if any) you received from lab TAs, preceptors,
 *  classmates, past COS 126 students, or anyone else.
 **********************************************************************/



/**********************************************************************
 *  Describe any serious problems you encountered.                    
 **********************************************************************/



/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/

