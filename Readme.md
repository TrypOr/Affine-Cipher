Affine cipher
Affine cipher is a substitution cipher, where each letter of the alphabet is mapped to its
numeric equivalent, encrypted using a mathematical function and converted back to a
letter. Each letter is enciphered with the function (ax + b) mod m. Assume that we
correspond each letter with its position in the alphabet starting from 0 (A-0, B-1, C-2
etc.).
or example, we want to encrypt “AFFINE CIPHER” with a=5, b=8 and m=26.

Plaintext:      A   F   F   I   N   E   C   I   P   H   E   R

X:              0   5   5   8   13  4   2   8   15  7   4   17

(a*x+b)mod(m):  8   7   7   22  21  2   18  22  5   17  2   15

Ciphertext:     I   H   H   W   V   C   S   W   F   R   C   P       
