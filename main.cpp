#include <bitset>
#include <cstring>
#include <iostream>

using std::bitset;
using std::string;

int getBitByPos(int n, int pos) {
    return bitset<32>(n).test(pos);
}

void switchBitByPos(int &n, int pos) {
    n = (int) bitset<32>(n).flip(pos).to_ulong();
}

int binToDec(bitset<32> bits) {
    return (int) bits.to_ulong();
}

bitset<32> decToBin(int x) {
    return {(unsigned long long) x};
}

void encryptByXOR(char original[]) {
    char key = 'X';  // crypt key
    int len = strlen(original);
    for (int i = 0; i < len; i++){
        original[i] = original[i] ^ key;
        std::cout << original[i];
    }
}

void decryptByXOR(char original[]) {
    char key = 'X';  // crypt key
    int len = strlen(original);
    for (int i = 0; i < len; i++){
        original[i] = original[i] ^ key;
        std::cout << original[i];
    }
}


int main() {
    char sample[] = "Something interesting";

    std::cout << "Original string: " << sample << std::endl << std::endl;

    std::cout << "Encrypted string: ";
    encryptByXOR(sample);

    std::cout << std::endl;

    std::cout << "Decrypted string: ";
    decryptByXOR(sample);

    return 0;
}
