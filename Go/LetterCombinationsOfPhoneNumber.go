package main

import "fmt"

var dict map[byte][]byte = map[byte][]byte{
	2: {'a', 'b', 'c'},
	3: {'d', 'e', 'f'},
	4: {'g', 'h', 'i'},
	5: {'j', 'k', 'l'},
	6: {'m', 'n', 'o'},
	7: {'p', 'q', 'r', 's'},
	8: {'t', 'u', 'v'},
	9: {'w', 'x', 'y', 'z'},
}

func GetCombinations(digits string, index int, r []byte, result *[]string) {
	if index == len(digits) {
		c := make([]byte, len(r))
		copy(c, r)
		*result = append(*result, string(c))
		return
	}

	letters := dict[digits[index]-'0']
	for i := 0; i < len(letters); i++ {
		r = append(r, letters[i])
		GetCombinations(digits, index+1, r, result)
		r = r[:len(r)-1]
	}
}

func LetterCombinations(digits string) []string {
	var result []string
	var r []byte

	GetCombinations(digits, 0, r, &result)
	return result
}

func main() {
	for {
		fmt.Print("Please enter the digit string (2-9 only): ")
		var digits string
		fmt.Scan(&digits)
		if digits == "q" || digits == "Q" {
			break
		}

		result := LetterCombinations(digits)
		fmt.Println("There are", len(result), "combinations: ")
		for i := 0; i < len(result); i++ {
			fmt.Print(result[i])
			if i != len(result)-1 {
				fmt.Print(", ")
			}
			if (i+1)%3 == 0 {
				fmt.Println("")
			}
		}
		fmt.Println("")
	}
}
