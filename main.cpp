//
//  Block.cpp
//  Created by Roshan Lamichhane on 12/7/19.
//  Copyright © 2019 Roshan Lamichhane. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <vector>

#include "TransactionData.h"
#include "Block.h"
#include "Blockchain.h"

using namespace std;

int main(){
    // Start Blockchain
    // I named my RoCoin
    Blockchain RoCoin;
    
    // Data for first block
    time_t data1Time;
    TransactionData data1(1.5, "Roshan", "Lamichhane", time(&data1Time));
    RoCoin.addBlock(data1);
    
    // Data for second block
    time_t data2Time;
    TransactionData data2(0.2233, "Lidia", "Gracia", time(&data2Time));
    RoCoin.addBlock(data2);
    
    // Let's see what's in the RoCoin blockchain!
    RoCoin.printChain();
    
    // Is it valid?
    printf("\nIs chain still valid? %d\n", RoCoin.isChainValid());
    
    // Someone's getting sneaky
    Block *hackBlock = RoCoin.getLatestBlock();
    hackBlock->data.amount = 10000; // Oh yeah!
    hackBlock->data.receiverKey = "Roshan"; // mwahahahaha!

    // Let's look at data
    RoCoin.printChain();

    // Awww! Why is it not valid?
    printf("\nIs chain still valid? %d\n", RoCoin.isChainValid());
    
    return 0;
}
