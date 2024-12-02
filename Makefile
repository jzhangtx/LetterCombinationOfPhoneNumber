LetterCombinationOfPhoneNumber: LetterCombinationOfPhoneNumber.o
	g++ -g -o LetterCombinationOfPhoneNumber.exe LetterCombinationOfPhoneNumber.o -pthread    

LetterCombinationOfPhoneNumber.o: LetterCombinationOfPhoneNumber/LetterCombinationOfPhoneNumber.cpp
	g++ -g  -c -pthread LetterCombinationOfPhoneNumber/LetterCombinationOfPhoneNumber.cpp
