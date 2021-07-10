// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{

public:
    //Constructor for initializing the cache capacity with the given value.
    class node
    {
    public:
        int val;
        int key;
        node *next;
        node *prev;
        node(int _key, int _val)
        {
            key = _key;
            val = _val;
        }
    };
    node *head = new node(-1, -1);
    node *tail = new node(-1, -1);
    int cap;
    unordered_map<int, node *> mp;
    LRUCache(int cap)
    {
        this->cap = cap;
        head->next = tail;
        tail->prev = head;
    }
    void addnode(node *newnode)
    {
        node *temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }
    void deletenode(node *delnode)
    {
        node *delprev = delnode->prev;
        node *delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if (mp.find(key) != mp.end())
        {
            node *resnode = mp[key];
            int res = resnode->val;
            mp.erase(key);
            deletenode(resnode);
            addnode(resnode);
            mp[key] = head->next;
            return res;
        }
        return -1;
    }

    //Function for storing key-value pair.
    void set(int key, int value)
    {
        if (mp.find(key) != mp.end())
        {
            node *existingNode = mp[key];
            mp.erase(key);
            deletenode(existingNode);
        }
        if (mp.size() == cap)
        {
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key, value));
        mp[key] = head->next;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);

        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends