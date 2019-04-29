//
//  main.cpp
//  SmallestOverlapRegion
//
//  Created by Gang Peng on 11/6/18.
//  Copyright © 2018 Gang Peng. All rights reserved.
//

#include <iostream>
#include <fstream>

#include "normal.h"
#include "CNVSampleGroup.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    if(argc == 1){
        cout << "Get smallest overlap region (SOR) and CNV ratio in each SOR " <<endl;
        cout << "Usage :" <<endl;
        cout << "SOR InputFile OutputFile" << endl;
        cout << "Both input and output file should be set" << endl;
        return -1;
    }
    
    if(argc == 2){
        cout << "Both input and output file should be set" << endl;
        return -1;
    }
    
    ifstream fin(argv[1]);
    if(!fin.is_open()){
        cerr << "Cannot open file " << argv[1] <<endl;
        return -1;
    }
    
    CNVSampleGroup csg;
    
    while (!fin.eof()) {
        string fline;
        getline(fin, fline);
        if(fline.size() < 2){
            break;
        }
        csg.add(fline);
    }
    
    ofstream fout(argv[2]);
    fout<<csg<<endl;
    fout.close();
    return 0;
}
