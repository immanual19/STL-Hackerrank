//
//  main.cpp
//  vector1
//
//  Created by A Emmanual Sarker on 12/6/21.
//  Copyright © 2021 A Emmanual Sarker. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>
#include <queue>
#include <array>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> vec;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
