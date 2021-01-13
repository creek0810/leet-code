

typedef struct Trie Trie;
struct Trie {
    Trie* nodes[26];
    bool isWord;
} ;


/** Initialize your data structure here. */

Trie* trieCreate() {
    Trie* tree = (Trie*)malloc(sizeof(Trie));
    tree->isWord = false;
    memset(tree->nodes, 0, sizeof(Trie*) * 26);
    return tree;
}

/** Inserts a word into the trie. */
void trieInsert(Trie* obj, char * word) {
    Trie* curLoc = obj;
    for(int i=0; i<strlen(word); i++) {
        int loc = word[i] - 'a';
        if(curLoc->nodes[loc] == NULL) {
            curLoc->nodes[loc] = trieCreate();
        }
        curLoc = curLoc->nodes[loc];
    }
    curLoc->isWord = true;
}

/** Returns if the word is in the trie. */
bool trieSearch(Trie* obj, char * word) {
    Trie* curLoc = obj;
    for(int i=0; i<strlen(word); i++) {
        int loc = word[i] - 'a';
        if(curLoc->nodes[loc] == NULL) {
            return false;
        }
        curLoc = curLoc->nodes[loc];
    }
    return curLoc->isWord;
}

/** Returns if there is any word in the trie that starts with the given prefix. */
bool trieStartsWith(Trie* obj, char * prefix) {
    Trie* curLoc = obj;
    for(int i=0; i<strlen(prefix); i++) {
        int loc = prefix[i] - 'a';
        if(curLoc->nodes[loc] == NULL) {
            return false;
        }
        curLoc = curLoc->nodes[loc];
    }
    return true;
}

void trieFree(Trie* obj) {
    for(int i=0; i<26; i++) {
        if(obj->nodes[i]) {
            trieFree(obj->nodes[i]);
        }
    }
    free(obj);
}

/**
 * Your Trie struct will be instantiated and called as such:
 * Trie* obj = trieCreate();
 * trieInsert(obj, word);
 
 * bool param_2 = trieSearch(obj, word);
 
 * bool param_3 = trieStartsWith(obj, prefix);
 
 * trieFree(obj);
*/
