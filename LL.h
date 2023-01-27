template <typename T>
class LL 
{
    //contents of each node
    struct node 
    {
        T data;
        node* prev;
        node* next;
    };
    //iterator class to allow access of each node in main
   public:
    class Iterator 
    {
       public:
        friend class LL;
        Iterator();
        Iterator(node*);
        T operator*() const;
        Iterator operator++(int);
        Iterator operator++();
        Iterator operator--(int);
        Iterator operator--();
        bool operator==(const Iterator&) const;
        bool operator!=(const Iterator&) const;

       private:
        node* current;
    };

    LL();
    LL(const LL<T>&);
    const LL<T>& operator=(const LL<T>&);
    ~LL();
    void headInsert(const T&);
    void tailInsert(const T&);
    void headRemove();
    bool isEmpty() const;
    std::size_t size() const;
    Iterator begin() const;
    Iterator end() const;

   private:
    node * portal;
};

//iterator class implementation
template <typename T>
LL<T>::Iterator::Iterator() 
{
    
}

template <typename T>
LL<T>::Iterator::Iterator(node* ptr) 
{
    
}

template <typename T>
T LL<T>::Iterator::operator*() const 
{
    
}

template <typename T>
typename LL<T>::Iterator LL<T>::Iterator::operator++(int) 
{
   
}

template <typename T>
typename LL<T>::Iterator LL<T>::Iterator::operator++() 
{
    
}

template <typename T>
typename LL<T>::Iterator LL<T>::Iterator::operator--(int) 
{
    
}

template <typename T>
typename LL<T>::Iterator LL<T>::Iterator::operator--() 
{
    
}

template <typename T>
bool LL<T>::Iterator::operator==(const Iterator& rhs) const 
{
    
}

template <typename T>
bool LL<T>::Iterator::operator!=(const Iterator& rhs) const 
{
   
}

//Linked list class implementation
template <typename T>
LL<T>::LL() 
{
    
}

//copy constructor
template <typename T>
LL<T>::LL(const LL<T>& copy) 
{
   
}

template <typename T>
const LL<T>& LL<T>::operator=(const LL<T>& rhs) 
{
    
}

//destructor
template <typename T>
LL<T>::~LL() 
{
    
}

//head insert
template <typename T>
void LL<T>::headInsert(const T& item) 
{

}

//tail insert
template <typename T>
void LL<T>::tailInsert(const T& item) 
{
    
}

template <typename T>
void LL<T>::headRemove()
{
    
} 

template <typename T>
bool LL<T>::isEmpty() const
{
    
}

template <typename T>
std::size_t LL<T>::size() const
{
   
}

template <typename T>
typename LL<T>::Iterator LL<T>::begin() const 
{
    
}

template <typename T>
typename LL<T>::Iterator LL<T>::end() const 
{
   
}

