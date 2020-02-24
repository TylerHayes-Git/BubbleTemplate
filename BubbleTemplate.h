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
	bool swapMade;


   	 	cout << "Data items in original order:" << endl;

   		 for ( size_t i = 0; i < List.size(); ++i )
    	{
        	cout << setw(16) << List [ i ];
    	} // for i

		swapMade = true;
    	for ( size_t pass = 0; pass < List.size() && swapMade; ++pass )
    	{	
    		cout << "\n\n----New Pass----------------------------";
			swapMade = false;
			
       		for ( size_t j = 0; j < List.size() - 1; ++j )
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
            		//cout << "\n(No swap)\n" << endl; <----Was used to check computation
				}

        	} // for j
        	
    	} // for pass

    	cout << endl << "\nData items in ascending order:" << endl;

    	for ( size_t i = 0; i < List.size(); ++i )
    	{
    	    cout << setw ( 16 ) << List [ i ];
    	} // for i

    	cout << endl;
    			
}

void Test();

#endif
