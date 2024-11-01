# Atbash Cipher

The Atbash Cipher is a simple substitution cipher that replaces each letter of the alphabet with its reverse (e.g., A becomes Z, B becomes Y, etc.). This project implements the Atbash Cipher in C++.

[Wiki - For the interested](https://en.wikipedia.org/wiki/Atbash)

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)


## Installation
Clone the repository: 
```sh
bash git clone https://github.com/Zikithezikit/Atbash.git
cd Atbash
```
Compile the code:
```sh
g++ -o atbash Atbash.cpp
```

## Usage
To encode or decode a message using the Atbash Cipher, run:
```sh
./atbash your Message here
```

## Examples
Encoding "HELLO WORLD":
```sh
./atbash HELLO WORLD
```
Output:
```
SVOOL DLIOW
```
Decoding works the same way, since the Atbash Cipher is symmetrical.
