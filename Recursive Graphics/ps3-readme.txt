/**********************************************************************
 *  ps3-readme 
 *  Recursive Graphics (Triangle Fractal)                       
 **********************************************************************/

Your name: Dev Patel

Hours to complete assignment: ~6 hours

/**********************************************************************
 *  Briefly discuss the assignment itself and what you accomplished.
 **********************************************************************/
To draw this serpinski triangle I set all my original points for each 
verticy of the triangle in my draw function. I then create a constructor
to find the orginal points of the triangle given the center of the screen.
Next, in my recrursive ftree() function I call my object and pass in the given
length by command line and the center and draw. I then call fTree() within fTree()
to get the position of the 3 new new points of each triangle given their
new centers in referece to the triangle.
 /**********************************************************************
 *  Discuss one or more key algorithms, data structures, or 
 *  OO designs that were central to the assignment.
 **********************************************************************/
One key data structure I used is Vector2f, to maniplute the x and y
positions of the centers of my triangles and triangle's verticy. 


/**********************************************************************
 *  Briefly explain the workings of the features you implemented.
 *  Include code excerpts.
 **********************************************************************/
	 tri.setOutlineThickness(2);
setting the thickness of the line, made for a better looking end result


 /**********************************************************************
 *  Briefly explain what you learned in the assignment.
 **********************************************************************/
In comp 2 I really struggles with recrusive functions. This project taught
me how to better implement and use recursive functions to improve the effiency
of my code.


/**********************************************************************
 *  List whatever help (if any) you received from the instructor,
 *  classmates, or anyone else.
 **********************************************************************/
N/A


/**********************************************************************
 *  Describe any serious problems you encountered.  
 *  If you didn't complete any part of any assignment, 
 *  the things that you didn't do, or didn't get working.                  
 **********************************************************************/



/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/
//none