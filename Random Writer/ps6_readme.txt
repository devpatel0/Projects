/**********************************************************************
 *  readme.txt template                                                   
 *  Random Writer 
 **********************************************************************/

Name: Dev Patel

Hours to complete assignment: ~10hours
/**********************************************************************
 *  Briefly discuss the assignment itself and what you accomplished.
 **********************************************************************/
I produced a probabilistic model of given text: given a particular k-gram series of letters, what letters
follow at what probabilities.



  /**********************************************************************
 *  Discuss one or more key algorithms, data structures, or 
 *  OO designs that were central to the assignment.
 **********************************************************************/
Maps were central to my assignment, because thats what we used to store the strings
and the frequencys.




/**********************************************************************
 *  Briefly explain the workings of the features you implemented.
 *  Include code excerpts.
 **********************************************************************/
One feature I implemented was a error check for the command line.
if (argc != 3) {
    std::cout << "To Use ./TextWriter (K) (L) //  L ≥ k\n";
    return 0;
  }


/**********************************************************************
 *  Did you complete the whole assignment?
 *  Successfully or not? 
 *  Indicate which parts you think are working, and describe
 *    how you know that they're working.
 **********************************************************************/
Yes I did complete the whole assignment succesfully.
I pass all the the units so it looks like my code works,
when I run it get desirable results. 
An example of something I ran:
 ./TextWriter 2 11 <  words.txt
Original Text:

NULL THE AD

After Code:

NULL Tom th

/**********************************************************************
 *  Does your implementation pass the unit tests?
 *  Indicate yes or no, and explain how you know that it does or does not.
 **********************************************************************/
Yes my implementation pass the unit tests. I know because when I run it with my test.cpp
instead of my TextWriter.cpp all tests pass with error.



 /**********************************************************************
 *  Describe where you used exceptions. 
 *  Provide files and lines of the code.
 ***********************************************************************/
For example in freq throw an exception if kgram is not of
length k.
 if (kgram.size() != (unsigned)inLine)
    throw std::runtime_error("kgram is not size k");




 /**********************************************************************
 *  Describe where you used lambda expression if any
 *  Provide files and lines of the code.
 ***********************************************************************/
hahahahaahah no
/**********************************************************************
 *  Did you implemented program for extra poits? If yes, describe your 
 *  If yes, describe your implementation.
 ***********************************************************************/
no english


/**********************************************************************
 *  List whatever help (if any) you received from lab TAs,
 *  classmates, or anyone else.
 **********************************************************************/



/**********************************************************************
 *  Describe any serious problems you encountered.                    
 **********************************************************************/



/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/
