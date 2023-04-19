//
// Created by Jessie Mejia on 2/16/23.
//

#include "QueensRecursive.h"

QueensRecursive::QueensRecursive(){

}

QueensRecursive::QueensRecursive(int n) : n(6) {
    // create board
    std::vector<int> temp(n, -1);
    std::vector<int> x = temp;
    solve(0);

    if(x[n-1] ==-1)
    {
        std::cout<< "No solution"<<std::endl;
    }
}

bool QueensRecursive::place(int k, int i) {
    for(int j=0; j<k ;j++)
    {
        if((x[j]==i)||(abs(x[j]-i) == abs(j-k)))
        {
            return false;
        }
    }
    return true;
}

void QueensRecursive::print() {
    for(int i=0; i < n;i++)
    {
        for(int j=0;j<x[i];j++)
        {
            std::cout<<"# ";
        }
        std::cout<<"Q ";
        for(int j=x[i];j<n-1;j++)
        {
            std::cout<<"# ";
        }
        std::cout<<std::endl;
    }
    for(int i=0;i<x.size();i++)
    {
        std::cout<<x[i] <<" ";
    }
    std::cout<<std::endl<<std::endl;
}

bool QueensRecursive::solve(int k) {
    for(int i=0; i<n;i++)
    {
        if(place(k,i))
        {
            x[k]= i;
            if(k==n-1)
            {
                print();
            }
            else
            {
                solve(k+1);
            }
        }
    }
}

