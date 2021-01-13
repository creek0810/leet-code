typedef struct MagicDictionary MagicDictionary;
struct MagicDictionary {
    MagicDictionary* nodes[26];
    bool isWord;
} ;

/** Initialize your data structure here. */

MagicDictionary* magicDictionaryCreate() {
    MagicDictionary* tree = (MagicDictionary*)malloc(sizeof(MagicDictionary));
    tree->isWord = false;
    memset(tree->nodes, 0, sizeof(MagicDictionary*) * 26);
    return tree;
}

void magicDictionaryInsert(MagicDictionary* obj, char * word) {
    MagicDictionary* curLoc = obj;
    for(int i=0; i<strlen(word); i++) {
        int loc = word[i] - 'a';
        if(curLoc->nodes[loc] == NULL) {
            curLoc->nodes[loc] = magicDictionaryCreate();
        }
        curLoc = curLoc->nodes[loc];
    }
    curLoc->isWord = true;
}

void magicDictionaryBuildDict(MagicDictionary* obj, char ** dictionary, int dictionarySize) {
    for(int i=0; i<dictionarySize; i++) {
        magicDictionaryInsert(obj, dictionary[i]);
    }
}

bool magicDictionaryIn(MagicDictionary* obj, char * word) {
    MagicDictionary* curLoc = obj;
    for(int i=0; i<strlen(word); i++) {
        int loc = word[i] - 'a';
        if(curLoc->nodes[loc] == NULL) {
            return false;
        }
        curLoc = curLoc->nodes[loc];
    }
    return curLoc->isWord;
}

bool magicDictionarySearch(MagicDictionary* obj, char * searchWord) {
    char newWord[105] = {0};
    
    for(int i=0; i<strlen(searchWord); i++) {
        strcpy(newWord, searchWord);
        for(int j='a'; j<='z'; j++) {
            if(j == searchWord[i]) {
                continue;
            }
            newWord[i] = j;
            if(magicDictionaryIn(obj, newWord)) {
                return true;
            }
            
        } 
    }
    return false;
}

void magicDictionaryFree(MagicDictionary* obj) {
     for(int i=0; i<26; i++) {
        if(obj->nodes[i]) {
            magicDictionaryFree(obj->nodes[i]);
        }
    }
    free(obj);
}

/**
 * Your MagicDictionary struct will be instantiated and called as such:
 * MagicDictionary* obj = magicDictionaryCreate();
 * magicDictionaryBuildDict(obj, dictionary, dictionarySize);
 
 * bool param_2 = magicDictionarySearch(obj, searchWord);
 
 * magicDictionaryFree(obj);
*/
