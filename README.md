Letter Combinations of a Phone Number


Given a string containing digits from 2 to 9 (inclusive), return all the possible letter combinations that the number could denote. The resultant list should be sorted lexicographically.

The digits map to different letters as shown in the below image:


Example
String: 234
Combinations: [
    "adg", "adh", "adi",
    "aeg", "aeh", "aei",
    "afg", "afh", "afi",
    "bdg", "bdh", "bdi",
    "beg", "beh", "bei",
    "bfg", "bfh", "bfi",
    "cdg", "cdh", "cdi",
    "ceg", "ceh", "cei",
    "cfg", "cfh", "cfi"
]
Testing
Input Format
The first line contains an integer ‘T’, denoting the number of test cases.

For each test case, the input has a string denoting the phone number.

Output Format
For each test case, the output has the following lines:

The first line contains an integer ‘m’ denoting the total no of combinations.
The next line contains m space-separated strings denoting elements in that particular combination.
Sample Input
3
2
23
234
Expected Output
3
a b c
9
ad ae af bd be bf cd ce cf
27
adg adh adi aeg aeh aei afg afh afi bdg bdh bdi beg beh bei bfg bfh bfi cdg cdh cdi ceg ceh cei cfg cfh cfi