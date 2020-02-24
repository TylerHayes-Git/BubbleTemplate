//BubbleTemplate.h by Tyler Hayes
#ifndef BUBBLETEMPLATE_H
#define BUBBLETEMPLATE_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using std::setw;
using std::cout;
using std::endl;
using std::size_t;

template <typename T>
void 
BubbleSortT (std::vector < T >& List){
	
	T hold;

   	 	cout << "Data items in original order:" << endl;

   		 for ( size_t i = 0; i < List.size(); ++i )
    	{
        	cout << setw(16) << List [ i ];
    	} // for i
    	
    bool swapMade = true;

	if (swapMade == true) {
		
    	for ( size_t pass = 0; pass < List.size(); ++pass )
    	{	
    		//cout << List.size() << endl;
			swapMade = false;
			
       		for ( size_t j = 0; j < List.size(); ++j )
        	{
           		 if ( List [ j ] > List [ j + 1 ] )
            	{
                	hold = List [ j ];
                	List [ j ] = List [ j + 1 ];
                	List [ j + 1 ] = hold; 
                	
                	cout << "\nSwap made:" << endl;
                	
					for ( size_t i = 0; i < List.size(); ++i )
    					{
        					cout << setw(16) << List [ i ];
    					}
                	
						swapMade = true;
					
           		} // if
            	
           		else
				{
           			swapMade = false;
        			//cout << "\n(No swap)\n" << endl; //<----Was used to check computation
				}// else

        	} // for j
        	
    	} // for pass
	
	}// if swap made
	
    		cout << endl << "\nData items in ascending order:" << endl;

    		for ( size_t i = 0; i < List.size(); ++i )
    		{
    	    	cout << setw ( 16 ) << List [ i ];
    		} // for i

    		cout << endl;
    			
}

void Test();

#endif
