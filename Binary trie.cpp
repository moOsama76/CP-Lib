#include <bits/stdc++.h>
using namespace std;

struct trie {
    trie* child[2];

    trie() {
        memset(child, 0, sizeof(child));
    }

    void insert(int x, int bit) {
        if(bit < 0)
            return;
        else {
            int cur = (x>>bit)&1;
            if(child[cur] == 0)
                child[cur] = new trie();
            child[cur]->insert(x, bit-1);
        }
    }


};


int main()
{

}
