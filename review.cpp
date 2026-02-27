// 2024 mideterm   Q1 threshold vs average comparision Q2 derrivative  Q3 remove punct

bool compare(const vector<int>& v, float threshold) {
    if (v.empty()) return 0.0f > threshold;

    double sum = 0.0;
    for (size_t i = 0; i < v.size(); i++) sum += v[i];

    double avg = sum / v.size();
    return avg > threshold;
}

void takePolyDerivative(vector<double>& coeffs) {
    // derivative of 0 is 0
    if (coeffs.empty()) return;
    if (coeffs.size() == 1) {  // constant -> 0
        coeffs[0] = 0.0;
        return;
    }

    size_t n = coeffs.size() - 1; // highest power
    for (size_t i = 0; i < coeffs.size() - 1; i++) {
        size_t power = n - i;                 // power of this coeff
        coeffs[i] = coeffs[i] * (double)power;
    }
    coeffs.pop_back(); // drop constant term
}

#include <cctype>

void removePunctuation(string& s) {
    for (size_t i = 0; i < s.size(); i++) {
        if (ispunct((unsigned char)s[i])) {
            s.erase(i, 1);
            i--; // don't skip next char
        }
    }
}

// second largest number 
#include <limits>

int findSecondLargest(const vector<int>& v) {
    int largest = numeric_limits<int>::min();
    int second  = numeric_limits<int>::min();
    bool foundSecond = false;

    for (size_t i = 0; i < v.size(); i++) {
        int x = v[i];

        if (x > largest) {
            if (largest != numeric_limits<int>::min()) foundSecond = true;
            second = largest;
            largest = x;
        } else if (x < largest && x > second) {
            second = x;
            foundSecond = true;
        }
    }

    return foundSecond ? second : -1;
}
// score conversion 
char convertToLetter(int score) {
    if (score < 0 || score > 100) return 'I';
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}
// repeat string 
string repeatString(const string& s, int n) {
    if (n <= 0) return "";

    string out;
    for (int i = 0; i < n; i++) out += s;
    return out;
}

// two number operation 
int compareNumbers(int a, int b) {
    if (a > b) return a - b;
    return a + b;
}

// increment number 

void incrementNumbers(vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        v[i] += 1;
    }
}

// remove duplicate 
string removeConsecutiveDuplicates(const string& s) {
    if (s.empty()) return "";

    string out;
    out.push_back(s[0]);

    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) out.push_back(s[i]);
    }
    return out;
}

// remove vowel 
void removeVowels(string& s) {
    for (size_t i = 0; i < s.size(); i++) {
        char c = (char)tolower((unsigned char)s[i]);
        bool isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

        if (isVowel) {
            s.erase(i, 1);
            i--;
        }
    }
}
// rotate vector 

vector<int> rotateVector(const vector<int>& v, int k) {
    if (v.empty()) return v;

    int n = (int)v.size();
    k %= n;
    if (k < 0) k += n; // convert left rotations into right rotations

    vector<int> out(n);
    for (int i = 0; i < n; i++) {
        out[(i + k) % n] = v[i];
    }
    return out;
}
