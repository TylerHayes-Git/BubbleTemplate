# **NOTICE**

The output for the strings is not completed.

The flag being that it doesn't output the phrase: _"Data items in ascending order:"_

The other lists sort correctly. So, it may be a compiler issue.

Though, I have executed the program with only the list of strings __with and without spaces__ ; and, the problem still persists.

# BubbleTemplate
An assignment that involves a template to sort multiple data types.

## Main File:

```C++
//Assignment_5.cpp by Tyler Hayes
#include "BubbleTemplate.h" 

int main(){

Test();

return 0;
}
```

## Header File:

```C++
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
```

## CPP File:

```C++
//BubbleTemplate.cpp by Tyler Hayes
#include "BubbleTemplate.h" 

void Test(){
	
	std::vector<int> shortArr;
	shortArr.push_back(5);
	shortArr.push_back(6);
	shortArr.push_back(4);
	shortArr.push_back(9);
	shortArr.push_back(10);
	shortArr.push_back(12);
	shortArr.push_back(89);
	shortArr.push_back(68);
	shortArr.push_back(45);
	shortArr.push_back(41);
	BubbleSortT( shortArr );

	std::vector<double> doubleArr;
	doubleArr.push_back(2.0);
	doubleArr.push_back(6.0);
	doubleArr.push_back(4.0);
	doubleArr.push_back(8.0);
	doubleArr.push_back(10.0);
	doubleArr.push_back(12.0);
	doubleArr.push_back(87.0);
	doubleArr.push_back(68.0);
	doubleArr.push_back(45.0);
	doubleArr.push_back(38.0);
	BubbleSortT( doubleArr );
	
	std::vector<std::string> stringArr;
	stringArr.push_back("two");
	stringArr.push_back("six");
	stringArr.push_back("four");
	stringArr.push_back("eight");
	stringArr.push_back("ten");
	stringArr.push_back("twelve");
	stringArr.push_back("eighty seven");
	stringArr.push_back("sixty eight");
	stringArr.push_back("forty five");
	stringArr.push_back("thirty eight");	
	BubbleSortT( stringArr );
	
};

```

## Output:

The output printed with a width of 16 to allow for the proper spacing of the words and numbers.

```
Data items in original order:
               5               6               4               9              10              12              89              68              45              41
Swap made:
               5               4               6               9              10              12              89              68              45              41
Swap made:
               5               4               6               9              10              12              68              89              45              41
Swap made:
               5               4               6               9              10              12              68              45              89              41
Swap made:
               5               4               6               9              10              12              68              45              41              89
Swap made:
               4               5               6               9              10              12              68              45              41              89
Swap made:
               4               5               6               9              10              12              45              68              41              89
Swap made:
               4               5               6               9              10              12              45              41              68              89
Swap made:
               4               5               6               9              10              12              41              45              68              89

Data items in ascending order:
               4               5               6               9              10              12              41              45              68              89
Data items in original order:
               2               6               4               8              10              12              87              68              45              38
Swap made:
               2               4               6               8              10              12              87              68              45              38
Swap made:
               2               4               6               8              10              12              68              87              45              38
Swap made:
               2               4               6               8              10              12              68              45              87              38
Swap made:
               2               4               6               8              10              12              68              45              38              87
Swap made:
               2               4               6               8              10              12              45              68              38              87
Swap made:
               2               4               6               8              10              12              45              38              68              87
Swap made:
               2               4               6               8              10              12              38              45              68              87

Data items in ascending order:
               2               4               6               8              10              12              38              45              68              87
Data items in original order:
             two             six            four           eight             ten          twelve    eighty seven     sixty eight      forty five    thirty eight
Swap made:
             six             two            four           eight             ten          twelve    eighty seven     sixty eight      forty five    thirty eight
Swap made:
             six            four             two           eight             ten          twelve    eighty seven     sixty eight      forty five    thirty eight
Swap made:
             six            four           eight             two             ten          twelve    eighty seven     sixty eight      forty five    thirty eight
Swap made:
             six            four           eight             ten             two          twelve    eighty seven     sixty eight      forty five    thirty eight
Swap made:
             six            four           eight             ten          twelve             two    eighty seven     sixty eight      forty five    thirty eight
Swap made:
             six            four           eight             ten          twelve    eighty seven             two     sixty eight      forty five    thirty eight
Swap made:
             six            four           eight             ten          twelve    eighty seven     sixty eight             two      forty five    thirty eight
Swap made:
             six            four           eight             ten          twelve    eighty seven     sixty eight      forty five             two    thirty eight
Swap made:
             six            four           eight             ten          twelve    eighty seven     sixty eight      forty five    thirty eight             two
```
