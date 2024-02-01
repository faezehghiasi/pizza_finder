#pragma once
#include"BasicNode.h"
#include<vector>
class HashTableOfMainNodes
{
private:

	unsigned int sizeOfTable;
	//unsigned int hash2(const string& str);
	unsigned int hash1(const string& str);
	unsigned int finalHash(const string& key, int i);
	bool isPrime(int num);
	int nextPrime(int m);
	vector<BasicNode*>hashTable;
public:
	friend class TwoDTree;
	int search(string key);
	HashTableOfMainNodes():sizeOfTable(113){
		hashTable.resize(sizeOfTable);
	}
	void insert(BasicNode*);
	void resizeHashTable();
	void clearHashTable();

};

