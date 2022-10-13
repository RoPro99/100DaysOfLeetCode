// Counts set bits of the integer
int setBits(int a) {
    int count = 0;
    while (a != 0) {
        if ((a & 1) == 1) {
            count++;
        }
        a >>= 1;
    }
    return count;
}
// Define custom comparator to be used in sort function
bool myComparator (int i, int j) {
    int i_bits = setBits(i);
    int j_bits = setBits(j);
    if (i_bits == j_bits)
        return i < j;

    return i_bits < j_bits;
}

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        std::sort(arr.begin(), arr.end(), myComparator);
        return arr;
    }
};