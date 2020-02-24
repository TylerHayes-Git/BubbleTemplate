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

