#include <iostream>
using namespace std;

int main()
{
    int number_of_words = 0;
    string previous;                // previous word, initialized to ""
    string current;                 // current word
    while (cin>>current) {          // read a stream of words
        ++number_of_words;          // increate word count
        if (previous == current)    // check if the word is the same as last
            cout << "word number " << number_of_words << "repeated: " << current << '\n';
        previous = current;
    }
}

// Sentence given: She she laughed "he he he!" because what he did did not look very very good good
// Program picked up did, very, good
// skips She, she because programming is case sensitive
// skips "he he he!" because '"he' != 'he' same with 'he!"'
