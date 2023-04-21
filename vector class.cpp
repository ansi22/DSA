template<class T>
    
class Vector {
    T* data;
    int size;
    public:
//     add element
//     access the ith element
//     constructor
//     destructor
//     pop back
    Vector() {
        data=NULL;
        size=0;
    }
    
    Vector(T a[], int n) {
        size=n;
        data=new T[n];
        for(int i=0;i<n;i++) {
            data[i]=a[i];
        }
    }
    ~Vector() {
        if(data!=NULL) {
            delete[] data;
        }
    }
    
    void push_back(const T& item) {
        T* temp=new T[size+1];
        for(int i=0;i<size;i++) {
            temp[i]=data[i];
        }
        temp[size]=item;
        size++;
        if(data!=NULL) {
            delete[] data;
        }
        
        data=temp;
    }
    
    T& operator[](int i) {
        return data[i];
    }
    
    int getSize() {
        return size;
    }
    
    void pop_back() {
        size--;
    }
    
};
int main() {
    int ar[]={1,2,3,4,5,6};
    Vector<int> v(ar, 6);
    
    for(int i=0;i<6;i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    v.push_back(7);
    
    for(int i=0;i<v.getSize();i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    v.pop_back();
   
    for(int i=0;i<v.getSize();i++) {
        cout<<v[i]<<" ";
    }
}
