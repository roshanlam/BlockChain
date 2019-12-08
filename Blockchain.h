//
//  Blockchain.h
//  BlockChainExample
//  Created by Roshan Lamichhane on 12/7/19.
//  Copyright © 2019 Roshan Lamichhane. All rights reserved.
//

#ifndef Blockchain_h
#define Blockchain_h

#include <vector>

// Blockchain Class
class Blockchain{
private:
    Block createGenesisBlock();
    std::vector<Block> chain;

public:
    // Constuctor
    Blockchain();
    
    // Public Functions
    std::vector<Block> getChain();
    Block *getLatestBlock();
    bool isChainValid();
    void addBlock(TransactionData data);
    void printChain();
};

#endif /* Blockchain_h */
