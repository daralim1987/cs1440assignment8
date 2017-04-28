//
// Created by Dara Lim on 4/22/17.
//

#ifndef ITAK_DICTIONARY_H
#define ITAK_DICTIONARY_H

#include <ostream>
#include<vector>

template <typename Key, typename Value>
class Dictionary
{
private:

public:
    void add(Key,Value);
    void removeByIndex(unsigned int index);
    void removeByKey(Key);


private:
};
template <typename Key, typename Value>
void Dictionary<Key, Value>::add(Key key, Value value)
{
};

template <typename Key, typename Value>
void Dictionary<Key, Value>::removeByIndex(unsigned int index)
{
};

template <typename Key, typename Value>
void Dictionary<Key, Value>::removeByKey(Key key)
{

};


#endif //ITAK_DICTIONARY_H
